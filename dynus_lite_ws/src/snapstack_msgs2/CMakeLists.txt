cmake_minimum_required(VERSION 3.14.4)
project(snapstack_msgs2)

# ROS1:
# find_package(catkin REQUIRED COMPONENTS
#   message_generation
#   std_msgs
#   geometry_msgs
#   nav_msgs
#   std_srvs
# )

find_package(ament_cmake)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(std_srvs REQUIRED)

################################################
## Declare ROS messages, services and actions ##
################################################

## To declare and build messages, services or actions from within this
## package, follow these steps:
## * Let MSG_DEP_SET be the set of packages whose message types you use in
##   your messages/services/actions (e.g. std_msgs, actionlib_msgs, ...).
## * In the file package.xml:
##   * add a build_depend tag for "message_generation"
##   * add a build_depend and a run_depend tag for each package in MSG_DEP_SET
##   * If MSG_DEP_SET isn't empty the following dependency has been pulled in
##     but can be declared for certainty nonetheless:
##     * add a run_depend tag for "message_runtime"
## * In this file (CMakeLists.txt):
##   * add "message_generation" and every package in MSG_DEP_SET to
##     find_package(catkin REQUIRED COMPONENTS ...)
##   * add "message_runtime" and every package in MSG_DEP_SET to
##     catkin_package(CATKIN_DEPENDS ...)
##   * uncomment the add_*_files sections below as needed
##     and list every .msg/.srv/.action file to be processed
##   * uncomment the generate_messages entry below
##   * add every package in MSG_DEP_SET to generate_messages(DEPENDENCIES ...)

## Generate messages in the 'msg' folder
# ROS1
# add_message_files(
#   FILES
#   ControlLog.msg
#   AttitudeCommand.msg
#   Goal.msg
#   QuadFlightMode.msg
#   State.msg
#   CommAge.msg
#   IMU.msg
#   SMCData.msg
#   Motors.msg
#   VioFilterState.msg
#   TimeFilter.msg
# )


## Generate services in the 'srv' folder
# add_service_files(
#   FILES
#   Service1.srv
#   Service2.srv
# )

## Generate actions in the 'action' folder
# add_action_files(
#   FILES
#   Action1.action
#   Action2.action
# )

## Generate added messages and services with any dependencies listed here
# ROS1
# generate_messages(
#   DEPENDENCIES
#   std_msgs
#   geometry_msgs
#   nav_msgs
# )

# ROS2
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/ControlLog.msg"
  "msg/AttitudeCommand.msg"
  "msg/Goal.msg"
  "msg/QuadFlightMode.msg"
  "msg/State.msg"
  "msg/CommAge.msg"
  "msg/IMU.msg"
  "msg/SMCData.msg"
  "msg/Motors.msg"
  "msg/VioFilterState.msg"
  "msg/TimeFilter.msg"
  DEPENDENCIES std_msgs geometry_msgs nav_msgs builtin_interfaces
)

###################################
## catkin specific configuration ##
###################################
## The catkin_package macro generates cmake config files for your package
## Declare things to be passed to dependent projects
## INCLUDE_DIRS: uncomment this if you package contains header files
## LIBRARIES: libraries you create in this project that dependent projects also need
## CATKIN_DEPENDS: catkin_packages dependent projects also need
## DEPENDS: system dependencies of this project that dependent projects also need

#ROS1:
# catkin_package(
# #  INCLUDE_DIRS include
# #  LIBRARIES outer_loop
# #  CATKIN_DEPENDS other_catkin_pkg
# #  DEPENDS system_lib
#    CATKIN_DEPENDS message_runtime std_msgs geometry_msgs nav_msgs actionlib_msgs std_srvs
# )

#ROS2:
ament_export_dependencies(
  rosidl_default_runtime
  std_msgs
  geometry_msgs
  nav_msgs
  actionlib_msgs
  std_srvs 
)

ament_package()
