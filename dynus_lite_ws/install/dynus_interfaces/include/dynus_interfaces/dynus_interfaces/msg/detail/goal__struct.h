// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynus_interfaces:msg/Goal.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__GOAL__STRUCT_H_
#define DYNUS_INTERFACES__MSG__DETAIL__GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODE_POSITION_CONTROL'.
/**
  * Trajectory tracking mode constants
 */
enum
{
  dynus_interfaces__msg__Goal__MODE_POSITION_CONTROL = 0
};

/// Constant 'MODE_VELOCITY_CONTROL'.
enum
{
  dynus_interfaces__msg__Goal__MODE_VELOCITY_CONTROL = 1
};

/// Constant 'MODE_ACCELERATION_CONTROL'.
enum
{
  dynus_interfaces__msg__Goal__MODE_ACCELERATION_CONTROL = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'p'
// Member 'v'
// Member 'a'
// Member 'j'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Goal in the package dynus_interfaces.
/**
  * Use this message to command the outer loop to track
  * a trajectory generated from a high-level trajectory planner.
 */
typedef struct dynus_interfaces__msg__Goal
{
  std_msgs__msg__Header header;
  /// Current time-slice of desired trajectory
  /// position
  geometry_msgs__msg__Vector3 p;
  /// velocity
  geometry_msgs__msg__Vector3 v;
  /// acceleration
  geometry_msgs__msg__Vector3 a;
  /// jerk
  geometry_msgs__msg__Vector3 j;
  /// angle as defined in Sec. III of https://arxiv.org/pdf/2103.06372.pdf
  double yaw;
  ///  In general, it is will not be the rXYZ yaw Euler angle of the UAV (unless the drone is in a hover condition).
  ///  This is due to the fact that q_psi (see link above) already has some rXYZ yaw on it.
  ///  See also the paper https://link.springer.com/chapter/10.1007/978-3-030-28619-4_20
  /// d{psi}/dt
  double dyaw;
  /// true if motors should be able to spin
  bool power;
  /// Trajectory tracking mode for x/y and z components.
  /// The default is POSITION control, which uses position and velocity error
  /// to calculate the control effort. VELOCITY control only uses vel error.
  /// ACCELERATION mode does not use tracking error and could be used to provide
  /// a control signal computed from something other than the default PID cntrl.
  uint8_t mode_xy;
  uint8_t mode_z;
} dynus_interfaces__msg__Goal;

// Struct for a sequence of dynus_interfaces__msg__Goal.
typedef struct dynus_interfaces__msg__Goal__Sequence
{
  dynus_interfaces__msg__Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynus_interfaces__msg__Goal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNUS_INTERFACES__MSG__DETAIL__GOAL__STRUCT_H_
