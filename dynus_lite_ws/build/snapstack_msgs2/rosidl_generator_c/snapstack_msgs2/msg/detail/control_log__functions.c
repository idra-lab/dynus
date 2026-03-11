// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from snapstack_msgs2:msg/ControlLog.idl
// generated code does not contain a copyright notice
#include "snapstack_msgs2/msg/detail/control_log__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `p`
// Member `p_ref`
// Member `p_err`
// Member `p_err_int`
// Member `v`
// Member `v_ref`
// Member `v_err`
// Member `a_ff`
// Member `a_fb`
// Member `j_ff`
// Member `j_fb`
// Member `rpy`
// Member `rpy_ref`
// Member `w`
// Member `w_ref`
// Member `f_w`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `q`
// Member `q_ref`
#include "geometry_msgs/msg/detail/quaternion__functions.h"

bool
snapstack_msgs2__msg__ControlLog__init(snapstack_msgs2__msg__ControlLog * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    snapstack_msgs2__msg__ControlLog__fini(msg);
    return false;
  }
  // p
  if (!geometry_msgs__msg__Vector3__init(&msg->p)) {
    snapstack_msgs2__msg__ControlLog__fini(msg);
    return false;
  }
  // p_ref
  if (!geometry_msgs__msg__Vector3__init(&msg->p_ref)) {
    snapstack_msgs2__msg__ControlLog__fini(msg);
    return false;
  }
  // p_err
  if (!geometry_msgs__msg__Vector3__init(&msg->p_err)) {
    snapstack_msgs2__msg__ControlLog__fini(msg);
    return false;
  }
  // p_err_int
  if (!geometry_msgs__msg__Vector3__init(&msg->p_err_int)) {
    snapstack_msgs2__msg__ControlLog__fini(msg);
    return false;
  }
  // v
  if (!geometry_msgs__msg__Vector3__init(&msg->v)) {
    snapstack_msgs2__msg__ControlLog__fini(msg);
    return false;
  }
  // v_ref
  if (!geometry_msgs__msg__Vector3__init(&msg->v_ref)) {
    snapstack_msgs2__msg__ControlLog__fini(msg);
    return false;
  }
  // v_err
  if (!geometry_msgs__msg__Vector3__init(&msg->v_err)) {
    snapstack_msgs2__msg__ControlLog__fini(msg);
    return false;
  }
  // a_ff
  if (!geometry_msgs__msg__Vector3__init(&msg->a_ff)) {
    snapstack_msgs2__msg__ControlLog__fini(msg);
    return false;
  }
  // a_fb
  if (!geometry_msgs__msg__Vector3__init(&msg->a_fb)) {
    snapstack_msgs2__msg__ControlLog__fini(msg);
    return false;
  }
  // j_ff
  if (!geometry_msgs__msg__Vector3__init(&msg->j_ff)) {
    snapstack_msgs2__msg__ControlLog__fini(msg);
    return false;
  }
  // j_fb
  if (!geometry_msgs__msg__Vector3__init(&msg->j_fb)) {
    snapstack_msgs2__msg__ControlLog__fini(msg);
    return false;
  }
  // q
  if (!geometry_msgs__msg__Quaternion__init(&msg->q)) {
    snapstack_msgs2__msg__ControlLog__fini(msg);
    return false;
  }
  // q_ref
  if (!geometry_msgs__msg__Quaternion__init(&msg->q_ref)) {
    snapstack_msgs2__msg__ControlLog__fini(msg);
    return false;
  }
  // rpy
  if (!geometry_msgs__msg__Vector3__init(&msg->rpy)) {
    snapstack_msgs2__msg__ControlLog__fini(msg);
    return false;
  }
  // rpy_ref
  if (!geometry_msgs__msg__Vector3__init(&msg->rpy_ref)) {
    snapstack_msgs2__msg__ControlLog__fini(msg);
    return false;
  }
  // w
  if (!geometry_msgs__msg__Vector3__init(&msg->w)) {
    snapstack_msgs2__msg__ControlLog__fini(msg);
    return false;
  }
  // w_ref
  if (!geometry_msgs__msg__Vector3__init(&msg->w_ref)) {
    snapstack_msgs2__msg__ControlLog__fini(msg);
    return false;
  }
  // f_w
  if (!geometry_msgs__msg__Vector3__init(&msg->f_w)) {
    snapstack_msgs2__msg__ControlLog__fini(msg);
    return false;
  }
  // power
  return true;
}

