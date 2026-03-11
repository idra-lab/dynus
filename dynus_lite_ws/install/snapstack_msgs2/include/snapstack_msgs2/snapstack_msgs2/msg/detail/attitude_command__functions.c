// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from snapstack_msgs2:msg/AttitudeCommand.idl
// generated code does not contain a copyright notice
#include "snapstack_msgs2/msg/detail/attitude_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `q`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `w`
// Member `f_w`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
snapstack_msgs2__msg__AttitudeCommand__init(snapstack_msgs2__msg__AttitudeCommand * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    snapstack_msgs2__msg__AttitudeCommand__fini(msg);
    return false;
  }
  // q
  if (!geometry_msgs__msg__Quaternion__init(&msg->q)) {
    snapstack_msgs2__msg__AttitudeCommand__fini(msg);
    return false;
  }
  // w
  if (!geometry_msgs__msg__Vector3__init(&msg->w)) {
    snapstack_msgs2__msg__AttitudeCommand__fini(msg);
    return false;
  }
  // f_w
  if (!geometry_msgs__msg__Vector3__init(&msg->f_w)) {
    snapstack_msgs2__msg__AttitudeCommand__fini(msg);
    return false;
  }
  // power
  return true;
}

void
snapstack_msgs2__msg__AttitudeCommand__fini(snapstack_msgs2__msg__AttitudeCommand * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // q
  geometry_msgs__msg__Quaternion__fini(&msg->q);
  // w
  geometry_msgs__msg__Vector3__fini(&msg->w);
  // f_w
  geometry_msgs__msg__Vector3__fini(&msg->f_w);
  // power
}

bool
snapstack_msgs2__msg__AttitudeCommand__are_equal(const snapstack_msgs2__msg__AttitudeCommand * lhs, const snapstack_msgs2__msg__AttitudeCommand * rhs)
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
  // q
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->q), &(rhs->q)))
  {
    return false;
  }
  // w
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->w), &(rhs->w)))
  {
    return false;
  }
  // f_w
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->f_w), &(rhs->f_w)))
  {
    return false;
  }
  // power
  if (lhs->power != rhs->power) {
    return false;
  }
  return true;
}

bool
snapstack_msgs2__msg__AttitudeCommand__copy(
  const snapstack_msgs2__msg__AttitudeCommand * input,
  snapstack_msgs2__msg__AttitudeCommand * output)
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
  // q
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->q), &(output->q)))
  {
    return false;
  }
  // w
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->w), &(output->w)))
  {
    return false;
  }
  // f_w
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->f_w), &(output->f_w)))
  {
    return false;
  }
  // power
  output->power = input->power;
  return true;
}

snapstack_msgs2__msg__AttitudeCommand *
snapstack_msgs2__msg__AttitudeCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__AttitudeCommand * msg = (snapstack_msgs2__msg__AttitudeCommand *)allocator.allocate(sizeof(snapstack_msgs2__msg__AttitudeCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(snapstack_msgs2__msg__AttitudeCommand));
  bool success = snapstack_msgs2__msg__AttitudeCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
snapstack_msgs2__msg__AttitudeCommand__destroy(snapstack_msgs2__msg__AttitudeCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    snapstack_msgs2__msg__AttitudeCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
snapstack_msgs2__msg__AttitudeCommand__Sequence__init(snapstack_msgs2__msg__AttitudeCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__AttitudeCommand * data = NULL;

  if (size) {
    data = (snapstack_msgs2__msg__AttitudeCommand *)allocator.zero_allocate(size, sizeof(snapstack_msgs2__msg__AttitudeCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = snapstack_msgs2__msg__AttitudeCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        snapstack_msgs2__msg__AttitudeCommand__fini(&data[i - 1]);
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
snapstack_msgs2__msg__AttitudeCommand__Sequence__fini(snapstack_msgs2__msg__AttitudeCommand__Sequence * array)
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
      snapstack_msgs2__msg__AttitudeCommand__fini(&array->data[i]);
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

snapstack_msgs2__msg__AttitudeCommand__Sequence *
snapstack_msgs2__msg__AttitudeCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__AttitudeCommand__Sequence * array = (snapstack_msgs2__msg__AttitudeCommand__Sequence *)allocator.allocate(sizeof(snapstack_msgs2__msg__AttitudeCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = snapstack_msgs2__msg__AttitudeCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
snapstack_msgs2__msg__AttitudeCommand__Sequence__destroy(snapstack_msgs2__msg__AttitudeCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    snapstack_msgs2__msg__AttitudeCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
snapstack_msgs2__msg__AttitudeCommand__Sequence__are_equal(const snapstack_msgs2__msg__AttitudeCommand__Sequence * lhs, const snapstack_msgs2__msg__AttitudeCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!snapstack_msgs2__msg__AttitudeCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
snapstack_msgs2__msg__AttitudeCommand__Sequence__copy(
  const snapstack_msgs2__msg__AttitudeCommand__Sequence * input,
  snapstack_msgs2__msg__AttitudeCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(snapstack_msgs2__msg__AttitudeCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    snapstack_msgs2__msg__AttitudeCommand * data =
      (snapstack_msgs2__msg__AttitudeCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!snapstack_msgs2__msg__AttitudeCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          snapstack_msgs2__msg__AttitudeCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!snapstack_msgs2__msg__AttitudeCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
