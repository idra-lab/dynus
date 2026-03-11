// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from snapstack_msgs2:msg/State.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__STATE__STRUCT_H_
#define SNAPSTACK_MSGS2__MSG__DETAIL__STATE__STRUCT_H_

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
// Member 'state_stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'pos'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'vel'
// Member 'w'
// Member 'abias'
// Member 'gbias'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'quat'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/State in the package snapstack_msgs2.
typedef struct snapstack_msgs2__msg__State
{
  std_msgs__msg__Header header;
  builtin_interfaces__msg__Time state_stamp;
  geometry_msgs__msg__Point pos;
  geometry_msgs__msg__Vector3 vel;
  geometry_msgs__msg__Quaternion quat;
  geometry_msgs__msg__Vector3 w;
  geometry_msgs__msg__Vector3 abias;
  geometry_msgs__msg__Vector3 gbias;
} snapstack_msgs2__msg__State;

// Struct for a sequence of snapstack_msgs2__msg__State.
typedef struct snapstack_msgs2__msg__State__Sequence
{
  snapstack_msgs2__msg__State * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snapstack_msgs2__msg__State__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__STATE__STRUCT_H_