void
snapstack_msgs2__msg__ControlLog__fini(snapstack_msgs2__msg__ControlLog * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // p
  geometry_msgs__msg__Vector3__fini(&msg->p);
  // p_ref
  geometry_msgs__msg__Vector3__fini(&msg->p_ref);
  // p_err
  geometry_msgs__msg__Vector3__fini(&msg->p_err);
  // p_err_int
  geometry_msgs__msg__Vector3__fini(&msg->p_err_int);
  // v
  geometry_msgs__msg__Vector3__fini(&msg->v);
  // v_ref
  geometry_msgs__msg__Vector3__fini(&msg->v_ref);
  // v_err
  geometry_msgs__msg__Vector3__fini(&msg->v_err);
  // a_ff
  geometry_msgs__msg__Vector3__fini(&msg->a_ff);
  // a_fb
  geometry_msgs__msg__Vector3__fini(&msg->a_fb);
  // j_ff
  geometry_msgs__msg__Vector3__fini(&msg->j_ff);
  // j_fb
  geometry_msgs__msg__Vector3__fini(&msg->j_fb);
  // q
  geometry_msgs__msg__Quaternion__fini(&msg->q);
  // q_ref
  geometry_msgs__msg__Quaternion__fini(&msg->q_ref);
  // rpy
  geometry_msgs__msg__Vector3__fini(&msg->rpy);
  // rpy_ref
  geometry_msgs__msg__Vector3__fini(&msg->rpy_ref);
  // w
  geometry_msgs__msg__Vector3__fini(&msg->w);
  // w_ref
  geometry_msgs__msg__Vector3__fini(&msg->w_ref);
  // f_w
  geometry_msgs__msg__Vector3__fini(&msg->f_w);
  // power
}

bool
snapstack_msgs2__msg__ControlLog__are_equal(const snapstack_msgs2__msg__ControlLog * lhs, const snapstack_msgs2__msg__ControlLog * rhs)
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
  // p_ref
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->p_ref), &(rhs->p_ref)))
  {
    return false;
  }
  // p_err
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->p_err), &(rhs->p_err)))
  {
    return false;
  }
  // p_err_int
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->p_err_int), &(rhs->p_err_int)))
  {
    return false;
  }
  // v
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->v), &(rhs->v)))
  {
    return false;
  }
  // v_ref
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->v_ref), &(rhs->v_ref)))
  {
    return false;
  }
  // v_err
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->v_err), &(rhs->v_err)))
  {
    return false;
  }
  // a_ff
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->a_ff), &(rhs->a_ff)))
  {
    return false;
  }
  // a_fb
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->a_fb), &(rhs->a_fb)))
  {
    return false;
  }
  // j_ff
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->j_ff), &(rhs->j_ff)))
  {
    return false;
  }
  // j_fb
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->j_fb), &(rhs->j_fb)))
  {
    return false;
  }
  // q
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->q), &(rhs->q)))
  {
    return false;
  }
  // q_ref
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->q_ref), &(rhs->q_ref)))
  {
    return false;
  }
  // rpy
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->rpy), &(rhs->rpy)))
  {
    return false;
  }
  // rpy_ref
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->rpy_ref), &(rhs->rpy_ref)))
  {
    return false;
  }
  // w
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->w), &(rhs->w)))
  {
    return false;
  }
  // w_ref
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->w_ref), &(rhs->w_ref)))
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
snapstack_msgs2__msg__ControlLog__copy(
  const snapstack_msgs2__msg__ControlLog * input,
  snapstack_msgs2__msg__ControlLog * output)
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
  // p_ref
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->p_ref), &(output->p_ref)))
  {
    return false;
  }
  // p_err
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->p_err), &(output->p_err)))
  {
    return false;
  }
  // p_err_int
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->p_err_int), &(output->p_err_int)))
  {
    return false;
  }
  // v
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->v), &(output->v)))
  {
    return false;
  }
  // v_ref
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->v_ref), &(output->v_ref)))
  {
    return false;
  }
  // v_err
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->v_err), &(output->v_err)))
  {
    return false;
  }
  // a_ff
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->a_ff), &(output->a_ff)))
  {
    return false;
  }
  // a_fb
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->a_fb), &(output->a_fb)))
  {
    return false;
  }
  // j_ff
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->j_ff), &(output->j_ff)))
  {
    return false;
  }
  // j_fb
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->j_fb), &(output->j_fb)))
  {
    return false;
  }
  // q
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->q), &(output->q)))
  {
    return false;
  }
  // q_ref
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->q_ref), &(output->q_ref)))
  {
    return false;
  }
  // rpy
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->rpy), &(output->rpy)))
  {
    return false;
  }
  // rpy_ref
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->rpy_ref), &(output->rpy_ref)))
  {
    return false;
  }
  // w
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->w), &(output->w)))
  {
    return false;
  }
  // w_ref
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->w_ref), &(output->w_ref)))
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

