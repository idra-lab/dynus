// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynus_interfaces:msg/State.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__STATE__STRUCT_H_
#define DYNUS_INTERFACES__MSG__DETAIL__STATE__STRUCT_H_

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
// Member 'pos'
// Member 'vel'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'quat'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/State in the package dynus_interfaces.
typedef struct dynus_interfaces__msg__State
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Vector3 pos;
  geometry_msgs__msg__Vector3 vel;
  geometry_msgs__msg__Quaternion quat;
} dynus_interfaces__msg__State;

// Struct for a sequence of dynus_interfaces__msg__State.
typedef struct dynus_interfaces__msg__State__Sequence
{
  dynus_interfaces__msg__State * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynus_interfaces__msg__State__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNUS_INTERFACES__MSG__DETAIL__STATE__STRUCT_H_
