// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from snapstack_msgs2:msg/SMCData.idl
// generated code does not contain a copyright notice
#include "snapstack_msgs2/msg/detail/smc_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `q_des`
// Member `q_act`
// Member `q_err`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `w_des`
// Member `w_act`
// Member `w_err`
// Member `s`
// Member `integrator`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
snapstack_msgs2__msg__SMCData__init(snapstack_msgs2__msg__SMCData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    snapstack_msgs2__msg__SMCData__fini(msg);
    return false;
  }
  // q_des
  if (!geometry_msgs__msg__Quaternion__init(&msg->q_des)) {
    snapstack_msgs2__msg__SMCData__fini(msg);
    return false;
  }
  // q_act
  if (!geometry_msgs__msg__Quaternion__init(&msg->q_act)) {
    snapstack_msgs2__msg__SMCData__fini(msg);
    return false;
  }
  // q_err
  if (!geometry_msgs__msg__Quaternion__init(&msg->q_err)) {
    snapstack_msgs2__msg__SMCData__fini(msg);
    return false;
  }
  // w_des
  if (!geometry_msgs__msg__Vector3__init(&msg->w_des)) {
    snapstack_msgs2__msg__SMCData__fini(msg);
    return false;
  }
  // w_act
  if (!geometry_msgs__msg__Vector3__init(&msg->w_act)) {
    snapstack_msgs2__msg__SMCData__fini(msg);
    return false;
  }
  // w_err
  if (!geometry_msgs__msg__Vector3__init(&msg->w_err)) {
    snapstack_msgs2__msg__SMCData__fini(msg);
    return false;
  }
  // s
  if (!geometry_msgs__msg__Vector3__init(&msg->s)) {
    snapstack_msgs2__msg__SMCData__fini(msg);
    return false;
  }
  // integrator
  if (!geometry_msgs__msg__Vector3__init(&msg->integrator)) {
    snapstack_msgs2__msg__SMCData__fini(msg);
    return false;
  }
  return true;
}

void
snapstack_msgs2__msg__SMCData__fini(snapstack_msgs2__msg__SMCData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // q_des
  geometry_msgs__msg__Quaternion__fini(&msg->q_des);
  // q_act
  geometry_msgs__msg__Quaternion__fini(&msg->q_act);
  // q_err
  geometry_msgs__msg__Quaternion__fini(&msg->q_err);
  // w_des
  geometry_msgs__msg__Vector3__fini(&msg->w_des);
  // w_act
  geometry_msgs__msg__Vector3__fini(&msg->w_act);
  // w_err
  geometry_msgs__msg__Vector3__fini(&msg->w_err);
  // s
  geometry_msgs__msg__Vector3__fini(&msg->s);
  // integrator
  geometry_msgs__msg__Vector3__fini(&msg->integrator);
}

bool
snapstack_msgs2__msg__SMCData__are_equal(const snapstack_msgs2__msg__SMCData * lhs, const snapstack_msgs2__msg__SMCData * rhs)
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
  // q_des
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->q_des), &(rhs->q_des)))
  {
    return false;
  }
  // q_act
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->q_act), &(rhs->q_act)))
  {
    return false;
  }
  // q_err
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->q_err), &(rhs->q_err)))
  {
    return false;
  }
  // w_des
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->w_des), &(rhs->w_des)))
  {
    return false;
  }
  // w_act
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->w_act), &(rhs->w_act)))
  {
    return false;
  }
  // w_err
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->w_err), &(rhs->w_err)))
  {
    return false;
  }
  // s
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->s), &(rhs->s)))
  {
    return false;
  }
  // integrator
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->integrator), &(rhs->integrator)))
  {
    return false;
  }
  return true;
}

bool
snapstack_msgs2__msg__SMCData__copy(
  const snapstack_msgs2__msg__SMCData * input,
  snapstack_msgs2__msg__SMCData * output)
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
  // q_des
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->q_des), &(output->q_des)))
  {
    return false;
  }
  // q_act
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->q_act), &(output->q_act)))
  {
    return false;
  }
  // q_err
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->q_err), &(output->q_err)))
  {
    return false;
  }
  // w_des
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->w_des), &(output->w_des)))
  {
    return false;
  }
  // w_act
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->w_act), &(output->w_act)))
  {
    return false;
  }
  // w_err
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->w_err), &(output->w_err)))
  {
    return false;
  }
  // s
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->s), &(output->s)))
  {
    return false;
  }
  // integrator
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->integrator), &(output->integrator)))
  {
    return false;
  }
  return true;
}

snapstack_msgs2__msg__SMCData *
snapstack_msgs2__msg__SMCData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__SMCData * msg = (snapstack_msgs2__msg__SMCData *)allocator.allocate(sizeof(snapstack_msgs2__msg__SMCData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(snapstack_msgs2__msg__SMCData));
  bool success = snapstack_msgs2__msg__SMCData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
snapstack_msgs2__msg__SMCData__destroy(snapstack_msgs2__msg__SMCData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    snapstack_msgs2__msg__SMCData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
snapstack_msgs2__msg__SMCData__Sequence__init(snapstack_msgs2__msg__SMCData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__SMCData * data = NULL;

  if (size) {
    data = (snapstack_msgs2__msg__SMCData *)allocator.zero_allocate(size, sizeof(snapstack_msgs2__msg__SMCData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = snapstack_msgs2__msg__SMCData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        snapstack_msgs2__msg__SMCData__fini(&data[i - 1]);
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
snapstack_msgs2__msg__SMCData__Sequence__fini(snapstack_msgs2__msg__SMCData__Sequence * array)
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
      snapstack_msgs2__msg__SMCData__fini(&array->data[i]);
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

snapstack_msgs2__msg__SMCData__Sequence *
snapstack_msgs2__msg__SMCData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__SMCData__Sequence * array = (snapstack_msgs2__msg__SMCData__Sequence *)allocator.allocate(sizeof(snapstack_msgs2__msg__SMCData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = snapstack_msgs2__msg__SMCData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
snapstack_msgs2__msg__SMCData__Sequence__destroy(snapstack_msgs2__msg__SMCData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    snapstack_msgs2__msg__SMCData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
snapstack_msgs2__msg__SMCData__Sequence__are_equal(const snapstack_msgs2__msg__SMCData__Sequence * lhs, const snapstack_msgs2__msg__SMCData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!snapstack_msgs2__msg__SMCData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
snapstack_msgs2__msg__SMCData__Sequence__copy(
  const snapstack_msgs2__msg__SMCData__Sequence * input,
  snapstack_msgs2__msg__SMCData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(snapstack_msgs2__msg__SMCData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    snapstack_msgs2__msg__SMCData * data =
      (snapstack_msgs2__msg__SMCData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!snapstack_msgs2__msg__SMCData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          snapstack_msgs2__msg__SMCData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!snapstack_msgs2__msg__SMCData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
