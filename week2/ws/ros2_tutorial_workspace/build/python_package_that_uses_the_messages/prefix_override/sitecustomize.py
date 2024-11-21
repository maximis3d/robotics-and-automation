import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/max/robotics-and-automation/week2/ws/ros2_tutorial_workspace/install/python_package_that_uses_the_messages'
