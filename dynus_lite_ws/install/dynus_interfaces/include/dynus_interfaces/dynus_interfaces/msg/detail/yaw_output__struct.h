// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynus_interfaces:msg/YawOutput.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__YAW_OUTPUT__STRUCT_H_
#define DYNUS_INTERFACES__MSG__DETAIL__YAW_OUTPUT__STRUCT_H_

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
// Member 'sequence'
// Member 'control_points'
// Member 'knots'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/YawOutput in the package dynus_interfaces.
typedef struct dynus_interfaces__msg__YawOutput
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__double__Sequence sequence;
  rosidl_runtime_c__double__Sequence control_points;
  rosidl_runtime_c__double__Sequence knots;
} dynus_interfaces__msg__YawOutput;

// Struct for a sequence of dynus_interfaces__msg__YawOutput.
typedef struct dynus_interfaces__msg__YawOutput__Sequence
{
  dynus_interfaces__msg__YawOutput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynus_interfaces__msg__YawOutput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNUS_INTERFACES__MSG__DETAIL__YAW_OUTPUT__STRUCT_H_
