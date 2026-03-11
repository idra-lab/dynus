// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from snapstack_msgs2:msg/QuadFlightMode.idl
// generated code does not contain a copyright notice
#include "snapstack_msgs2/msg/detail/quad_flight_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
snapstack_msgs2__msg__QuadFlightMode__init(snapstack_msgs2__msg__QuadFlightMode * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    snapstack_msgs2__msg__QuadFlightMode__fini(msg);
    return false;
  }
  // mode
  return true;
}

void
snapstack_msgs2__msg__QuadFlightMode__fini(snapstack_msgs2__msg__QuadFlightMode * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // mode
}

bool
snapstack_msgs2__msg__QuadFlightMode__are_equal(const snapstack_msgs2__msg__QuadFlightMode * lhs, const snapstack_msgs2__msg__QuadFlightMode * rhs)
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
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  return true;
}

bool
snapstack_msgs2__msg__QuadFlightMode__copy(
  const snapstack_msgs2__msg__QuadFlightMode * input,
  snapstack_msgs2__msg__QuadFlightMode * output)
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
  // mode
  output->mode = input->mode;
  return true;
}

snapstack_msgs2__msg__QuadFlightMode *
snapstack_msgs2__msg__QuadFlightMode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__QuadFlightMode * msg = (snapstack_msgs2__msg__QuadFlightMode *)allocator.allocate(sizeof(snapstack_msgs2__msg__QuadFlightMode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(snapstack_msgs2__msg__QuadFlightMode));
  bool success = snapstack_msgs2__msg__QuadFlightMode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
snapstack_msgs2__msg__QuadFlightMode__destroy(snapstack_msgs2__msg__QuadFlightMode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    snapstack_msgs2__msg__QuadFlightMode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
snapstack_msgs2__msg__QuadFlightMode__Sequence__init(snapstack_msgs2__msg__QuadFlightMode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__QuadFlightMode * data = NULL;

  if (size) {
    data = (snapstack_msgs2__msg__QuadFlightMode *)allocator.zero_allocate(size, sizeof(snapstack_msgs2__msg__QuadFlightMode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = snapstack_msgs2__msg__QuadFlightMode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        snapstack_msgs2__msg__QuadFlightMode__fini(&data[i - 1]);
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
snapstack_msgs2__msg__QuadFlightMode__Sequence__fini(snapstack_msgs2__msg__QuadFlightMode__Sequence * array)
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
      snapstack_msgs2__msg__QuadFlightMode__fini(&array->data[i]);
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

snapstack_msgs2__msg__QuadFlightMode__Sequence *
snapstack_msgs2__msg__QuadFlightMode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__QuadFlightMode__Sequence * array = (snapstack_msgs2__msg__QuadFlightMode__Sequence *)allocator.allocate(sizeof(snapstack_msgs2__msg__QuadFlightMode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = snapstack_msgs2__msg__QuadFlightMode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
snapstack_msgs2__msg__QuadFlightMode__Sequence__destroy(snapstack_msgs2__msg__QuadFlightMode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    snapstack_msgs2__msg__QuadFlightMode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
snapstack_msgs2__msg__QuadFlightMode__Sequence__are_equal(const snapstack_msgs2__msg__QuadFlightMode__Sequence * lhs, const snapstack_msgs2__msg__QuadFlightMode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!snapstack_msgs2__msg__QuadFlightMode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
snapstack_msgs2__msg__QuadFlightMode__Sequence__copy(
  const snapstack_msgs2__msg__QuadFlightMode__Sequence * input,
  snapstack_msgs2__msg__QuadFlightMode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(snapstack_msgs2__msg__QuadFlightMode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    snapstack_msgs2__msg__QuadFlightMode * data =
      (snapstack_msgs2__msg__QuadFlightMode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!snapstack_msgs2__msg__QuadFlightMode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          snapstack_msgs2__msg__QuadFlightMode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!snapstack_msgs2__msg__QuadFlightMode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
