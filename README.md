# DYNUS Lite

This is an optimized, lighter version of the navigation framework DYNUS. 

## System requirements
* **OS:** Ubuntu 22.04 LTS
* **ROS:** ROS 2 Humble
* **Environment:** Gazebo 11.10.2
* **Optimizer:** Gurobi Optimizer (WSL licence, will modify the setup procedure to set it up automatically).

## Native installation

**Cloning**
```bash
mkdir -p ~/code
cd ~/code
git clone https://github.com/idra-lab/dynus_lite.git
```
**Run setup.sh file**
```bash
cd dynus_lite
chmod +x setup.sh
./setup.sh
```


## Running the simulation
```bash
source /opt/ros/humble/setup.bash
source /usr/share/gazebo/setup.sh
source ~/code/dynus_lite/dynus_lite_ws/install/setup.bash
export GAZEBO_PLUGIN_PATH=$GAZEBO_PLUGIN_PATH:~/code/dynus_lite/dynus_lite_ws/install/ros2_livox_simulation/lib:~/code/dynus_lite/dynus_lite_ws/install/realsense_gazebo_plugin/lib
export ROS_DOMAIN_ID=7
cd ~/code/dynus_lite/dynus_lite_ws/src/dynus/launch/
python3 run_single_sim.py --env easy_forest
```

An rviz page will open and the simulation will start in 15-20 seconds. As it starts, it is possible to notice the point cloud populating and the first obstacles are becoming visible.

To move the drone hit 'G' and click a point around the drone.
