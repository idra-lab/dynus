// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from snapstack_msgs2:msg/VioFilterState.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__VIO_FILTER_STATE__FUNCTIONS_H_
#define SNAPSTACK_MSGS2__MSG__DETAIL__VIO_FILTER_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "snapstack_msgs2/msg/rosidl_generator_c__visibility_control.h"

#include "snapstack_msgs2/msg/detail/vio_filter_state__struct.h"

/// Initialize msg/VioFilterState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * snapstack_msgs2__msg__VioFilterState
 * )) before or use
 * snapstack_msgs2__msg__VioFilterState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_snapstack_msgs2
bool
snapstack_msgs2__msg__VioFilterState__init(snapstack_msgs2__msg__VioFilterState * msg);

/// Finalize msg/VioFilterState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snapstack_msgs2
void
snapstack_msgs2__msg__VioFilterState__fini(snapstack_msgs2__msg__VioFilterState * msg);

/// Create msg/VioFilterState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * snapstack_msgs2__msg__VioFilterState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_snapstack_msgs2
snapstack_msgs2__msg__VioFilterState *
snapstack_msgs2__msg__VioFilterState__create();

/// Destroy msg/VioFilterState message.
/**
 * It calls
 * snapstack_msgs2__msg__VioFilterState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snapstack_msgs2
void
snapstack_msgs2__msg__VioFilterState__destroy(snapstack_msgs2__msg__VioFilterState * msg);

/// Check for msg/VioFilterState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_snapstack_msgs2
bool
snapstack_msgs2__msg__VioFilterState__are_equal(const snapstack_msgs2__msg__VioFilterState * lhs, const snapstack_msgs2__msg__VioFilterState * rhs);

/// Copy a msg/VioFilterState message.
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
ROSIDL_GENERATOR_C_PUBLIC_snapstack_msgs2
bool
snapstack_msgs2__msg__VioFilterState__copy(
  const snapstack_msgs2__msg__VioFilterState * input,
  snapstack_msgs2__msg__VioFilterState * output);

/// Initialize array of msg/VioFilterState messages.
/**
 * It allocates the memory for the number of elements and calls
 * snapstack_msgs2__msg__VioFilterState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_snapstack_msgs2
bool
snapstack_msgs2__msg__VioFilterState__Sequence__init(snapstack_msgs2__msg__VioFilterState__Sequence * array, size_t size);

/// Finalize array of msg/VioFilterState messages.
/**
 * It calls
 * snapstack_msgs2__msg__VioFilterState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snapstack_msgs2
void
snapstack_msgs2__msg__VioFilterState__Sequence__fini(snapstack_msgs2__msg__VioFilterState__Sequence * array);

/// Create array of msg/VioFilterState messages.
/**
 * It allocates the memory for the array and calls
 * snapstack_msgs2__msg__VioFilterState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_snapstack_msgs2
snapstack_msgs2__msg__VioFilterState__Sequence *
snapstack_msgs2__msg__VioFilterState__Sequence__create(size_t size);

/// Destroy array of msg/VioFilterState messages.
/**
 * It calls
 * snapstack_msgs2__msg__VioFilterState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snapstack_msgs2
void
snapstack_msgs2__msg__VioFilterState__Sequence__destroy(snapstack_msgs2__msg__VioFilterState__Sequence * array);

/// Check for msg/VioFilterState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_snapstack_msgs2
bool
snapstack_msgs2__msg__VioFilterState__Sequence__are_equal(const snapstack_msgs2__msg__VioFilterState__Sequence * lhs, const snapstack_msgs2__msg__VioFilterState__Sequence * rhs);

/// Copy an array of msg/VioFilterState messages.
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
ROSIDL_GENERATOR_C_PUBLIC_snapstack_msgs2
bool
snapstack_msgs2__msg__VioFilterState__Sequence__copy(
  const snapstack_msgs2__msg__VioFilterState__Sequence * input,
  snapstack_msgs2__msg__VioFilterState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__VIO_FILTER_STATE__FUNCTIONS_H_
