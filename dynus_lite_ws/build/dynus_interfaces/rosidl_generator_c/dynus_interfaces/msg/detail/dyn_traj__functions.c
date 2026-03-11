// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynus_interfaces:msg/DynTraj.idl
// generated code does not contain a copyright notice
#include "dynus_interfaces/msg/detail/dyn_traj__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `bbox`
// Member `ekf_cov_p`
// Member `ekf_cov_q`
// Member `ekf_cov_r`
// Member `poly_cov`
// Member `poly_coeffs_x`
// Member `poly_coeffs_y`
// Member `poly_coeffs_z`
// Member `goal`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `pwp`
#include "dynus_interfaces/msg/detail/pwp_traj__functions.h"
// Member `quintic_pwp`
#include "dynus_interfaces/msg/detail/quintic_pwp_traj__functions.h"
// Member `function`
// Member `velocity`
// Member `mode`
#include "rosidl_runtime_c/string_functions.h"
// Member `pos`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
dynus_interfaces__msg__DynTraj__init(dynus_interfaces__msg__DynTraj * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dynus_interfaces__msg__DynTraj__fini(msg);
    return false;
  }
  // bbox
  if (!rosidl_runtime_c__float__Sequence__init(&msg->bbox, 0)) {
    dynus_interfaces__msg__DynTraj__fini(msg);
    return false;
  }
  // id
  // pwp
  if (!dynus_interfaces__msg__PWPTraj__init(&msg->pwp)) {
    dynus_interfaces__msg__DynTraj__fini(msg);
    return false;
  }
  // quintic_pwp
  if (!dynus_interfaces__msg__QuinticPWPTraj__init(&msg->quintic_pwp)) {
    dynus_interfaces__msg__DynTraj__fini(msg);
    return false;
  }
  // ekf_cov_p
  if (!rosidl_runtime_c__float__Sequence__init(&msg->ekf_cov_p, 0)) {
    dynus_interfaces__msg__DynTraj__fini(msg);
    return false;
  }
  // ekf_cov_q
  if (!rosidl_runtime_c__float__Sequence__init(&msg->ekf_cov_q, 0)) {
    dynus_interfaces__msg__DynTraj__fini(msg);
    return false;
  }
  // ekf_cov_r
  if (!rosidl_runtime_c__float__Sequence__init(&msg->ekf_cov_r, 0)) {
    dynus_interfaces__msg__DynTraj__fini(msg);
    return false;
  }
  // poly_cov
  if (!rosidl_runtime_c__float__Sequence__init(&msg->poly_cov, 0)) {
    dynus_interfaces__msg__DynTraj__fini(msg);
    return false;
  }
  // poly_coeffs_x
  if (!rosidl_runtime_c__float__Sequence__init(&msg->poly_coeffs_x, 0)) {
    dynus_interfaces__msg__DynTraj__fini(msg);
    return false;
  }
  // poly_coeffs_y
  if (!rosidl_runtime_c__float__Sequence__init(&msg->poly_coeffs_y, 0)) {
    dynus_interfaces__msg__DynTraj__fini(msg);
    return false;
  }
  // poly_coeffs_z
  if (!rosidl_runtime_c__float__Sequence__init(&msg->poly_coeffs_z, 0)) {
    dynus_interfaces__msg__DynTraj__fini(msg);
    return false;
  }
  // poly_start_time
  // poly_end_time
  // function
  if (!rosidl_runtime_c__String__Sequence__init(&msg->function, 0)) {
    dynus_interfaces__msg__DynTraj__fini(msg);
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__String__Sequence__init(&msg->velocity, 0)) {
    dynus_interfaces__msg__DynTraj__fini(msg);
    return false;
  }
  // pos
  if (!geometry_msgs__msg__Vector3__init(&msg->pos)) {
    dynus_interfaces__msg__DynTraj__fini(msg);
    return false;
  }
  // is_agent
  // goal
  if (!rosidl_runtime_c__float__Sequence__init(&msg->goal, 0)) {
    dynus_interfaces__msg__DynTraj__fini(msg);
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__init(&msg->mode)) {
    dynus_interfaces__msg__DynTraj__fini(msg);
    return false;
  }
  return true;
}

