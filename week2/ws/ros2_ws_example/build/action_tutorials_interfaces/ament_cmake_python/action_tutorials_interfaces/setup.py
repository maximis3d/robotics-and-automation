from setuptools import find_packages
from setuptools import setup

setup(
    name='action_tutorials_interfaces',
    version='0.20.5',
    packages=find_packages(
        include=('action_tutorials_interfaces', 'action_tutorials_interfaces.*')),
)
