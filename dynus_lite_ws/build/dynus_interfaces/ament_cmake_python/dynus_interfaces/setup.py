from setuptools import find_packages
from setuptools import setup

setup(
    name='dynus_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('dynus_interfaces', 'dynus_interfaces.*')),
)
