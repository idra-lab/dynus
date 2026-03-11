// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from snapstack_msgs2:msg/Goal.idl
// generated code does not contain a copyright notice
#include "snapstack_msgs2/msg/detail/goal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `p`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `v`
// Member `a`
// Member `j`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
snapstack_msgs2__msg__Goal__init(snapstack_msgs2__msg__Goal * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    snapstack_msgs2__msg__Goal__fini(msg);
    return false;
  }
  // p
  if (!geometry_msgs__msg__Point__init(&msg->p)) {
    snapstack_msgs2__msg__Goal__fini(msg);
    return false;
  }
  // v
  if (!geometry_msgs__msg__Vector3__init(&msg->v)) {
    snapstack_msgs2__msg__Goal__fini(msg);
    return false;
  }
  // a
  if (!geometry_msgs__msg__Vector3__init(&msg->a)) {
    snapstack_msgs2__msg__Goal__fini(msg);
    return false;
  }
  // j
  if (!geometry_msgs__msg__Vector3__init(&msg->j)) {
    snapstack_msgs2__msg__Goal__fini(msg);
    return false;
  }
  // psi
  // dpsi
  // power
  // mode_xy
  // mode_z
  return true;
}

void
snapstack_msgs2__msg__Goal__fini(snapstack_msgs2__msg__Goal * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // p
  geometry_msgs__msg__Point__fini(&msg->p);
  // v
  geometry_msgs__msg__Vector3__fini(&msg->v);
  // a
  geometry_msgs__msg__Vector3__fini(&msg->a);
  // j
  geometry_msgs__msg__Vector3__fini(&msg->j);
  // psi
  // dpsi
  // power
  // mode_xy
  // mode_z
}

bool
snapstack_msgs2__msg__Goal__are_equal(const snapstack_msgs2__msg__Goal * lhs, const snapstack_msgs2__msg__Goal * rhs)
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
  if (!geometry_msgs__msg__Point__are_equal(
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
  // psi
  if (lhs->psi != rhs->psi) {
    return false;
  }
  // dpsi
  if (lhs->dpsi != rhs->dpsi) {
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
snapstack_msgs2__msg__Goal__copy(
  const snapstack_msgs2__msg__Goal * input,
  snapstack_msgs2__msg__Goal * output)
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
  if (!geometry_msgs__msg__Point__copy(
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
  // psi
  output->psi = input->psi;
  // dpsi
  output->dpsi = input->dpsi;
  // power
  output->power = input->power;
  // mode_xy
  output->mode_xy = input->mode_xy;
  // mode_z
  output->mode_z = input->mode_z;
  return true;
}

snapstack_msgs2__msg__Goal *
snapstack_msgs2__msg__Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__Goal * msg = (snapstack_msgs2__msg__Goal *)allocator.allocate(sizeof(snapstack_msgs2__msg__Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(snapstack_msgs2__msg__Goal));
  bool success = snapstack_msgs2__msg__Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
snapstack_msgs2__msg__Goal__destroy(snapstack_msgs2__msg__Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    snapstack_msgs2__msg__Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
snapstack_msgs2__msg__Goal__Sequence__init(snapstack_msgs2__msg__Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__Goal * data = NULL;

  if (size) {
    data = (snapstack_msgs2__msg__Goal *)allocator.zero_allocate(size, sizeof(snapstack_msgs2__msg__Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = snapstack_msgs2__msg__Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        snapstack_msgs2__msg__Goal__fini(&data[i - 1]);
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
snapstack_msgs2__msg__Goal__Sequence__fini(snapstack_msgs2__msg__Goal__Sequence * array)
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
      snapstack_msgs2__msg__Goal__fini(&array->data[i]);
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

snapstack_msgs2__msg__Goal__Sequence *
snapstack_msgs2__msg__Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__Goal__Sequence * array = (snapstack_msgs2__msg__Goal__Sequence *)allocator.allocate(sizeof(snapstack_msgs2__msg__Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = snapstack_msgs2__msg__Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
snapstack_msgs2__msg__Goal__Sequence__destroy(snapstack_msgs2__msg__Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    snapstack_msgs2__msg__Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
snapstack_msgs2__msg__Goal__Sequence__are_equal(const snapstack_msgs2__msg__Goal__Sequence * lhs, const snapstack_msgs2__msg__Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!snapstack_msgs2__msg__Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
snapstack_msgs2__msg__Goal__Sequence__copy(
  const snapstack_msgs2__msg__Goal__Sequence * input,
  snapstack_msgs2__msg__Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(snapstack_msgs2__msg__Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    snapstack_msgs2__msg__Goal * data =
      (snapstack_msgs2__msg__Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!snapstack_msgs2__msg__Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          snapstack_msgs2__msg__Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!snapstack_msgs2__msg__Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
