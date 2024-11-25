import rclpy
from rclpy.node import Node
from math import sqrt, atan2, cos, sin, pi
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Quaternion
import numpy as np
last_odom = None
pose = [0.0, 0.0, 0.0]
a1 = 0.10
a2 = 0.10
a3 = 0.10
a4 = 0.10
new_odom_frame = ""
odom_frame = ""

class OdomNoiseAdder(Node):
    def __init__(self):
        super().__init__('odom_noise_adder')
        self.subscription = self.create_subscription(Odometry, '/odom/wheel', self.get_rotation, 10)
        self.publisher_ = self.create_publisher(Odometry, '/odom/wheel/noisy', 10)

    def euler_from_quaternion(self, quaternion):
        """
        Converts quaternion (w in last place) to euler roll, pitch, yaw
        quaternion = [x, y, z, w]
        """
        x = quaternion.x
        y = quaternion.y
        z = quaternion.z
        w = quaternion.w
        sinr_cosp = 2 * (w * x + y * z)
        cosr_cosp = 1 - 2 * (x * x + y * y)
        roll = np.arctan2(sinr_cosp, cosr_cosp)
        sinp = 2 * (w * y - z * x)
        pitch = np.arcsin(sinp)
        siny_cosp = 2 * (w * z + x * y)
        3
        cosy_cosp = 1 - 2 * (y * y + z * z)
        yaw = np.arctan2(siny_cosp, cosy_cosp)
        return roll, pitch, yaw

    def get_rotation(self, msg):
        global last_odom, pose, a1, a2, a3, a4
        q = msg.pose.pose.orientation
        (r, p, theta2) = self.euler_from_quaternion(q)

        if last_odom is None:
            last_odom = msg
            pose[0] = msg.pose.pose.position.x
            pose[1] = msg.pose.pose.position.y
            pose[2] = theta2
        else:
            dx = msg.pose.pose.position.x - last_odom.pose.pose.position.x
            dy = msg.pose.pose.position.y - last_odom.pose.pose.position.y
            trans = sqrt(dx * dx + dy * dy)
            q = last_odom.pose.pose.orientation
            (r, p, theta1) = self.euler_from_quaternion(q)
            rot1 = atan2(dy, dx) - theta1
            rot2 = theta2 - theta1 - rot1
            sd_rot1 = a1 * abs(rot1) + a2 * trans
            sd_rot2 = a1 * abs(rot2) + a2 * trans
            sd_trans = a3 * trans + a4 * (abs(rot1) + abs(rot2))
            trans += np.random.normal(0, sd_trans * sd_trans)
            rot1 += np.random.normal(0, sd_rot1 * sd_rot1)
            rot2 += np.random.normal(0, sd_rot2 * sd_rot2)
            pose[0] += trans * cos(theta1 + rot1)
            pose[1] += trans * sin(theta1 + rot1)
            pose[2] += rot1 + rot2
            last_odom = msg

        # Update position and yaw in the message
        msg.pose.pose.position.x = pose[0]
        msg.pose.pose.position.y = pose[1]
        quaternion = self.quaternion_from_euler(r, p, pose[2])
        msg.pose.pose.orientation.x = quaternion[0]
        msg.pose.pose.orientation.y = quaternion[1]
        msg.pose.pose.orientation.z = quaternion[2]
        msg.pose.pose.orientation.w = quaternion[3]
        self.publisher_.publish(msg)
    def quaternion_from_euler(self, roll, pitch, yaw):
        """
        Converts euler roll, pitch, yaw to quaternion (w in last place)
        """
        cy = np.cos(yaw * 0.5)
        sy = np.sin(yaw * 0.5)
        cp = np.cos(pitch * 0.5)
        sp = np.sin(pitch * 0.5)
        cr = np.cos(roll * 0.5)
        sr = np.sin(roll * 0.5)
        q = [0] * 4
        q[0] = cy * cp * cr + sy * sp * sr
        q[1] = cy * cp * sr - sy * sp * cr
        q[2] = sy * cp * sr + cy * sp * cr
        q[3] = sy * cp * cr - cy * sp * sr
        return q

def main(args=None):
    rclpy.init(args=args)
    minimal_subscriber = OdomNoiseAdder()
    rclpy.spin(minimal_subscriber)
    # Destroy the node explicitly
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()