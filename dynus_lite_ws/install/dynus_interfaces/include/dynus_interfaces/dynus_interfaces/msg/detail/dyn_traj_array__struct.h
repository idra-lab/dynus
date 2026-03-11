// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynus_interfaces:msg/DynTrajArray.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ_ARRAY__STRUCT_H_
#define DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ_ARRAY__STRUCT_H_

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
// Member 'trajs'
#include "dynus_interfaces/msg/detail/dyn_traj__struct.h"

/// Struct defined in msg/DynTrajArray in the package dynus_interfaces.
typedef struct dynus_interfaces__msg__DynTrajArray
{
  std_msgs__msg__Header header;
  dynus_interfaces__msg__DynTraj__Sequence trajs;
} dynus_interfaces__msg__DynTrajArray;

// Struct for a sequence of dynus_interfaces__msg__DynTrajArray.
typedef struct dynus_interfaces__msg__DynTrajArray__Sequence
{
  dynus_interfaces__msg__DynTrajArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynus_interfaces__msg__DynTrajArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ_ARRAY__STRUCT_H_
