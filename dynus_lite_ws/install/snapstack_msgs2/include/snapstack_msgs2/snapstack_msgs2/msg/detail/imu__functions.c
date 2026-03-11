// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from snapstack_msgs2:msg/IMU.idl
// generated code does not contain a copyright notice
#include "snapstack_msgs2/msg/detail/imu__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `imu_stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `gyro`
// Member `accel`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
snapstack_msgs2__msg__IMU__init(snapstack_msgs2__msg__IMU * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    snapstack_msgs2__msg__IMU__fini(msg);
    return false;
  }
  // imu_stamp
  if (!builtin_interfaces__msg__Time__init(&msg->imu_stamp)) {
    snapstack_msgs2__msg__IMU__fini(msg);
    return false;
  }
  // gyro
  if (!geometry_msgs__msg__Vector3__init(&msg->gyro)) {
    snapstack_msgs2__msg__IMU__fini(msg);
    return false;
  }
  // accel
  if (!geometry_msgs__msg__Vector3__init(&msg->accel)) {
    snapstack_msgs2__msg__IMU__fini(msg);
    return false;
  }
  // loop_time
  return true;
}

void
snapstack_msgs2__msg__IMU__fini(snapstack_msgs2__msg__IMU * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // imu_stamp
  builtin_interfaces__msg__Time__fini(&msg->imu_stamp);
  // gyro
  geometry_msgs__msg__Vector3__fini(&msg->gyro);
  // accel
  geometry_msgs__msg__Vector3__fini(&msg->accel);
  // loop_time
}

bool
snapstack_msgs2__msg__IMU__are_equal(const snapstack_msgs2__msg__IMU * lhs, const snapstack_msgs2__msg__IMU * rhs)
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
  // imu_stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->imu_stamp), &(rhs->imu_stamp)))
  {
    return false;
  }
  // gyro
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->gyro), &(rhs->gyro)))
  {
    return false;
  }
  // accel
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->accel), &(rhs->accel)))
  {
    return false;
  }
  // loop_time
  if (lhs->loop_time != rhs->loop_time) {
    return false;
  }
  return true;
}

bool
snapstack_msgs2__msg__IMU__copy(
  const snapstack_msgs2__msg__IMU * input,
  snapstack_msgs2__msg__IMU * output)
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
  // imu_stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->imu_stamp), &(output->imu_stamp)))
  {
    return false;
  }
  // gyro
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->gyro), &(output->gyro)))
  {
    return false;
  }
  // accel
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->accel), &(output->accel)))
  {
    return false;
  }
  // loop_time
  output->loop_time = input->loop_time;
  return true;
}

snapstack_msgs2__msg__IMU *
snapstack_msgs2__msg__IMU__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__IMU * msg = (snapstack_msgs2__msg__IMU *)allocator.allocate(sizeof(snapstack_msgs2__msg__IMU), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(snapstack_msgs2__msg__IMU));
  bool success = snapstack_msgs2__msg__IMU__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
snapstack_msgs2__msg__IMU__destroy(snapstack_msgs2__msg__IMU * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    snapstack_msgs2__msg__IMU__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
snapstack_msgs2__msg__IMU__Sequence__init(snapstack_msgs2__msg__IMU__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__IMU * data = NULL;

  if (size) {
    data = (snapstack_msgs2__msg__IMU *)allocator.zero_allocate(size, sizeof(snapstack_msgs2__msg__IMU), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = snapstack_msgs2__msg__IMU__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        snapstack_msgs2__msg__IMU__fini(&data[i - 1]);
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
snapstack_msgs2__msg__IMU__Sequence__fini(snapstack_msgs2__msg__IMU__Sequence * array)
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
      snapstack_msgs2__msg__IMU__fini(&array->data[i]);
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

snapstack_msgs2__msg__IMU__Sequence *
snapstack_msgs2__msg__IMU__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__IMU__Sequence * array = (snapstack_msgs2__msg__IMU__Sequence *)allocator.allocate(sizeof(snapstack_msgs2__msg__IMU__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = snapstack_msgs2__msg__IMU__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
snapstack_msgs2__msg__IMU__Sequence__destroy(snapstack_msgs2__msg__IMU__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    snapstack_msgs2__msg__IMU__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
snapstack_msgs2__msg__IMU__Sequence__are_equal(const snapstack_msgs2__msg__IMU__Sequence * lhs, const snapstack_msgs2__msg__IMU__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!snapstack_msgs2__msg__IMU__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
snapstack_msgs2__msg__IMU__Sequence__copy(
  const snapstack_msgs2__msg__IMU__Sequence * input,
  snapstack_msgs2__msg__IMU__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(snapstack_msgs2__msg__IMU);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    snapstack_msgs2__msg__IMU * data =
      (snapstack_msgs2__msg__IMU *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!snapstack_msgs2__msg__IMU__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          snapstack_msgs2__msg__IMU__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!snapstack_msgs2__msg__IMU__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
