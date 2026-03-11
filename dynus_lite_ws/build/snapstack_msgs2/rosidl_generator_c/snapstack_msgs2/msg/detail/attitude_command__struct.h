// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from snapstack_msgs2:msg/AttitudeCommand.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__ATTITUDE_COMMAND__STRUCT_H_
#define SNAPSTACK_MSGS2__MSG__DETAIL__ATTITUDE_COMMAND__STRUCT_H_

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
// Member 'q'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'w'
// Member 'f_w'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/AttitudeCommand in the package snapstack_msgs2.
typedef struct snapstack_msgs2__msg__AttitudeCommand
{
  std_msgs__msg__Header header;
  /// desired attitude
  geometry_msgs__msg__Quaternion q;
  /// desired angular rates
  geometry_msgs__msg__Vector3 w;
  /// desired force (expr in world frame)
  geometry_msgs__msg__Vector3 f_w;
  /// true if motors should be able to spin
  bool power;
} snapstack_msgs2__msg__AttitudeCommand;

// Struct for a sequence of snapstack_msgs2__msg__AttitudeCommand.
typedef struct snapstack_msgs2__msg__AttitudeCommand__Sequence
{
  snapstack_msgs2__msg__AttitudeCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snapstack_msgs2__msg__AttitudeCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__ATTITUDE_COMMAND__STRUCT_H_
