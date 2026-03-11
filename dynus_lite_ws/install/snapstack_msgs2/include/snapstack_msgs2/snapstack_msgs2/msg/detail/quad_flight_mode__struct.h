// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from snapstack_msgs2:msg/QuadFlightMode.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__QUAD_FLIGHT_MODE__STRUCT_H_
#define SNAPSTACK_MSGS2__MSG__DETAIL__QUAD_FLIGHT_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NOT_FLYING'.
enum
{
  snapstack_msgs2__msg__QuadFlightMode__NOT_FLYING = 0
};

/// Constant 'TAKEOFF'.
enum
{
  snapstack_msgs2__msg__QuadFlightMode__TAKEOFF = 1
};

/// Constant 'LAND'.
enum
{
  snapstack_msgs2__msg__QuadFlightMode__LAND = 2
};

/// Constant 'INIT'.
enum
{
  snapstack_msgs2__msg__QuadFlightMode__INIT = 3
};

/// Constant 'GO'.
enum
{
  snapstack_msgs2__msg__QuadFlightMode__GO = 4
};

/// Constant 'ESTOP'.
enum
{
  snapstack_msgs2__msg__QuadFlightMode__ESTOP = 5
};

/// Constant 'KILL'.
enum
{
  snapstack_msgs2__msg__QuadFlightMode__KILL = 6
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/QuadFlightMode in the package snapstack_msgs2.
typedef struct snapstack_msgs2__msg__QuadFlightMode
{
  std_msgs__msg__Header header;
  uint8_t mode;
} snapstack_msgs2__msg__QuadFlightMode;

// Struct for a sequence of snapstack_msgs2__msg__QuadFlightMode.
typedef struct snapstack_msgs2__msg__QuadFlightMode__Sequence
{
  snapstack_msgs2__msg__QuadFlightMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snapstack_msgs2__msg__QuadFlightMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__QUAD_FLIGHT_MODE__STRUCT_H_
