from setuptools import find_packages
from setuptools import setup

setup(
    name='mission_mode',
    version='5.4.1',
    packages=find_packages(
        include=('mission_mode', 'mission_mode.*')),
)
