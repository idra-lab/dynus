// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dynus_interfaces:msg/QuinticPWPTraj.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__QUINTIC_PWP_TRAJ__FUNCTIONS_H_
#define DYNUS_INTERFACES__MSG__DETAIL__QUINTIC_PWP_TRAJ__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dynus_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "dynus_interfaces/msg/detail/quintic_pwp_traj__struct.h"

/// Initialize msg/QuinticPWPTraj message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dynus_interfaces__msg__QuinticPWPTraj
 * )) before or use
 * dynus_interfaces__msg__QuinticPWPTraj__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
bool
dynus_interfaces__msg__QuinticPWPTraj__init(dynus_interfaces__msg__QuinticPWPTraj * msg);

/// Finalize msg/QuinticPWPTraj message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
void
dynus_interfaces__msg__QuinticPWPTraj__fini(dynus_interfaces__msg__QuinticPWPTraj * msg);

/// Create msg/QuinticPWPTraj message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dynus_interfaces__msg__QuinticPWPTraj__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
dynus_interfaces__msg__QuinticPWPTraj *
dynus_interfaces__msg__QuinticPWPTraj__create();

/// Destroy msg/QuinticPWPTraj message.
/**
 * It calls
 * dynus_interfaces__msg__QuinticPWPTraj__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
void
dynus_interfaces__msg__QuinticPWPTraj__destroy(dynus_interfaces__msg__QuinticPWPTraj * msg);

/// Check for msg/QuinticPWPTraj message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
bool
dynus_interfaces__msg__QuinticPWPTraj__are_equal(const dynus_interfaces__msg__QuinticPWPTraj * lhs, const dynus_interfaces__msg__QuinticPWPTraj * rhs);

/// Copy a msg/QuinticPWPTraj message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
bool
dynus_interfaces__msg__QuinticPWPTraj__copy(
  const dynus_interfaces__msg__QuinticPWPTraj * input,
  dynus_interfaces__msg__QuinticPWPTraj * output);

/// Initialize array of msg/QuinticPWPTraj messages.
/**
 * It allocates the memory for the number of elements and calls
 * dynus_interfaces__msg__QuinticPWPTraj__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
bool
dynus_interfaces__msg__QuinticPWPTraj__Sequence__init(dynus_interfaces__msg__QuinticPWPTraj__Sequence * array, size_t size);

/// Finalize array of msg/QuinticPWPTraj messages.
/**
 * It calls
 * dynus_interfaces__msg__QuinticPWPTraj__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
void
dynus_interfaces__msg__QuinticPWPTraj__Sequence__fini(dynus_interfaces__msg__QuinticPWPTraj__Sequence * array);

/// Create array of msg/QuinticPWPTraj messages.
/**
 * It allocates the memory for the array and calls
 * dynus_interfaces__msg__QuinticPWPTraj__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
dynus_interfaces__msg__QuinticPWPTraj__Sequence *
dynus_interfaces__msg__QuinticPWPTraj__Sequence__create(size_t size);

/// Destroy array of msg/QuinticPWPTraj messages.
/**
 * It calls
 * dynus_interfaces__msg__QuinticPWPTraj__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
void
dynus_interfaces__msg__QuinticPWPTraj__Sequence__destroy(dynus_interfaces__msg__QuinticPWPTraj__Sequence * array);

/// Check for msg/QuinticPWPTraj message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
bool
dynus_interfaces__msg__QuinticPWPTraj__Sequence__are_equal(const dynus_interfaces__msg__QuinticPWPTraj__Sequence * lhs, const dynus_interfaces__msg__QuinticPWPTraj__Sequence * rhs);

/// Copy an array of msg/QuinticPWPTraj messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
bool
dynus_interfaces__msg__QuinticPWPTraj__Sequence__copy(
  const dynus_interfaces__msg__QuinticPWPTraj__Sequence * input,
  dynus_interfaces__msg__QuinticPWPTraj__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DYNUS_INTERFACES__MSG__DETAIL__QUINTIC_PWP_TRAJ__FUNCTIONS_H_
