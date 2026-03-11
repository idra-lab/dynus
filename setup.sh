#!/bin/bash 
# DYNUS Lite - Setup for Ubuntu 22.04 (ROS 2 Humble)
set -e # Stop script at first error

echo "Starting Setup of DYNUS Lite..."

REPO_ROOT="$(cd "$(dirname "$0")" && pwd)"
WS_DIR="${REPO_ROOT}/dynus_lite_ws"

# Ask for the administrator password upfront
sudo -v

echo "Checking system requirements..."

# 1. Controllo Versione Ubuntu (deve essere 22.04)
if ! grep -q "22.04" /etc/os-release; then
    echo "CRITICAL ERROR: DYNUS Lite requires Ubuntu 22.04 (Jammy Jellyfish)."
    echo "Your current system is:"
    grep "PRETTY_NAME" /etc/os-release | cut -d '=' -f 2 | tr -d '"'
    echo "Setup interrupted to avoid system damage."
    exit 1
fi
echo "Ubuntu 22.04 found."

# 2. Controllo Installazione Base ROS 2 Humble
if [ ! -f "/opt/ros/humble/setup.bash" ]; then
    echo "CRITICAL ERROR: ROS 2 Humble is not installed in /opt/ros/humble."
    echo "Before running this script, you need to install the ROS 2 Humble base."
    echo "Follow the official guide: https://docs.ros.org/en/humble/Installation/Ubuntu-Install-Debians.html"
    exit 1
fi
echo "ROS 2 Humble found."

echo "All system requirements are satisfied. Proceeding with installation..."

echo "Dependency installation..."
sudo apt-get update
sudo apt-get install -q -y --no-install-recommends git wget build-essential cmake g++ tmux vim tmuxp make openssh-server net-tools xterm python3-pip 
pip install pymavlink
sudo apt-get install -y libomp-dev libpcl-dev libeigen3-dev


# Installing ROS 2 packages essential for navigation and simulation
sudo apt-get install -y \
    ros-humble-octomap \
    ros-humble-octomap-msgs \
    ros-humble-octomap-ros \
    ros-humble-octomap-rviz-plugins \
    ros-humble-pcl-conversions \
    ros-humble-pcl-ros \
    ros-humble-gazebo-ros-pkgs \
    ros-humble-tf-transformations \
    ros-humble-tf2-tools \
    ros-humble-rqt-tf-tree

# Install mavros 
sudo apt install -y ros-humble-mavros 
sudo apt install -y ros-humble-mavros-extras 
wget -qO- https://raw.githubusercontent.com/mavlink/mavros/ros2/mavros/scripts/install_geographiclib_datasets.sh | sudo bash

# Add user to dialout group to use ttyACM port
sudo usermod -aG dialout ${USER}

# Safe copy of get_init_pose.sh
cd "${REPO_ROOT}"
if [ -f "get_init_pose.sh" ]; then
    cp get_init_pose.sh ~/code/
fi
    
echo "Checking integrity of Gazebo installation..."
if ! command -v gazebo &> /dev/null; then
    echo "CRITICAL ERROR: The command 'gazebo' is not recognized by the system."
    echo "Check your internet connection or run manually: sudo apt-get install ros-humble-gazebo-ros-pkgs"
    exit 1
fi

GAZEBO_VERSION=$(gazebo --version | grep -m 1 "version" | awk '{print $5}' | cut -d'.' -f1)

if [ "$GAZEBO_VERSION" != "11" ]; then
    echo "CRITICAL ERROR: Detected unsupported version of Gazebo (Version: $GAZEBO_VERSION)."
    echo "DYNUS Lite requires specifically Gazebo 11 (Classic)."
    exit 1
fi

if [ ! -f "/usr/share/gazebo/setup.sh" ]; then
    echo "CRITICAL ERROR: The configuration file /usr/share/gazebo/setup.sh is missing."
    exit 1
fi

echo "Gazebo 11 is installed and ready for simulation."

