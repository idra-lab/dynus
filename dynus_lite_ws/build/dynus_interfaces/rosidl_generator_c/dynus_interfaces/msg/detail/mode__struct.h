// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynus_interfaces:msg/Mode.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__MODE__STRUCT_H_
#define DYNUS_INTERFACES__MSG__DETAIL__MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OTHER'.
enum
{
  dynus_interfaces__msg__Mode__OTHER = 0
};

/// Constant 'DYNUS'.
enum
{
  dynus_interfaces__msg__Mode__DYNUS = 1
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Mode in the package dynus_interfaces.
typedef struct dynus_interfaces__msg__Mode
{
  std_msgs__msg__Header header;
  uint8_t mode;
} dynus_interfaces__msg__Mode;

// Struct for a sequence of dynus_interfaces__msg__Mode.
typedef struct dynus_interfaces__msg__Mode__Sequence
{
  dynus_interfaces__msg__Mode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynus_interfaces__msg__Mode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNUS_INTERFACES__MSG__DETAIL__MODE__STRUCT_H_
