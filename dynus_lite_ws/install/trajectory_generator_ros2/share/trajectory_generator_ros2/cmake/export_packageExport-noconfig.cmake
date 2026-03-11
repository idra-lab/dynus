#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "trajectory_generator_ros2::trajectory_generator_ros2" for configuration ""
set_property(TARGET trajectory_generator_ros2::trajectory_generator_ros2 APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(trajectory_generator_ros2::trajectory_generator_ros2 PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/trajectory_generator_ros2/trajectory_generator_ros2"
  )

list(APPEND _IMPORT_CHECK_TARGETS trajectory_generator_ros2::trajectory_generator_ros2 )
list(APPEND _IMPORT_CHECK_FILES_FOR_trajectory_generator_ros2::trajectory_generator_ros2 "${_IMPORT_PREFIX}/lib/trajectory_generator_ros2/trajectory_generator_ros2" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
