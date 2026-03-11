// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from snapstack_msgs2:msg/Motors.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__MOTORS__STRUCT_H_
#define SNAPSTACK_MSGS2__MSG__DETAIL__MOTORS__STRUCT_H_

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

/// Struct defined in msg/Motors in the package snapstack_msgs2.
typedef struct snapstack_msgs2__msg__Motors
{
  std_msgs__msg__Header header;
  double m1;
  double m2;
  double m3;
  double m4;
  double m5;
  double m6;
  double m7;
  double m8;
} snapstack_msgs2__msg__Motors;

// Struct for a sequence of snapstack_msgs2__msg__Motors.
typedef struct snapstack_msgs2__msg__Motors__Sequence
{
  snapstack_msgs2__msg__Motors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snapstack_msgs2__msg__Motors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__MOTORS__STRUCT_H_
