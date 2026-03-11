// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from snapstack_msgs2:msg/SMCData.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__SMC_DATA__STRUCT_H_
#define SNAPSTACK_MSGS2__MSG__DETAIL__SMC_DATA__STRUCT_H_

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
// Member 'q_des'
// Member 'q_act'
// Member 'q_err'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'w_des'
// Member 'w_act'
// Member 'w_err'
// Member 's'
// Member 'integrator'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/SMCData in the package snapstack_msgs2.
typedef struct snapstack_msgs2__msg__SMCData
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Quaternion q_des;
  geometry_msgs__msg__Quaternion q_act;
  geometry_msgs__msg__Quaternion q_err;
  geometry_msgs__msg__Vector3 w_des;
  geometry_msgs__msg__Vector3 w_act;
  geometry_msgs__msg__Vector3 w_err;
  geometry_msgs__msg__Vector3 s;
  geometry_msgs__msg__Vector3 integrator;
} snapstack_msgs2__msg__SMCData;

// Struct for a sequence of snapstack_msgs2__msg__SMCData.
typedef struct snapstack_msgs2__msg__SMCData__Sequence
{
  snapstack_msgs2__msg__SMCData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snapstack_msgs2__msg__SMCData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__SMC_DATA__STRUCT_H_