void
dynus_interfaces__msg__DynTraj__fini(dynus_interfaces__msg__DynTraj * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // bbox
  rosidl_runtime_c__float__Sequence__fini(&msg->bbox);
  // id
  // pwp
  dynus_interfaces__msg__PWPTraj__fini(&msg->pwp);
  // quintic_pwp
  dynus_interfaces__msg__QuinticPWPTraj__fini(&msg->quintic_pwp);
  // ekf_cov_p
  rosidl_runtime_c__float__Sequence__fini(&msg->ekf_cov_p);
  // ekf_cov_q
  rosidl_runtime_c__float__Sequence__fini(&msg->ekf_cov_q);
  // ekf_cov_r
  rosidl_runtime_c__float__Sequence__fini(&msg->ekf_cov_r);
  // poly_cov
  rosidl_runtime_c__float__Sequence__fini(&msg->poly_cov);
  // poly_coeffs_x
  rosidl_runtime_c__float__Sequence__fini(&msg->poly_coeffs_x);
  // poly_coeffs_y
  rosidl_runtime_c__float__Sequence__fini(&msg->poly_coeffs_y);
  // poly_coeffs_z
  rosidl_runtime_c__float__Sequence__fini(&msg->poly_coeffs_z);
  // poly_start_time
  // poly_end_time
  // function
  rosidl_runtime_c__String__Sequence__fini(&msg->function);
  // velocity
  rosidl_runtime_c__String__Sequence__fini(&msg->velocity);
  // pos
  geometry_msgs__msg__Vector3__fini(&msg->pos);
  // is_agent
  // goal
  rosidl_runtime_c__float__Sequence__fini(&msg->goal);
  // mode
  rosidl_runtime_c__String__fini(&msg->mode);
}

bool
dynus_interfaces__msg__DynTraj__are_equal(const dynus_interfaces__msg__DynTraj * lhs, const dynus_interfaces__msg__DynTraj * rhs)
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
  // bbox
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->bbox), &(rhs->bbox)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // pwp
  if (!dynus_interfaces__msg__PWPTraj__are_equal(
      &(lhs->pwp), &(rhs->pwp)))
  {
    return false;
  }
  // quintic_pwp
  if (!dynus_interfaces__msg__QuinticPWPTraj__are_equal(
      &(lhs->quintic_pwp), &(rhs->quintic_pwp)))
  {
    return false;
  }
  // ekf_cov_p
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->ekf_cov_p), &(rhs->ekf_cov_p)))
  {
    return false;
  }
  // ekf_cov_q
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->ekf_cov_q), &(rhs->ekf_cov_q)))
  {
    return false;
  }
  // ekf_cov_r
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->ekf_cov_r), &(rhs->ekf_cov_r)))
  {
    return false;
  }
  // poly_cov
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->poly_cov), &(rhs->poly_cov)))
  {
    return false;
  }
  // poly_coeffs_x
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->poly_coeffs_x), &(rhs->poly_coeffs_x)))
  {
    return false;
  }
  // poly_coeffs_y
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->poly_coeffs_y), &(rhs->poly_coeffs_y)))
  {
    return false;
  }
  // poly_coeffs_z
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->poly_coeffs_z), &(rhs->poly_coeffs_z)))
  {
    return false;
  }
  // poly_start_time
  if (lhs->poly_start_time != rhs->poly_start_time) {
    return false;
  }
  // poly_end_time
  if (lhs->poly_end_time != rhs->poly_end_time) {
    return false;
  }
  // function
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->function), &(rhs->function)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // pos
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->pos), &(rhs->pos)))
  {
    return false;
  }
  // is_agent
  if (lhs->is_agent != rhs->is_agent) {
    return false;
  }
  // goal
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  return true;
}

