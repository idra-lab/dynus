// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynus_interfaces:msg/Goal.idl
// generated code does not contain a copyright notice
#include "dynus_interfaces/msg/detail/goal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `p`
// Member `v`
// Member `a`
// Member `j`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
dynus_interfaces__msg__Goal__init(dynus_interfaces__msg__Goal * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dynus_interfaces__msg__Goal__fini(msg);
    return false;
  }
  // p
  if (!geometry_msgs__msg__Vector3__init(&msg->p)) {
    dynus_interfaces__msg__Goal__fini(msg);
    return false;
  }
  // v
  if (!geometry_msgs__msg__Vector3__init(&msg->v)) {
    dynus_interfaces__msg__Goal__fini(msg);
    return false;
  }
  // a
  if (!geometry_msgs__msg__Vector3__init(&msg->a)) {
    dynus_interfaces__msg__Goal__fini(msg);
    return false;
  }
  // j
  if (!geometry_msgs__msg__Vector3__init(&msg->j)) {
    dynus_interfaces__msg__Goal__fini(msg);
    return false;
  }
  // yaw
  // dyaw
  // power
  // mode_xy
  // mode_z
  return true;
}

void
dynus_interfaces__msg__Goal__fini(dynus_interfaces__msg__Goal * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // p
  geometry_msgs__msg__Vector3__fini(&msg->p);
  // v
  geometry_msgs__msg__Vector3__fini(&msg->v);
  // a
  geometry_msgs__msg__Vector3__fini(&msg->a);
  // j
  geometry_msgs__msg__Vector3__fini(&msg->j);
  // yaw
  // dyaw
  // power
  // mode_xy
  // mode_z
}

bool
dynus_interfaces__msg__Goal__are_equal(const dynus_interfaces__msg__Goal * lhs, const dynus_interfaces__msg__Goal * rhs)
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
  // p
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->p), &(rhs->p)))
  {
    return false;
  }
  // v
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->v), &(rhs->v)))
  {
    return false;
  }
  // a
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->a), &(rhs->a)))
  {
    return false;
  }
  // j
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->j), &(rhs->j)))
  {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // dyaw
  if (lhs->dyaw != rhs->dyaw) {
    return false;
  }
  // power
  if (lhs->power != rhs->power) {
    return false;
  }
  // mode_xy
  if (lhs->mode_xy != rhs->mode_xy) {
    return false;
  }
  // mode_z
  if (lhs->mode_z != rhs->mode_z) {
    return false;
  }
  return true;
}

bool
dynus_interfaces__msg__Goal__copy(
  const dynus_interfaces__msg__Goal * input,
  dynus_interfaces__msg__Goal * output)
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
  // p
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->p), &(output->p)))
  {
    return false;
  }
  // v
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->v), &(output->v)))
  {
    return false;
  }
  // a
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->a), &(output->a)))
  {
    return false;
  }
  // j
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->j), &(output->j)))
  {
    return false;
  }
  // yaw
  output->yaw = input->yaw;
  // dyaw
  output->dyaw = input->dyaw;
  // power
  output->power = input->power;
  // mode_xy
  output->mode_xy = input->mode_xy;
  // mode_z
  output->mode_z = input->mode_z;
  return true;
}

dynus_interfaces__msg__Goal *
dynus_interfaces__msg__Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynus_interfaces__msg__Goal * msg = (dynus_interfaces__msg__Goal *)allocator.allocate(sizeof(dynus_interfaces__msg__Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynus_interfaces__msg__Goal));
  bool success = dynus_interfaces__msg__Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynus_interfaces__msg__Goal__destroy(dynus_interfaces__msg__Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynus_interfaces__msg__Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynus_interfaces__msg__Goal__Sequence__init(dynus_interfaces__msg__Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynus_interfaces__msg__Goal * data = NULL;

  if (size) {
    data = (dynus_interfaces__msg__Goal *)allocator.zero_allocate(size, sizeof(dynus_interfaces__msg__Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynus_interfaces__msg__Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynus_interfaces__msg__Goal__fini(&data[i - 1]);
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
dynus_interfaces__msg__Goal__Sequence__fini(dynus_interfaces__msg__Goal__Sequence * array)
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
      dynus_interfaces__msg__Goal__fini(&array->data[i]);
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

dynus_interfaces__msg__Goal__Sequence *
dynus_interfaces__msg__Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynus_interfaces__msg__Goal__Sequence * array = (dynus_interfaces__msg__Goal__Sequence *)allocator.allocate(sizeof(dynus_interfaces__msg__Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynus_interfaces__msg__Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynus_interfaces__msg__Goal__Sequence__destroy(dynus_interfaces__msg__Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynus_interfaces__msg__Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynus_interfaces__msg__Goal__Sequence__are_equal(const dynus_interfaces__msg__Goal__Sequence * lhs, const dynus_interfaces__msg__Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynus_interfaces__msg__Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynus_interfaces__msg__Goal__Sequence__copy(
  const dynus_interfaces__msg__Goal__Sequence * input,
  dynus_interfaces__msg__Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynus_interfaces__msg__Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynus_interfaces__msg__Goal * data =
      (dynus_interfaces__msg__Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynus_interfaces__msg__Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynus_interfaces__msg__Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynus_interfaces__msg__Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
