from setuptools import find_packages
from setuptools import setup

setup(
    name='decomp_ros_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('decomp_ros_msgs', 'decomp_ros_msgs.*')),
)
