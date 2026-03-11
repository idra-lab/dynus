// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynus_interfaces:msg/QuinticPWPTraj.idl
// generated code does not contain a copyright notice
#include "dynus_interfaces/msg/detail/quintic_pwp_traj__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `times`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `coeff_x`
// Member `coeff_y`
// Member `coeff_z`
#include "dynus_interfaces/msg/detail/quintic_coeff_poly3__functions.h"

bool
dynus_interfaces__msg__QuinticPWPTraj__init(dynus_interfaces__msg__QuinticPWPTraj * msg)
{
  if (!msg) {
    return false;
  }
  // times
  if (!rosidl_runtime_c__double__Sequence__init(&msg->times, 0)) {
    dynus_interfaces__msg__QuinticPWPTraj__fini(msg);
    return false;
  }
  // coeff_x
  if (!dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__init(&msg->coeff_x, 0)) {
    dynus_interfaces__msg__QuinticPWPTraj__fini(msg);
    return false;
  }
  // coeff_y
  if (!dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__init(&msg->coeff_y, 0)) {
    dynus_interfaces__msg__QuinticPWPTraj__fini(msg);
    return false;
  }
  // coeff_z
  if (!dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__init(&msg->coeff_z, 0)) {
    dynus_interfaces__msg__QuinticPWPTraj__fini(msg);
    return false;
  }
  return true;
}

void
dynus_interfaces__msg__QuinticPWPTraj__fini(dynus_interfaces__msg__QuinticPWPTraj * msg)
{
  if (!msg) {
    return;
  }
  // times
  rosidl_runtime_c__double__Sequence__fini(&msg->times);
  // coeff_x
  dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__fini(&msg->coeff_x);
  // coeff_y
  dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__fini(&msg->coeff_y);
  // coeff_z
  dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__fini(&msg->coeff_z);
}

bool
dynus_interfaces__msg__QuinticPWPTraj__are_equal(const dynus_interfaces__msg__QuinticPWPTraj * lhs, const dynus_interfaces__msg__QuinticPWPTraj * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // times
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->times), &(rhs->times)))
  {
    return false;
  }
  // coeff_x
  if (!dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__are_equal(
      &(lhs->coeff_x), &(rhs->coeff_x)))
  {
    return false;
  }
  // coeff_y
  if (!dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__are_equal(
      &(lhs->coeff_y), &(rhs->coeff_y)))
  {
    return false;
  }
  // coeff_z
  if (!dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__are_equal(
      &(lhs->coeff_z), &(rhs->coeff_z)))
  {
    return false;
  }
  return true;
}

bool
dynus_interfaces__msg__QuinticPWPTraj__copy(
  const dynus_interfaces__msg__QuinticPWPTraj * input,
  dynus_interfaces__msg__QuinticPWPTraj * output)
{
  if (!input || !output) {
    return false;
  }
  // times
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->times), &(output->times)))
  {
    return false;
  }
  // coeff_x
  if (!dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__copy(
      &(input->coeff_x), &(output->coeff_x)))
  {
    return false;
  }
  // coeff_y
  if (!dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__copy(
      &(input->coeff_y), &(output->coeff_y)))
  {
    return false;
  }
  // coeff_z
  if (!dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__copy(
      &(input->coeff_z), &(output->coeff_z)))
  {
    return false;
  }
  return true;
}

dynus_interfaces__msg__QuinticPWPTraj *
dynus_interfaces__msg__QuinticPWPTraj__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynus_interfaces__msg__QuinticPWPTraj * msg = (dynus_interfaces__msg__QuinticPWPTraj *)allocator.allocate(sizeof(dynus_interfaces__msg__QuinticPWPTraj), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynus_interfaces__msg__QuinticPWPTraj));
  bool success = dynus_interfaces__msg__QuinticPWPTraj__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynus_interfaces__msg__QuinticPWPTraj__destroy(dynus_interfaces__msg__QuinticPWPTraj * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynus_interfaces__msg__QuinticPWPTraj__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynus_interfaces__msg__QuinticPWPTraj__Sequence__init(dynus_interfaces__msg__QuinticPWPTraj__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynus_interfaces__msg__QuinticPWPTraj * data = NULL;

  if (size) {
    data = (dynus_interfaces__msg__QuinticPWPTraj *)allocator.zero_allocate(size, sizeof(dynus_interfaces__msg__QuinticPWPTraj), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynus_interfaces__msg__QuinticPWPTraj__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynus_interfaces__msg__QuinticPWPTraj__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dynus_interfaces__msg__QuinticPWPTraj__Sequence__fini(dynus_interfaces__msg__QuinticPWPTraj__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dynus_interfaces__msg__QuinticPWPTraj__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dynus_interfaces__msg__QuinticPWPTraj__Sequence *
dynus_interfaces__msg__QuinticPWPTraj__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynus_interfaces__msg__QuinticPWPTraj__Sequence * array = (dynus_interfaces__msg__QuinticPWPTraj__Sequence *)allocator.allocate(sizeof(dynus_interfaces__msg__QuinticPWPTraj__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynus_interfaces__msg__QuinticPWPTraj__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynus_interfaces__msg__QuinticPWPTraj__Sequence__destroy(dynus_interfaces__msg__QuinticPWPTraj__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynus_interfaces__msg__QuinticPWPTraj__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynus_interfaces__msg__QuinticPWPTraj__Sequence__are_equal(const dynus_interfaces__msg__QuinticPWPTraj__Sequence * lhs, const dynus_interfaces__msg__QuinticPWPTraj__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynus_interfaces__msg__QuinticPWPTraj__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynus_interfaces__msg__QuinticPWPTraj__Sequence__copy(
  const dynus_interfaces__msg__QuinticPWPTraj__Sequence * input,
  dynus_interfaces__msg__QuinticPWPTraj__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynus_interfaces__msg__QuinticPWPTraj);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynus_interfaces__msg__QuinticPWPTraj * data =
      (dynus_interfaces__msg__QuinticPWPTraj *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynus_interfaces__msg__QuinticPWPTraj__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynus_interfaces__msg__QuinticPWPTraj__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynus_interfaces__msg__QuinticPWPTraj__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
