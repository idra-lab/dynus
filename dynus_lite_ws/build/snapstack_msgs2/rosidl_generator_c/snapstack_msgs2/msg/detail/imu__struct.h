// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from snapstack_msgs2:msg/IMU.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__IMU__STRUCT_H_
#define SNAPSTACK_MSGS2__MSG__DETAIL__IMU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'imu_stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'gyro'
// Member 'accel'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/IMU in the package snapstack_msgs2.
typedef struct snapstack_msgs2__msg__IMU
{
  std_msgs__msg__Header header;
  builtin_interfaces__msg__Time imu_stamp;
  geometry_msgs__msg__Vector3 gyro;
  geometry_msgs__msg__Vector3 accel;
  /// period at which imu cb runs, in seconds
  double loop_time;
} snapstack_msgs2__msg__IMU;

// Struct for a sequence of snapstack_msgs2__msg__IMU.
typedef struct snapstack_msgs2__msg__IMU__Sequence
{
  snapstack_msgs2__msg__IMU * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snapstack_msgs2__msg__IMU__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__IMU__STRUCT_H_
