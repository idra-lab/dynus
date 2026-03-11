// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from snapstack_msgs2:msg/VioFilterState.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__VIO_FILTER_STATE__STRUCT_H_
#define SNAPSTACK_MSGS2__MSG__DETAIL__VIO_FILTER_STATE__STRUCT_H_

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
// Member 'pose'
// Member 'extrinsics'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'bw'
// Member 'ba'
// Member 'accel_meas'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'error_cov'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/VioFilterState in the package snapstack_msgs2.
/**
  * VioFilterState.msg
 */
typedef struct snapstack_msgs2__msg__VioFilterState
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose pose;
  /// includes gyro measurement for rates
  geometry_msgs__msg__Twist twist;
  geometry_msgs__msg__Vector3 bw;
  geometry_msgs__msg__Vector3 ba;
  /// camera-to-IMU transform
  geometry_msgs__msg__Pose extrinsics;
  /// (IMU-frame) raw accel measurement
  geometry_msgs__msg__Vector3 accel_meas;
  /// error state dimension N
  int32_t n;
  /// NxN error covariance.
  /// For consistency, leading 21 terms are ordered [pos, vel, Rwb, bw, ba, Rcb, tcb].
  rosidl_runtime_c__float__Sequence error_cov;
} snapstack_msgs2__msg__VioFilterState;

// Struct for a sequence of snapstack_msgs2__msg__VioFilterState.
typedef struct snapstack_msgs2__msg__VioFilterState__Sequence
{
  snapstack_msgs2__msg__VioFilterState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snapstack_msgs2__msg__VioFilterState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__VIO_FILTER_STATE__STRUCT_H_
