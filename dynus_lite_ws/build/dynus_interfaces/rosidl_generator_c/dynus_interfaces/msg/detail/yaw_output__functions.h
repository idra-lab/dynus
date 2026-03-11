// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dynus_interfaces:msg/YawOutput.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__YAW_OUTPUT__FUNCTIONS_H_
#define DYNUS_INTERFACES__MSG__DETAIL__YAW_OUTPUT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dynus_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "dynus_interfaces/msg/detail/yaw_output__struct.h"

/// Initialize msg/YawOutput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dynus_interfaces__msg__YawOutput
 * )) before or use
 * dynus_interfaces__msg__YawOutput__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
bool
dynus_interfaces__msg__YawOutput__init(dynus_interfaces__msg__YawOutput * msg);

/// Finalize msg/YawOutput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
void
dynus_interfaces__msg__YawOutput__fini(dynus_interfaces__msg__YawOutput * msg);

/// Create msg/YawOutput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dynus_interfaces__msg__YawOutput__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
dynus_interfaces__msg__YawOutput *
dynus_interfaces__msg__YawOutput__create();

/// Destroy msg/YawOutput message.
/**
 * It calls
 * dynus_interfaces__msg__YawOutput__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
void
dynus_interfaces__msg__YawOutput__destroy(dynus_interfaces__msg__YawOutput * msg);

/// Check for msg/YawOutput message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
bool
dynus_interfaces__msg__YawOutput__are_equal(const dynus_interfaces__msg__YawOutput * lhs, const dynus_interfaces__msg__YawOutput * rhs);

/// Copy a msg/YawOutput message.
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
dynus_interfaces__msg__YawOutput__copy(
  const dynus_interfaces__msg__YawOutput * input,
  dynus_interfaces__msg__YawOutput * output);

/// Initialize array of msg/YawOutput messages.
/**
 * It allocates the memory for the number of elements and calls
 * dynus_interfaces__msg__YawOutput__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
bool
dynus_interfaces__msg__YawOutput__Sequence__init(dynus_interfaces__msg__YawOutput__Sequence * array, size_t size);

/// Finalize array of msg/YawOutput messages.
/**
 * It calls
 * dynus_interfaces__msg__YawOutput__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
void
dynus_interfaces__msg__YawOutput__Sequence__fini(dynus_interfaces__msg__YawOutput__Sequence * array);

/// Create array of msg/YawOutput messages.
/**
 * It allocates the memory for the array and calls
 * dynus_interfaces__msg__YawOutput__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
dynus_interfaces__msg__YawOutput__Sequence *
dynus_interfaces__msg__YawOutput__Sequence__create(size_t size);

/// Destroy array of msg/YawOutput messages.
/**
 * It calls
 * dynus_interfaces__msg__YawOutput__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
void
dynus_interfaces__msg__YawOutput__Sequence__destroy(dynus_interfaces__msg__YawOutput__Sequence * array);

/// Check for msg/YawOutput message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
bool
dynus_interfaces__msg__YawOutput__Sequence__are_equal(const dynus_interfaces__msg__YawOutput__Sequence * lhs, const dynus_interfaces__msg__YawOutput__Sequence * rhs);

/// Copy an array of msg/YawOutput messages.
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
dynus_interfaces__msg__YawOutput__Sequence__copy(
  const dynus_interfaces__msg__YawOutput__Sequence * input,
  dynus_interfaces__msg__YawOutput__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DYNUS_INTERFACES__MSG__DETAIL__YAW_OUTPUT__FUNCTIONS_H_
