import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
class LaserScanSubscriber(Node):
    def __init__(self):
        super().__init__('laser_scan_subscriber')
        self.subscription = self.create_subscription(
        LaserScan, '/scan', self.listener_callback, 10)
    def listener_callback(self, msg):
        self.get_logger().info(f'Closest obstacle at: {min(msg.ranges)} meters')

def main(args=None):
    rclpy.init(args=args)
    node = LaserScanSubscriber()
    rclpy.spin(node)
    rclpy.shutdown()
if __name__ == '__main__':
    main()