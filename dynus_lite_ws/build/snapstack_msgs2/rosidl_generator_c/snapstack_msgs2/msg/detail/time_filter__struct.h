// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from snapstack_msgs2:msg/TimeFilter.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__TIME_FILTER__STRUCT_H_
#define SNAPSTACK_MSGS2__MSG__DETAIL__TIME_FILTER__STRUCT_H_

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

/// Struct defined in msg/TimeFilter in the package snapstack_msgs2.
/**
  * TimeFilter.msg
 */
typedef struct snapstack_msgs2__msg__TimeFilter
{
  std_msgs__msg__Header header;
  /// dt recorded in time stamp
  float dt;
  /// dt stamped when arrived onboard
  float delayed_dt;
  /// is msg skipped?
  bool skipped;
  /// upper bound
  float upper;
  /// lower bound
  float lower;
} snapstack_msgs2__msg__TimeFilter;

// Struct for a sequence of snapstack_msgs2__msg__TimeFilter.
typedef struct snapstack_msgs2__msg__TimeFilter__Sequence
{
  snapstack_msgs2__msg__TimeFilter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snapstack_msgs2__msg__TimeFilter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__TIME_FILTER__STRUCT_H_
