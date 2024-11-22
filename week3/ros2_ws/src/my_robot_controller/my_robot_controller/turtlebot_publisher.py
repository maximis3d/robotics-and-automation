import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
class TurtleBotPublisher(Node):

    def __init__(self):
        super().__init__('turtlebot_publisher')
        self.publisher = self.create_publisher(Twist, '/cmd_vel', 10)
        self.timer = self.create_timer(0.5, self.move)

    def move(self):
        msg = Twist()
        msg.linear.x = 5.0 # Forward velocity
        msg.angular.z = 5.0 # Angular velocity for slight turn
        self.publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = TurtleBotPublisher()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()