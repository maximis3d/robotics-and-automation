from setuptools import find_packages, setup

package_name = 'my_robot_controller'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='max',
    maintainer_email='marstonvisuals@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'draw_circle = my_robot_controller.draw_circle:main',
            'turtle_controller = my_robot_controller.turtle_controller:main',
            'turtlebot_publisher = my_robot_controller.turtlebot_publisher:main',
            'laser_scan_subscriber = my_robot_controller.laser_scan_subscriber:main',
        ],
    },
)
