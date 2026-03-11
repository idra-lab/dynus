// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynus_interfaces:msg/CoeffPoly3.idl
// generated code does not contain a copyright notice
#include "dynus_interfaces/msg/detail/coeff_poly3__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
dynus_interfaces__msg__CoeffPoly3__init(dynus_interfaces__msg__CoeffPoly3 * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  // d
  return true;
}

void
dynus_interfaces__msg__CoeffPoly3__fini(dynus_interfaces__msg__CoeffPoly3 * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
  // d
}

bool
dynus_interfaces__msg__CoeffPoly3__are_equal(const dynus_interfaces__msg__CoeffPoly3 * lhs, const dynus_interfaces__msg__CoeffPoly3 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  // c
  if (lhs->c != rhs->c) {
    return false;
  }
  // d
  if (lhs->d != rhs->d) {
    return false;
  }
  return true;
}

bool
dynus_interfaces__msg__CoeffPoly3__copy(
  const dynus_interfaces__msg__CoeffPoly3 * input,
  dynus_interfaces__msg__CoeffPoly3 * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  // c
  output->c = input->c;
  // d
  output->d = input->d;
  return true;
}

dynus_interfaces__msg__CoeffPoly3 *
dynus_interfaces__msg__CoeffPoly3__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynus_interfaces__msg__CoeffPoly3 * msg = (dynus_interfaces__msg__CoeffPoly3 *)allocator.allocate(sizeof(dynus_interfaces__msg__CoeffPoly3), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynus_interfaces__msg__CoeffPoly3));
  bool success = dynus_interfaces__msg__CoeffPoly3__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynus_interfaces__msg__CoeffPoly3__destroy(dynus_interfaces__msg__CoeffPoly3 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynus_interfaces__msg__CoeffPoly3__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynus_interfaces__msg__CoeffPoly3__Sequence__init(dynus_interfaces__msg__CoeffPoly3__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynus_interfaces__msg__CoeffPoly3 * data = NULL;

  if (size) {
    data = (dynus_interfaces__msg__CoeffPoly3 *)allocator.zero_allocate(size, sizeof(dynus_interfaces__msg__CoeffPoly3), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynus_interfaces__msg__CoeffPoly3__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynus_interfaces__msg__CoeffPoly3__fini(&data[i - 1]);
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
dynus_interfaces__msg__CoeffPoly3__Sequence__fini(dynus_interfaces__msg__CoeffPoly3__Sequence * array)
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
      dynus_interfaces__msg__CoeffPoly3__fini(&array->data[i]);
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

dynus_interfaces__msg__CoeffPoly3__Sequence *
dynus_interfaces__msg__CoeffPoly3__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynus_interfaces__msg__CoeffPoly3__Sequence * array = (dynus_interfaces__msg__CoeffPoly3__Sequence *)allocator.allocate(sizeof(dynus_interfaces__msg__CoeffPoly3__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynus_interfaces__msg__CoeffPoly3__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynus_interfaces__msg__CoeffPoly3__Sequence__destroy(dynus_interfaces__msg__CoeffPoly3__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynus_interfaces__msg__CoeffPoly3__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynus_interfaces__msg__CoeffPoly3__Sequence__are_equal(const dynus_interfaces__msg__CoeffPoly3__Sequence * lhs, const dynus_interfaces__msg__CoeffPoly3__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynus_interfaces__msg__CoeffPoly3__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynus_interfaces__msg__CoeffPoly3__Sequence__copy(
  const dynus_interfaces__msg__CoeffPoly3__Sequence * input,
  dynus_interfaces__msg__CoeffPoly3__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynus_interfaces__msg__CoeffPoly3);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynus_interfaces__msg__CoeffPoly3 * data =
      (dynus_interfaces__msg__CoeffPoly3 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynus_interfaces__msg__CoeffPoly3__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynus_interfaces__msg__CoeffPoly3__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynus_interfaces__msg__CoeffPoly3__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
