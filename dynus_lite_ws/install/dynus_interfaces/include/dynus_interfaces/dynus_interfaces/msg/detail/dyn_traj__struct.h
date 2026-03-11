// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynus_interfaces:msg/DynTraj.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ__STRUCT_H_
#define DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ__STRUCT_H_

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
// Member 'bbox'
// Member 'ekf_cov_p'
// Member 'ekf_cov_q'
// Member 'ekf_cov_r'
// Member 'poly_cov'
// Member 'poly_coeffs_x'
// Member 'poly_coeffs_y'
// Member 'poly_coeffs_z'
// Member 'goal'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'pwp'
#include "dynus_interfaces/msg/detail/pwp_traj__struct.h"
// Member 'quintic_pwp'
#include "dynus_interfaces/msg/detail/quintic_pwp_traj__struct.h"
// Member 'function'
// Member 'velocity'
// Member 'mode'
#include "rosidl_runtime_c/string.h"
// Member 'pos'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/DynTraj in the package dynus_interfaces.
typedef struct dynus_interfaces__msg__DynTraj
{
  std_msgs__msg__Header header;
  /// bounding box. It has three elements: hx, hy, hz (bbox of size hx x hy x hz)
  rosidl_runtime_c__float__Sequence bbox;
  /// id of the dynamic obstacle
  int32_t id;
  dynus_interfaces__msg__PWPTraj pwp;
  dynus_interfaces__msg__QuinticPWPTraj quintic_pwp;
  rosidl_runtime_c__float__Sequence ekf_cov_p;
  rosidl_runtime_c__float__Sequence ekf_cov_q;
  rosidl_runtime_c__float__Sequence ekf_cov_r;
  rosidl_runtime_c__float__Sequence poly_cov;
  rosidl_runtime_c__float__Sequence poly_coeffs_x;
  rosidl_runtime_c__float__Sequence poly_coeffs_y;
  rosidl_runtime_c__float__Sequence poly_coeffs_z;
  double poly_start_time;
  double poly_end_time;
  /// Theis field is only used by the obstacles (i.e. when is_agent==false)
  rosidl_runtime_c__String__Sequence function;
  /// Theis field is only used by the obstacles (i.e. when is_agent==false)
  rosidl_runtime_c__String__Sequence velocity;
  geometry_msgs__msg__Vector3 pos;
  /// defalut is false for boolean (https://design.ros2.org/articles/interface_definition.html)
  bool is_agent;
  rosidl_runtime_c__float__Sequence goal;
  /// "analytic" or "pwp" or "poly" or "quintic_pwp"
  rosidl_runtime_c__String mode;
} dynus_interfaces__msg__DynTraj;

// Struct for a sequence of dynus_interfaces__msg__DynTraj.
typedef struct dynus_interfaces__msg__DynTraj__Sequence
{
  dynus_interfaces__msg__DynTraj * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynus_interfaces__msg__DynTraj__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ__STRUCT_H_
