import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/lorenzo/code/dynus_lite/dynus_lite_ws/install/ros2_px4_stack'
