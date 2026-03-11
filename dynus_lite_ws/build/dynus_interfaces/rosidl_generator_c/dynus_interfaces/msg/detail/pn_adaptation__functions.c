// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynus_interfaces:msg/PNAdaptation.idl
// generated code does not contain a copyright notice
#include "dynus_interfaces/msg/detail/pn_adaptation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
dynus_interfaces__msg__PNAdaptation__init(dynus_interfaces__msg__PNAdaptation * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dynus_interfaces__msg__PNAdaptation__fini(msg);
    return false;
  }
  // old_n
  // new_n
  // old_p
  // new_p
  return true;
}

void
dynus_interfaces__msg__PNAdaptation__fini(dynus_interfaces__msg__PNAdaptation * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // old_n
  // new_n
  // old_p
  // new_p
}

bool
dynus_interfaces__msg__PNAdaptation__are_equal(const dynus_interfaces__msg__PNAdaptation * lhs, const dynus_interfaces__msg__PNAdaptation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // old_n
  if (lhs->old_n != rhs->old_n) {
    return false;
  }
  // new_n
  if (lhs->new_n != rhs->new_n) {
    return false;
  }
  // old_p
  if (lhs->old_p != rhs->old_p) {
    return false;
  }
  // new_p
  if (lhs->new_p != rhs->new_p) {
    return false;
  }
  return true;
}

bool
dynus_interfaces__msg__PNAdaptation__copy(
  const dynus_interfaces__msg__PNAdaptation * input,
  dynus_interfaces__msg__PNAdaptation * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // old_n
  output->old_n = input->old_n;
  // new_n
  output->new_n = input->new_n;
  // old_p
  output->old_p = input->old_p;
  // new_p
  output->new_p = input->new_p;
  return true;
}

dynus_interfaces__msg__PNAdaptation *
dynus_interfaces__msg__PNAdaptation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynus_interfaces__msg__PNAdaptation * msg = (dynus_interfaces__msg__PNAdaptation *)allocator.allocate(sizeof(dynus_interfaces__msg__PNAdaptation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynus_interfaces__msg__PNAdaptation));
  bool success = dynus_interfaces__msg__PNAdaptation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynus_interfaces__msg__PNAdaptation__destroy(dynus_interfaces__msg__PNAdaptation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynus_interfaces__msg__PNAdaptation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynus_interfaces__msg__PNAdaptation__Sequence__init(dynus_interfaces__msg__PNAdaptation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynus_interfaces__msg__PNAdaptation * data = NULL;

  if (size) {
    data = (dynus_interfaces__msg__PNAdaptation *)allocator.zero_allocate(size, sizeof(dynus_interfaces__msg__PNAdaptation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynus_interfaces__msg__PNAdaptation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynus_interfaces__msg__PNAdaptation__fini(&data[i - 1]);
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
dynus_interfaces__msg__PNAdaptation__Sequence__fini(dynus_interfaces__msg__PNAdaptation__Sequence * array)
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
      dynus_interfaces__msg__PNAdaptation__fini(&array->data[i]);
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

dynus_interfaces__msg__PNAdaptation__Sequence *
dynus_interfaces__msg__PNAdaptation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynus_interfaces__msg__PNAdaptation__Sequence * array = (dynus_interfaces__msg__PNAdaptation__Sequence *)allocator.allocate(sizeof(dynus_interfaces__msg__PNAdaptation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynus_interfaces__msg__PNAdaptation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynus_interfaces__msg__PNAdaptation__Sequence__destroy(dynus_interfaces__msg__PNAdaptation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynus_interfaces__msg__PNAdaptation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynus_interfaces__msg__PNAdaptation__Sequence__are_equal(const dynus_interfaces__msg__PNAdaptation__Sequence * lhs, const dynus_interfaces__msg__PNAdaptation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynus_interfaces__msg__PNAdaptation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynus_interfaces__msg__PNAdaptation__Sequence__copy(
  const dynus_interfaces__msg__PNAdaptation__Sequence * input,
  dynus_interfaces__msg__PNAdaptation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynus_interfaces__msg__PNAdaptation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynus_interfaces__msg__PNAdaptation * data =
      (dynus_interfaces__msg__PNAdaptation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynus_interfaces__msg__PNAdaptation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynus_interfaces__msg__PNAdaptation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynus_interfaces__msg__PNAdaptation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
