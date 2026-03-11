// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynus_interfaces:msg/QuinticPWPTraj.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__QUINTIC_PWP_TRAJ__STRUCT_H_
#define DYNUS_INTERFACES__MSG__DETAIL__QUINTIC_PWP_TRAJ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'times'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'coeff_x'
// Member 'coeff_y'
// Member 'coeff_z'
#include "dynus_interfaces/msg/detail/quintic_coeff_poly3__struct.h"

/// Struct defined in msg/QuinticPWPTraj in the package dynus_interfaces.
typedef struct dynus_interfaces__msg__QuinticPWPTraj
{
  /// times has n+1 elements [t0,t1,t2,...,tn+1]
  rosidl_runtime_c__double__Sequence times;
  /// Array of coeffients. Should have n elements
  dynus_interfaces__msg__QuinticCoeffPoly3__Sequence coeff_x;
  /// Array of coeffients. Should have n elements
  dynus_interfaces__msg__QuinticCoeffPoly3__Sequence coeff_y;
  /// Array of coeffients. Should have n elements
  dynus_interfaces__msg__QuinticCoeffPoly3__Sequence coeff_z;
} dynus_interfaces__msg__QuinticPWPTraj;

// Struct for a sequence of dynus_interfaces__msg__QuinticPWPTraj.
typedef struct dynus_interfaces__msg__QuinticPWPTraj__Sequence
{
  dynus_interfaces__msg__QuinticPWPTraj * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynus_interfaces__msg__QuinticPWPTraj__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNUS_INTERFACES__MSG__DETAIL__QUINTIC_PWP_TRAJ__STRUCT_H_
