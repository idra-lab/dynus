// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from snapstack_msgs2:msg/ControlLog.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__CONTROL_LOG__STRUCT_H_
#define SNAPSTACK_MSGS2__MSG__DETAIL__CONTROL_LOG__STRUCT_H_

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
// Member 'p'
// Member 'p_ref'
// Member 'p_err'
// Member 'p_err_int'
// Member 'v'
// Member 'v_ref'
// Member 'v_err'
// Member 'a_ff'
// Member 'a_fb'
// Member 'j_ff'
// Member 'j_fb'
// Member 'rpy'
// Member 'rpy_ref'
// Member 'w'
// Member 'w_ref'
// Member 'f_w'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'q'
// Member 'q_ref'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/ControlLog in the package snapstack_msgs2.
/**
  * The outer loop trajectory tracker generates this msg for analysis / debugging
 */
typedef struct snapstack_msgs2__msg__ControlLog
{
  std_msgs__msg__Header header;
  /// position signals
  geometry_msgs__msg__Vector3 p;
  geometry_msgs__msg__Vector3 p_ref;
  geometry_msgs__msg__Vector3 p_err;
  geometry_msgs__msg__Vector3 p_err_int;
  /// velocity signals
  geometry_msgs__msg__Vector3 v;
  geometry_msgs__msg__Vector3 v_ref;
  geometry_msgs__msg__Vector3 v_err;
  /// acceleration signals
  geometry_msgs__msg__Vector3 a_ff;
  geometry_msgs__msg__Vector3 a_fb;
  /// jerk signals
  geometry_msgs__msg__Vector3 j_ff;
  geometry_msgs__msg__Vector3 j_fb;
  /// attitude signals
  geometry_msgs__msg__Quaternion q;
  geometry_msgs__msg__Quaternion q_ref;
  geometry_msgs__msg__Vector3 rpy;
  geometry_msgs__msg__Vector3 rpy_ref;
  /// angular rate signals
  geometry_msgs__msg__Vector3 w;
  geometry_msgs__msg__Vector3 w_ref;
  /// Desired total force, expressed in world
  geometry_msgs__msg__Vector3 f_w;
  /// true if motors should be able to spin
  bool power;
} snapstack_msgs2__msg__ControlLog;

// Struct for a sequence of snapstack_msgs2__msg__ControlLog.
typedef struct snapstack_msgs2__msg__ControlLog__Sequence
{
  snapstack_msgs2__msg__ControlLog * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snapstack_msgs2__msg__ControlLog__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__CONTROL_LOG__STRUCT_H_
