from setuptools import find_packages
from setuptools import setup

setup(
    name='snapstack_msgs2',
    version='5.4.1',
    packages=find_packages(
        include=('snapstack_msgs2', 'snapstack_msgs2.*')),
)
