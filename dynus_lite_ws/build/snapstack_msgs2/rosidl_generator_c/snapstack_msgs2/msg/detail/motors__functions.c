// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from snapstack_msgs2:msg/Motors.idl
// generated code does not contain a copyright notice
#include "snapstack_msgs2/msg/detail/motors__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
snapstack_msgs2__msg__Motors__init(snapstack_msgs2__msg__Motors * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    snapstack_msgs2__msg__Motors__fini(msg);
    return false;
  }
  // m1
  // m2
  // m3
  // m4
  // m5
  // m6
  // m7
  // m8
  return true;
}

void
snapstack_msgs2__msg__Motors__fini(snapstack_msgs2__msg__Motors * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // m1
  // m2
  // m3
  // m4
  // m5
  // m6
  // m7
  // m8
}

bool
snapstack_msgs2__msg__Motors__are_equal(const snapstack_msgs2__msg__Motors * lhs, const snapstack_msgs2__msg__Motors * rhs)
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
  // m1
  if (lhs->m1 != rhs->m1) {
    return false;
  }
  // m2
  if (lhs->m2 != rhs->m2) {
    return false;
  }
  // m3
  if (lhs->m3 != rhs->m3) {
    return false;
  }
  // m4
  if (lhs->m4 != rhs->m4) {
    return false;
  }
  // m5
  if (lhs->m5 != rhs->m5) {
    return false;
  }
  // m6
  if (lhs->m6 != rhs->m6) {
    return false;
  }
  // m7
  if (lhs->m7 != rhs->m7) {
    return false;
  }
  // m8
  if (lhs->m8 != rhs->m8) {
    return false;
  }
  return true;
}

bool
snapstack_msgs2__msg__Motors__copy(
  const snapstack_msgs2__msg__Motors * input,
  snapstack_msgs2__msg__Motors * output)
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
  // m1
  output->m1 = input->m1;
  // m2
  output->m2 = input->m2;
  // m3
  output->m3 = input->m3;
  // m4
  output->m4 = input->m4;
  // m5
  output->m5 = input->m5;
  // m6
  output->m6 = input->m6;
  // m7
  output->m7 = input->m7;
  // m8
  output->m8 = input->m8;
  return true;
}

snapstack_msgs2__msg__Motors *
snapstack_msgs2__msg__Motors__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__Motors * msg = (snapstack_msgs2__msg__Motors *)allocator.allocate(sizeof(snapstack_msgs2__msg__Motors), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(snapstack_msgs2__msg__Motors));
  bool success = snapstack_msgs2__msg__Motors__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
snapstack_msgs2__msg__Motors__destroy(snapstack_msgs2__msg__Motors * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    snapstack_msgs2__msg__Motors__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
snapstack_msgs2__msg__Motors__Sequence__init(snapstack_msgs2__msg__Motors__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__Motors * data = NULL;

  if (size) {
    data = (snapstack_msgs2__msg__Motors *)allocator.zero_allocate(size, sizeof(snapstack_msgs2__msg__Motors), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = snapstack_msgs2__msg__Motors__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        snapstack_msgs2__msg__Motors__fini(&data[i - 1]);
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
snapstack_msgs2__msg__Motors__Sequence__fini(snapstack_msgs2__msg__Motors__Sequence * array)
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
      snapstack_msgs2__msg__Motors__fini(&array->data[i]);
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

snapstack_msgs2__msg__Motors__Sequence *
snapstack_msgs2__msg__Motors__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snapstack_msgs2__msg__Motors__Sequence * array = (snapstack_msgs2__msg__Motors__Sequence *)allocator.allocate(sizeof(snapstack_msgs2__msg__Motors__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = snapstack_msgs2__msg__Motors__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
snapstack_msgs2__msg__Motors__Sequence__destroy(snapstack_msgs2__msg__Motors__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    snapstack_msgs2__msg__Motors__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
snapstack_msgs2__msg__Motors__Sequence__are_equal(const snapstack_msgs2__msg__Motors__Sequence * lhs, const snapstack_msgs2__msg__Motors__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!snapstack_msgs2__msg__Motors__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
snapstack_msgs2__msg__Motors__Sequence__copy(
  const snapstack_msgs2__msg__Motors__Sequence * input,
  snapstack_msgs2__msg__Motors__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(snapstack_msgs2__msg__Motors);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    snapstack_msgs2__msg__Motors * data =
      (snapstack_msgs2__msg__Motors *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!snapstack_msgs2__msg__Motors__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          snapstack_msgs2__msg__Motors__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!snapstack_msgs2__msg__Motors__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
