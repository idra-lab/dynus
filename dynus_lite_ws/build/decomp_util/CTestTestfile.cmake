# CMake generated Testfile for 
# Source directory: /home/lorenzo/code/dynus_lite/dynus_lite_ws/src/DecompROS2/DecompUtil
# Build directory: /home/lorenzo/code/dynus_lite/dynus_lite_ws/build/decomp_util
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_seed_decomp "test_seed_decomp")
set_tests_properties(test_seed_decomp PROPERTIES  _BACKTRACE_TRIPLES "/home/lorenzo/code/dynus_lite/dynus_lite_ws/src/DecompROS2/DecompUtil/CMakeLists.txt;19;add_test;/home/lorenzo/code/dynus_lite/dynus_lite_ws/src/DecompROS2/DecompUtil/CMakeLists.txt;0;")
add_test(test_line_segment "test_line_segment" "/home/lorenzo/code/dynus_lite/dynus_lite_ws/src/DecompROS2/DecompUtil/data/obstacles.txt")
set_tests_properties(test_line_segment PROPERTIES  _BACKTRACE_TRIPLES "/home/lorenzo/code/dynus_lite/dynus_lite_ws/src/DecompROS2/DecompUtil/CMakeLists.txt;23;add_test;/home/lorenzo/code/dynus_lite/dynus_lite_ws/src/DecompROS2/DecompUtil/CMakeLists.txt;0;")
add_test(test_ellipsoid_decomp "test_ellipsoid_decomp" "/home/lorenzo/code/dynus_lite/dynus_lite_ws/src/DecompROS2/DecompUtil/data/obstacles.txt")
set_tests_properties(test_ellipsoid_decomp PROPERTIES  _BACKTRACE_TRIPLES "/home/lorenzo/code/dynus_lite/dynus_lite_ws/src/DecompROS2/DecompUtil/CMakeLists.txt;27;add_test;/home/lorenzo/code/dynus_lite/dynus_lite_ws/src/DecompROS2/DecompUtil/CMakeLists.txt;0;")
add_test(test_iterative_decomp "test_iterative_decomp" "/home/lorenzo/code/dynus_lite/dynus_lite_ws/src/DecompROS2/DecompUtil/data/obstacles.txt")
set_tests_properties(test_iterative_decomp PROPERTIES  _BACKTRACE_TRIPLES "/home/lorenzo/code/dynus_lite/dynus_lite_ws/src/DecompROS2/DecompUtil/CMakeLists.txt;31;add_test;/home/lorenzo/code/dynus_lite/dynus_lite_ws/src/DecompROS2/DecompUtil/CMakeLists.txt;0;")
