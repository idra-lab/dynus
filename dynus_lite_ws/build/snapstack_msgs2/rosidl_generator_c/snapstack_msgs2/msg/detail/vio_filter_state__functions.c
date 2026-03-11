// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from snapstack_msgs2:msg/VioFilterState.idl
// generated code does not contain a copyright notice
#include "snapstack_msgs2/msg/detail/vio_filter_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
// Member `extrinsics`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `bw`
// Member `ba`
// Member `accel_meas`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `error_cov`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
snapstack_msgs2__msg__VioFilterState__init(snapstack_msgs2__msg__VioFilterState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    snapstack_msgs2__msg__VioFilterState__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    snapstack_msgs2__msg__VioFilterState__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    snapstack_msgs2__msg__VioFilterState__fini(msg);
    return false;
  }
  // bw
  if (!geometry_msgs__msg__Vector3__init(&msg->bw)) {
    snapstack_msgs2__msg__VioFilterState__fini(msg);
    return false;
  }
  // ba
  if (!geometry_msgs__msg__Vector3__init(&msg->ba)) {
    snapstack_msgs2__msg__VioFilterState__fini(msg);
    return false;
  }
  // extrinsics
  if (!geometry_msgs__msg__Pose__init(&msg->extrinsics)) {
    snapstack_msgs2__msg__VioFilterState__fini(msg);
    return false;
  }
  // accel_meas
  if (!geometry_msgs__msg__Vector3__init(&msg->accel_meas)) {
    snapstack_msgs2__msg__VioFilterState__fini(msg);
    return false;
  }
  // n
  // error_cov
  if (!rosidl_runtime_c__float__Sequence__init(&msg->error_cov, 0)) {
    snapstack_msgs2__msg__VioFilterState__fini(msg);
    return false;
  }
  return true;
}

void
snapstack_msgs2__msg__VioFilterState__fini(snapstack_msgs2__msg__VioFilterState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
  // bw
  geometry_msgs__msg__Vector3__fini(&msg->bw);
  // ba
  geometry_msgs__msg__Vector3__fini(&msg->ba);
  // extrinsics
  geometry_msgs__msg__Pose__fini(&msg->extrinsics);
  // accel_meas
  geometry_msgs__msg__Vector3__fini(&msg->accel_meas);
  // n
  // error_cov
  rosidl_runtime_c__float__Sequence__fini(&msg->error_cov);
}

bool
snapstack_msgs2__msg__VioFilterState__are_equal(const snapstack_msgs2__msg__VioFilterState * lhs, const snapstack_msgs2__msg__VioFilterState * rhs)
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
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  // bw
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->bw), &(rhs->bw)))
  {
    return false;
  }
  // ba
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->ba), &(rhs->ba)))
  {
    return false;
  }
  // extrinsics
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->extrinsics), &(rhs->extrinsics)))
  {
    return false;
  }
  // accel_meas
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->accel_meas), &(rhs->accel_meas)))
  {
    return false;
  }
  // n
  if (lhs->n != rhs->n) {
    return false;
  }
  // error_cov
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->error_cov), &(rhs->error_cov)))
  {
    return false;
  }
  return true;
}

bool
snapstack_msgs2__msg__VioFilterState__copy(
  const snapstack_msgs2__msg__VioFilterState * input,
  snapstack_msgs2__msg__VioFilterState * output)
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
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  // bw
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->bw), &(output->bw)))
  {
    return false;
  }
  // ba
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->ba), &(output->ba)))
  {
    return false;
  }
  // extrinsics
  if (!geometry_msgs__msg__Pose__copy(
      &(input->extrinsics), &(output->extrinsics)))
  {
    return false;
  }
  // accel_meas
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->accel_meas), &(output->accel_meas)))
  {
    return false;
  }
  // n
  output->n = input->n;
  // error_cov
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->error_cov), &(output->error_cov)))
  {
    return false;
  }
  return true;
}

snapstack_msgs2__msg__VioFilterState *
snapstack_msgs2__msg__VioFilterState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__VioFilterState * msg = (snapstack_msgs2__msg__VioFilterState *)allocator.allocate(sizeof(snapstack_msgs2__msg__VioFilterState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(snapstack_msgs2__msg__VioFilterState));
  bool success = snapstack_msgs2__msg__VioFilterState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
snapstack_msgs2__msg__VioFilterState__destroy(snapstack_msgs2__msg__VioFilterState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    snapstack_msgs2__msg__VioFilterState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
snapstack_msgs2__msg__VioFilterState__Sequence__init(snapstack_msgs2__msg__VioFilterState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__VioFilterState * data = NULL;

  if (size) {
    data = (snapstack_msgs2__msg__VioFilterState *)allocator.zero_allocate(size, sizeof(snapstack_msgs2__msg__VioFilterState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = snapstack_msgs2__msg__VioFilterState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        snapstack_msgs2__msg__VioFilterState__fini(&data[i - 1]);
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
snapstack_msgs2__msg__VioFilterState__Sequence__fini(snapstack_msgs2__msg__VioFilterState__Sequence * array)
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
      snapstack_msgs2__msg__VioFilterState__fini(&array->data[i]);
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

snapstack_msgs2__msg__VioFilterState__Sequence *
snapstack_msgs2__msg__VioFilterState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__VioFilterState__Sequence * array = (snapstack_msgs2__msg__VioFilterState__Sequence *)allocator.allocate(sizeof(snapstack_msgs2__msg__VioFilterState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = snapstack_msgs2__msg__VioFilterState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
snapstack_msgs2__msg__VioFilterState__Sequence__destroy(snapstack_msgs2__msg__VioFilterState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    snapstack_msgs2__msg__VioFilterState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
snapstack_msgs2__msg__VioFilterState__Sequence__are_equal(const snapstack_msgs2__msg__VioFilterState__Sequence * lhs, const snapstack_msgs2__msg__VioFilterState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!snapstack_msgs2__msg__VioFilterState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
snapstack_msgs2__msg__VioFilterState__Sequence__copy(
  const snapstack_msgs2__msg__VioFilterState__Sequence * input,
  snapstack_msgs2__msg__VioFilterState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(snapstack_msgs2__msg__VioFilterState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    snapstack_msgs2__msg__VioFilterState * data =
      (snapstack_msgs2__msg__VioFilterState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!snapstack_msgs2__msg__VioFilterState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          snapstack_msgs2__msg__VioFilterState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!snapstack_msgs2__msg__VioFilterState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
