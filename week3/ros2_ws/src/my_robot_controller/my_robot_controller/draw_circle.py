import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class DrawCircleNode(Node):
    def __init__(self):
        super().__init__('circle_controller')
        self.cmd_publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        timer_period = 0.5 # seconds
        self.timer = self.create_timer(timer_period, self.send_velocity_command)
        self.get_logger().info("Draw circle node started")

    def send_velocity_command(self):
        msg = Twist()
        msg.linear.x = 1.0 # Set linear velocity
        msg.angular.z = 1.0 # Set angular velocity
        self.cmd_publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    draw_circle_node = DrawCircleNode()
    rclpy.spin(draw_circle_node)
    draw_circle_node.destroy_node()
    rclpy.shutdown()