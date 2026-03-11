// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynus_interfaces:msg/QuinticCoeffPoly3.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__QUINTIC_COEFF_POLY3__STRUCT_H_
#define DYNUS_INTERFACES__MSG__DETAIL__QUINTIC_COEFF_POLY3__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/QuinticCoeffPoly3 in the package dynus_interfaces.
/**
  * The polynomial is at^5 + bt^4 + ct^3 + dt^2 + et + f
 */
typedef struct dynus_interfaces__msg__QuinticCoeffPoly3
{
  double a;
  double b;
  double c;
  double d;
  double e;
  double f;
} dynus_interfaces__msg__QuinticCoeffPoly3;

// Struct for a sequence of dynus_interfaces__msg__QuinticCoeffPoly3.
typedef struct dynus_interfaces__msg__QuinticCoeffPoly3__Sequence
{
  dynus_interfaces__msg__QuinticCoeffPoly3 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynus_interfaces__msg__QuinticCoeffPoly3__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNUS_INTERFACES__MSG__DETAIL__QUINTIC_COEFF_POLY3__STRUCT_H_