echo "Gurobi Optimizer configuration (V11.0.3)..."
if [ ! -d "/opt/gurobi1103" ]; then
    echo "Downloading Gurobi Optimizer..."
    wget https://packages.gurobi.com/11.0/gurobi11.0.3_linux64.tar.gz -P /tmp
    tar -xzf /tmp/gurobi11.0.3_linux64.tar.gz -C /tmp
    sudo mv /tmp/gurobi1103/ /opt/
    rm /tmp/gurobi11.0.3_linux64.tar.gz
    
    # Compilation of Gurobi C++ library
    cd /opt/gurobi1103/linux64/src/build 
    sudo make && sudo cp libgurobi_c++.a ../../lib/
    
    echo "Adding Gurobi to your ~/.bashrc..."
    echo "" >> ~/.bashrc
    echo "# Gurobi for DYNUS" >> ~/.bashrc
    echo 'export GUROBI_HOME="/opt/gurobi1103/linux64"' >> ~/.bashrc
    echo 'export PATH="${PATH}:${GUROBI_HOME}/bin"' >> ~/.bashrc
    echo 'export LD_LIBRARY_PATH="${GUROBI_HOME}/lib:${LD_LIBRARY_PATH}"' >> ~/.bashrc
else
    echo "Gurobi is already present in /opt/gurobi1103. Skipping installation."
fi

# Temporarily applying Gurobi for the rest of the script
export GUROBI_HOME="/opt/gurobi1103/linux64"
export PATH="${PATH}:${GUROBI_HOME}/bin"
export LD_LIBRARY_PATH="${GUROBI_HOME}/lib:${LD_LIBRARY_PATH}"


echo "Compilation of Livox-SDK2 (System Library)..."
cd "${REPO_ROOT}/Livox-SDK2"
if [ ! -d "build" ]; then
    mkdir -p build && cd build  
    cmake .. && make -j
    sudo make install 
fi

touch "${REPO_ROOT}/Livox-SDK2/COLCON_IGNORE"

echo "Auto-Patching ROS 2..."
cd "${WS_DIR}"

# Patch Livox ROS 2
if [ -d "src/livox_ros_driver2" ]; then
    cp src/livox_ros_driver2/package_ROS2.xml src/livox_ros_driver2/package.xml
fi


echo "Final compilation of ROS 2..."
cd "${WS_DIR}"
source /opt/ros/humble/setup.bash
colcon build --packages-select decomp_util decomp_ros_msgs snapstack_msgs2

source install/setup.bash
colcon build --packages-select livox_ros_driver2 --cmake-args -DROS_EDITION=ROS2 -DHUMBLE_ROS=humble

source install/setup.bash
colcon build --allow-overriding gazebo_dev gazebo_msgs gazebo_ros gazebo_ros_pkgs gazebo_plugins

# Install and configure cyclonedds
#sudo apt install -y ros-humble-rmw-cyclonedds-cpp
#sudo apt install -y iw # Retrieves WiFi card name

#echo >> ~/.bashrc
#echo '# ROS2 RTPS network' >> ~/.bashrc
#echo 'export ROS_DOMAIN_ID=10' >> ~/.bashrc
#echo 'export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp' >> ~/.bashrc
#echo 'export ROS_AUTOMATIC_DISCOVERY_RANGE=SUBNET' >> ~/.bashrc
#echo "export CYCLONEDDS_URI=\"<CycloneDDS><Domain><General><NetworkInterfaceAddress>$(iw dev | awk '$1=="Interface"{print $2}')</NetworkInterfaceAddress></General></Domain></CycloneDDS>\"" >> ~/.bashrc
#echo >> ~/.bashrc
#echo '# Path to library for cyclonedds' >> ~/.bashrc
#echo 'export LD_LIBRARY_PATH=/opt/ros/humble/lib/x86_64-linux-gnu:$LD_LIBRARY_PATH' >> ~/.bashrc

# Add ROS 2 sourcing to .bashrc safely (only if it doesn't exist)
if ! grep -q "source /opt/ros/humble/setup.bash" ~/.bashrc; then
    echo 'source /opt/ros/humble/setup.bash' >> ~/.bashrc
fi

echo "========================================================="
echo "SETUP COMPLETED SUCCESSFULLY!"
echo "IMPORTANT: Close this terminal and open a new one, or run:"
echo "   source ~/.bashrc"
echo "   to apply all the environment variables correctly."
echo "========================================================="