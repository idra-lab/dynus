// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from snapstack_msgs2:msg/CommAge.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__COMM_AGE__STRUCT_H_
#define SNAPSTACK_MSGS2__MSG__DETAIL__COMM_AGE__STRUCT_H_

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

/// Struct defined in msg/CommAge in the package snapstack_msgs2.
typedef struct snapstack_msgs2__msg__CommAge
{
  std_msgs__msg__Header header;
  float vicon_age_secs;
  float goal_age_secs;
} snapstack_msgs2__msg__CommAge;

// Struct for a sequence of snapstack_msgs2__msg__CommAge.
typedef struct snapstack_msgs2__msg__CommAge__Sequence
{
  snapstack_msgs2__msg__CommAge * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snapstack_msgs2__msg__CommAge__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__COMM_AGE__STRUCT_H_
