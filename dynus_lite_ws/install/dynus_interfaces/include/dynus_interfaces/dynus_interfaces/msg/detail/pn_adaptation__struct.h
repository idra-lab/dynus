// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynus_interfaces:msg/PNAdaptation.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__PN_ADAPTATION__STRUCT_H_
#define DYNUS_INTERFACES__MSG__DETAIL__PN_ADAPTATION__STRUCT_H_

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

/// Struct defined in msg/PNAdaptation in the package dynus_interfaces.
typedef struct dynus_interfaces__msg__PNAdaptation
{
  std_msgs__msg__Header header;
  int32_t old_n;
  int32_t new_n;
  int32_t old_p;
  int32_t new_p;
} dynus_interfaces__msg__PNAdaptation;

// Struct for a sequence of dynus_interfaces__msg__PNAdaptation.
typedef struct dynus_interfaces__msg__PNAdaptation__Sequence
{
  dynus_interfaces__msg__PNAdaptation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynus_interfaces__msg__PNAdaptation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNUS_INTERFACES__MSG__DETAIL__PN_ADAPTATION__STRUCT_H_
