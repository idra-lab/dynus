// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dynus_interfaces:msg/DynTrajArray.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ_ARRAY__FUNCTIONS_H_
#define DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dynus_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "dynus_interfaces/msg/detail/dyn_traj_array__struct.h"

/// Initialize msg/DynTrajArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dynus_interfaces__msg__DynTrajArray
 * )) before or use
 * dynus_interfaces__msg__DynTrajArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
bool
dynus_interfaces__msg__DynTrajArray__init(dynus_interfaces__msg__DynTrajArray * msg);

/// Finalize msg/DynTrajArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
void
dynus_interfaces__msg__DynTrajArray__fini(dynus_interfaces__msg__DynTrajArray * msg);

/// Create msg/DynTrajArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dynus_interfaces__msg__DynTrajArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
dynus_interfaces__msg__DynTrajArray *
dynus_interfaces__msg__DynTrajArray__create();

/// Destroy msg/DynTrajArray message.
/**
 * It calls
 * dynus_interfaces__msg__DynTrajArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
void
dynus_interfaces__msg__DynTrajArray__destroy(dynus_interfaces__msg__DynTrajArray * msg);

/// Check for msg/DynTrajArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
bool
dynus_interfaces__msg__DynTrajArray__are_equal(const dynus_interfaces__msg__DynTrajArray * lhs, const dynus_interfaces__msg__DynTrajArray * rhs);

/// Copy a msg/DynTrajArray message.
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
dynus_interfaces__msg__DynTrajArray__copy(
  const dynus_interfaces__msg__DynTrajArray * input,
  dynus_interfaces__msg__DynTrajArray * output);

/// Initialize array of msg/DynTrajArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * dynus_interfaces__msg__DynTrajArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
bool
dynus_interfaces__msg__DynTrajArray__Sequence__init(dynus_interfaces__msg__DynTrajArray__Sequence * array, size_t size);

/// Finalize array of msg/DynTrajArray messages.
/**
 * It calls
 * dynus_interfaces__msg__DynTrajArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
void
dynus_interfaces__msg__DynTrajArray__Sequence__fini(dynus_interfaces__msg__DynTrajArray__Sequence * array);

/// Create array of msg/DynTrajArray messages.
/**
 * It allocates the memory for the array and calls
 * dynus_interfaces__msg__DynTrajArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
dynus_interfaces__msg__DynTrajArray__Sequence *
dynus_interfaces__msg__DynTrajArray__Sequence__create(size_t size);

/// Destroy array of msg/DynTrajArray messages.
/**
 * It calls
 * dynus_interfaces__msg__DynTrajArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
void
dynus_interfaces__msg__DynTrajArray__Sequence__destroy(dynus_interfaces__msg__DynTrajArray__Sequence * array);

/// Check for msg/DynTrajArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynus_interfaces
bool
dynus_interfaces__msg__DynTrajArray__Sequence__are_equal(const dynus_interfaces__msg__DynTrajArray__Sequence * lhs, const dynus_interfaces__msg__DynTrajArray__Sequence * rhs);

/// Copy an array of msg/DynTrajArray messages.
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
dynus_interfaces__msg__DynTrajArray__Sequence__copy(
  const dynus_interfaces__msg__DynTrajArray__Sequence * input,
  dynus_interfaces__msg__DynTrajArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ_ARRAY__FUNCTIONS_H_
