import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
import math

class TurtleController(Node):
    def __init__(self):
        super().__init__('turtle_controller')
        self.publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.subscriber = self.create_subscription(Pose, '/turtle1/pose', self.update_pose, 10)
        self.pose = Pose()
        self.target_x = 9.0  # Target position x
        self.target_y = 9.0  # Target position y
        self.pose_received = False  # Flag to check if pose is received
        self.timer = self.create_timer(0.1, self.control_loop)  # Control loop timer

    def update_pose(self, msg):
        """Update the current pose of the turtle."""
        self.pose = msg
        self.get_logger().info(f'Current Pose - x: {self.pose.x}, y: {self.pose.y}, theta: {self.pose.theta}')
        self.pose_received = True

    def control_loop(self):
        if not self.pose_received:
            return  # Wait until pose is received

        # Calculate Euclidean distance to target position
        distance_to_target = math.sqrt((self.target_x - self.pose.x) ** 2 + (self.target_y - self.pose.y) ** 2)

        # Calculate angle to target
        angle_to_target = math.atan2(self.target_y - self.pose.y, self.target_x - self.pose.x)
        
        # Calculate angular error (difference between the turtle's current orientation and the angle to the target)
        angular_error = angle_to_target - self.pose.theta
        
        # Normalize angular error to [-pi, pi]
        if angular_error > math.pi:
            angular_error -= 2 * math.pi
        elif angular_error < -math.pi:
            angular_error += 2 * math.pi

        # Control gains
        linear_gain = 1.5  # Proportional gain for linear velocity
        angular_gain = 6.0  # Proportional gain for angular velocity

        msg = Twist()

        if distance_to_target > 0.1:  # If the turtle is far from the target
            # Set linear and angular velocities
            msg.linear.x = linear_gain * distance_to_target  # Move faster as we get further from the target
            msg.angular.z = angular_gain * angular_error  # Rotate faster as angular error increases
        else:
            # If the turtle is close to the target, stop moving
            msg.linear.x = 0.0
            msg.angular.z = 0.0
            self.get_logger().info("Turtle reached the target position!")
            exit()

        self.publisher.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = TurtleController()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()