snapstack_msgs2__msg__ControlLog *
snapstack_msgs2__msg__ControlLog__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__ControlLog * msg = (snapstack_msgs2__msg__ControlLog *)allocator.allocate(sizeof(snapstack_msgs2__msg__ControlLog), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(snapstack_msgs2__msg__ControlLog));
  bool success = snapstack_msgs2__msg__ControlLog__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
snapstack_msgs2__msg__ControlLog__destroy(snapstack_msgs2__msg__ControlLog * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    snapstack_msgs2__msg__ControlLog__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
snapstack_msgs2__msg__ControlLog__Sequence__init(snapstack_msgs2__msg__ControlLog__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__ControlLog * data = NULL;

  if (size) {
    data = (snapstack_msgs2__msg__ControlLog *)allocator.zero_allocate(size, sizeof(snapstack_msgs2__msg__ControlLog), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = snapstack_msgs2__msg__ControlLog__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        snapstack_msgs2__msg__ControlLog__fini(&data[i - 1]);
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
snapstack_msgs2__msg__ControlLog__Sequence__fini(snapstack_msgs2__msg__ControlLog__Sequence * array)
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
      snapstack_msgs2__msg__ControlLog__fini(&array->data[i]);
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

snapstack_msgs2__msg__ControlLog__Sequence *
snapstack_msgs2__msg__ControlLog__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__ControlLog__Sequence * array = (snapstack_msgs2__msg__ControlLog__Sequence *)allocator.allocate(sizeof(snapstack_msgs2__msg__ControlLog__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = snapstack_msgs2__msg__ControlLog__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
snapstack_msgs2__msg__ControlLog__Sequence__destroy(snapstack_msgs2__msg__ControlLog__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    snapstack_msgs2__msg__ControlLog__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
snapstack_msgs2__msg__ControlLog__Sequence__are_equal(const snapstack_msgs2__msg__ControlLog__Sequence * lhs, const snapstack_msgs2__msg__ControlLog__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!snapstack_msgs2__msg__ControlLog__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
snapstack_msgs2__msg__ControlLog__Sequence__copy(
  const snapstack_msgs2__msg__ControlLog__Sequence * input,
  snapstack_msgs2__msg__ControlLog__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(snapstack_msgs2__msg__ControlLog);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    snapstack_msgs2__msg__ControlLog * data =
      (snapstack_msgs2__msg__ControlLog *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!snapstack_msgs2__msg__ControlLog__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          snapstack_msgs2__msg__ControlLog__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!snapstack_msgs2__msg__ControlLog__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
