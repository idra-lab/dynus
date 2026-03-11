// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynus_interfaces:msg/CoeffPoly3.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__COEFF_POLY3__STRUCT_H_
#define DYNUS_INTERFACES__MSG__DETAIL__COEFF_POLY3__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CoeffPoly3 in the package dynus_interfaces.
/**
  * The polynomial is at^3 + bt^2 + c^t + d
 */
typedef struct dynus_interfaces__msg__CoeffPoly3
{
  double a;
  double b;
  double c;
  double d;
} dynus_interfaces__msg__CoeffPoly3;

// Struct for a sequence of dynus_interfaces__msg__CoeffPoly3.
typedef struct dynus_interfaces__msg__CoeffPoly3__Sequence
{
  dynus_interfaces__msg__CoeffPoly3 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynus_interfaces__msg__CoeffPoly3__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNUS_INTERFACES__MSG__DETAIL__COEFF_POLY3__STRUCT_H_
