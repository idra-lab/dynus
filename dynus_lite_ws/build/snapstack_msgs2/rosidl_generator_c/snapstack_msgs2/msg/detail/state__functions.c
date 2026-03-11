// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from snapstack_msgs2:msg/State.idl
// generated code does not contain a copyright notice
#include "snapstack_msgs2/msg/detail/state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `state_stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `pos`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `vel`
// Member `w`
// Member `abias`
// Member `gbias`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `quat`
#include "geometry_msgs/msg/detail/quaternion__functions.h"

bool
snapstack_msgs2__msg__State__init(snapstack_msgs2__msg__State * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    snapstack_msgs2__msg__State__fini(msg);
    return false;
  }
  // state_stamp
  if (!builtin_interfaces__msg__Time__init(&msg->state_stamp)) {
    snapstack_msgs2__msg__State__fini(msg);
    return false;
  }
  // pos
  if (!geometry_msgs__msg__Point__init(&msg->pos)) {
    snapstack_msgs2__msg__State__fini(msg);
    return false;
  }
  // vel
  if (!geometry_msgs__msg__Vector3__init(&msg->vel)) {
    snapstack_msgs2__msg__State__fini(msg);
    return false;
  }
  // quat
  if (!geometry_msgs__msg__Quaternion__init(&msg->quat)) {
    snapstack_msgs2__msg__State__fini(msg);
    return false;
  }
  // w
  if (!geometry_msgs__msg__Vector3__init(&msg->w)) {
    snapstack_msgs2__msg__State__fini(msg);
    return false;
  }
  // abias
  if (!geometry_msgs__msg__Vector3__init(&msg->abias)) {
    snapstack_msgs2__msg__State__fini(msg);
    return false;
  }
  // gbias
  if (!geometry_msgs__msg__Vector3__init(&msg->gbias)) {
    snapstack_msgs2__msg__State__fini(msg);
    return false;
  }
  return true;
}

void
snapstack_msgs2__msg__State__fini(snapstack_msgs2__msg__State * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // state_stamp
  builtin_interfaces__msg__Time__fini(&msg->state_stamp);
  // pos
  geometry_msgs__msg__Point__fini(&msg->pos);
  // vel
  geometry_msgs__msg__Vector3__fini(&msg->vel);
  // quat
  geometry_msgs__msg__Quaternion__fini(&msg->quat);
  // w
  geometry_msgs__msg__Vector3__fini(&msg->w);
  // abias
  geometry_msgs__msg__Vector3__fini(&msg->abias);
  // gbias
  geometry_msgs__msg__Vector3__fini(&msg->gbias);
}

bool
snapstack_msgs2__msg__State__are_equal(const snapstack_msgs2__msg__State * lhs, const snapstack_msgs2__msg__State * rhs)
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
  // state_stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->state_stamp), &(rhs->state_stamp)))
  {
    return false;
  }
  // pos
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->pos), &(rhs->pos)))
  {
    return false;
  }
  // vel
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->vel), &(rhs->vel)))
  {
    return false;
  }
  // quat
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->quat), &(rhs->quat)))
  {
    return false;
  }
  // w
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->w), &(rhs->w)))
  {
    return false;
  }
  // abias
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->abias), &(rhs->abias)))
  {
    return false;
  }
  // gbias
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->gbias), &(rhs->gbias)))
  {
    return false;
  }
  return true;
}

bool
snapstack_msgs2__msg__State__copy(
  const snapstack_msgs2__msg__State * input,
  snapstack_msgs2__msg__State * output)
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
  // state_stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->state_stamp), &(output->state_stamp)))
  {
    return false;
  }
  // pos
  if (!geometry_msgs__msg__Point__copy(
      &(input->pos), &(output->pos)))
  {
    return false;
  }
  // vel
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->vel), &(output->vel)))
  {
    return false;
  }
  // quat
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->quat), &(output->quat)))
  {
    return false;
  }
  // w
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->w), &(output->w)))
  {
    return false;
  }
  // abias
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->abias), &(output->abias)))
  {
    return false;
  }
  // gbias
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->gbias), &(output->gbias)))
  {
    return false;
  }
  return true;
}

snapstack_msgs2__msg__State *
snapstack_msgs2__msg__State__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__State * msg = (snapstack_msgs2__msg__State *)allocator.allocate(sizeof(snapstack_msgs2__msg__State), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(snapstack_msgs2__msg__State));
  bool success = snapstack_msgs2__msg__State__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
snapstack_msgs2__msg__State__destroy(snapstack_msgs2__msg__State * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    snapstack_msgs2__msg__State__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
snapstack_msgs2__msg__State__Sequence__init(snapstack_msgs2__msg__State__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__State * data = NULL;

  if (size) {
    data = (snapstack_msgs2__msg__State *)allocator.zero_allocate(size, sizeof(snapstack_msgs2__msg__State), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = snapstack_msgs2__msg__State__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        snapstack_msgs2__msg__State__fini(&data[i - 1]);
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
snapstack_msgs2__msg__State__Sequence__fini(snapstack_msgs2__msg__State__Sequence * array)
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
      snapstack_msgs2__msg__State__fini(&array->data[i]);
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

snapstack_msgs2__msg__State__Sequence *
snapstack_msgs2__msg__State__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__State__Sequence * array = (snapstack_msgs2__msg__State__Sequence *)allocator.allocate(sizeof(snapstack_msgs2__msg__State__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = snapstack_msgs2__msg__State__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
snapstack_msgs2__msg__State__Sequence__destroy(snapstack_msgs2__msg__State__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    snapstack_msgs2__msg__State__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
snapstack_msgs2__msg__State__Sequence__are_equal(const snapstack_msgs2__msg__State__Sequence * lhs, const snapstack_msgs2__msg__State__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!snapstack_msgs2__msg__State__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
snapstack_msgs2__msg__State__Sequence__copy(
  const snapstack_msgs2__msg__State__Sequence * input,
  snapstack_msgs2__msg__State__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(snapstack_msgs2__msg__State);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    snapstack_msgs2__msg__State * data =
      (snapstack_msgs2__msg__State *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!snapstack_msgs2__msg__State__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          snapstack_msgs2__msg__State__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!snapstack_msgs2__msg__State__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