bool
dynus_interfaces__msg__DynTraj__copy(
  const dynus_interfaces__msg__DynTraj * input,
  dynus_interfaces__msg__DynTraj * output)
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
  // bbox
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->bbox), &(output->bbox)))
  {
    return false;
  }
  // id
  output->id = input->id;
  // pwp
  if (!dynus_interfaces__msg__PWPTraj__copy(
      &(input->pwp), &(output->pwp)))
  {
    return false;
  }
  // quintic_pwp
  if (!dynus_interfaces__msg__QuinticPWPTraj__copy(
      &(input->quintic_pwp), &(output->quintic_pwp)))
  {
    return false;
  }
  // ekf_cov_p
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->ekf_cov_p), &(output->ekf_cov_p)))
  {
    return false;
  }
  // ekf_cov_q
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->ekf_cov_q), &(output->ekf_cov_q)))
  {
    return false;
  }
  // ekf_cov_r
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->ekf_cov_r), &(output->ekf_cov_r)))
  {
    return false;
  }
  // poly_cov
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->poly_cov), &(output->poly_cov)))
  {
    return false;
  }
  // poly_coeffs_x
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->poly_coeffs_x), &(output->poly_coeffs_x)))
  {
    return false;
  }
  // poly_coeffs_y
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->poly_coeffs_y), &(output->poly_coeffs_y)))
  {
    return false;
  }
  // poly_coeffs_z
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->poly_coeffs_z), &(output->poly_coeffs_z)))
  {
    return false;
  }
  // poly_start_time
  output->poly_start_time = input->poly_start_time;
  // poly_end_time
  output->poly_end_time = input->poly_end_time;
  // function
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->function), &(output->function)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // pos
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->pos), &(output->pos)))
  {
    return false;
  }
  // is_agent
  output->is_agent = input->is_agent;
  // goal
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  return true;
}

dynus_interfaces__msg__DynTraj *
dynus_interfaces__msg__DynTraj__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynus_interfaces__msg__DynTraj * msg = (dynus_interfaces__msg__DynTraj *)allocator.allocate(sizeof(dynus_interfaces__msg__DynTraj), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynus_interfaces__msg__DynTraj));
  bool success = dynus_interfaces__msg__DynTraj__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynus_interfaces__msg__DynTraj__destroy(dynus_interfaces__msg__DynTraj * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynus_interfaces__msg__DynTraj__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynus_interfaces__msg__DynTraj__Sequence__init(dynus_interfaces__msg__DynTraj__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynus_interfaces__msg__DynTraj * data = NULL;

  if (size) {
    data = (dynus_interfaces__msg__DynTraj *)allocator.zero_allocate(size, sizeof(dynus_interfaces__msg__DynTraj), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynus_interfaces__msg__DynTraj__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynus_interfaces__msg__DynTraj__fini(&data[i - 1]);
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
dynus_interfaces__msg__DynTraj__Sequence__fini(dynus_interfaces__msg__DynTraj__Sequence * array)
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
      dynus_interfaces__msg__DynTraj__fini(&array->data[i]);
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

dynus_interfaces__msg__DynTraj__Sequence *
dynus_interfaces__msg__DynTraj__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynus_interfaces__msg__DynTraj__Sequence * array = (dynus_interfaces__msg__DynTraj__Sequence *)allocator.allocate(sizeof(dynus_interfaces__msg__DynTraj__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynus_interfaces__msg__DynTraj__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynus_interfaces__msg__DynTraj__Sequence__destroy(dynus_interfaces__msg__DynTraj__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynus_interfaces__msg__DynTraj__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynus_interfaces__msg__DynTraj__Sequence__are_equal(const dynus_interfaces__msg__DynTraj__Sequence * lhs, const dynus_interfaces__msg__DynTraj__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynus_interfaces__msg__DynTraj__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynus_interfaces__msg__DynTraj__Sequence__copy(
  const dynus_interfaces__msg__DynTraj__Sequence * input,
  dynus_interfaces__msg__DynTraj__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynus_interfaces__msg__DynTraj);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynus_interfaces__msg__DynTraj * data =
      (dynus_interfaces__msg__DynTraj *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynus_interfaces__msg__DynTraj__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynus_interfaces__msg__DynTraj__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynus_interfaces__msg__DynTraj__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
