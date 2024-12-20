// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from packages_with_interfaces:msg/AmazingQuote.idl
// generated code does not contain a copyright notice
#include "packages_with_interfaces/msg/detail/amazing_quote__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `quote`
// Member `philosopher_name`
#include "rosidl_runtime_c/string_functions.h"

bool
packages_with_interfaces__msg__AmazingQuote__init(packages_with_interfaces__msg__AmazingQuote * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // quote
  if (!rosidl_runtime_c__String__init(&msg->quote)) {
    packages_with_interfaces__msg__AmazingQuote__fini(msg);
    return false;
  }
  // philosopher_name
  if (!rosidl_runtime_c__String__init(&msg->philosopher_name)) {
    packages_with_interfaces__msg__AmazingQuote__fini(msg);
    return false;
  }
  return true;
}

void
packages_with_interfaces__msg__AmazingQuote__fini(packages_with_interfaces__msg__AmazingQuote * msg)
{
  if (!msg) {
    return;
  }
  // id
  // quote
  rosidl_runtime_c__String__fini(&msg->quote);
  // philosopher_name
  rosidl_runtime_c__String__fini(&msg->philosopher_name);
}

bool
packages_with_interfaces__msg__AmazingQuote__are_equal(const packages_with_interfaces__msg__AmazingQuote * lhs, const packages_with_interfaces__msg__AmazingQuote * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // quote
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->quote), &(rhs->quote)))
  {
    return false;
  }
  // philosopher_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->philosopher_name), &(rhs->philosopher_name)))
  {
    return false;
  }
  return true;
}

bool
packages_with_interfaces__msg__AmazingQuote__copy(
  const packages_with_interfaces__msg__AmazingQuote * input,
  packages_with_interfaces__msg__AmazingQuote * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // quote
  if (!rosidl_runtime_c__String__copy(
      &(input->quote), &(output->quote)))
  {
    return false;
  }
  // philosopher_name
  if (!rosidl_runtime_c__String__copy(
      &(input->philosopher_name), &(output->philosopher_name)))
  {
    return false;
  }
  return true;
}

packages_with_interfaces__msg__AmazingQuote *
packages_with_interfaces__msg__AmazingQuote__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  packages_with_interfaces__msg__AmazingQuote * msg = (packages_with_interfaces__msg__AmazingQuote *)allocator.allocate(sizeof(packages_with_interfaces__msg__AmazingQuote), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(packages_with_interfaces__msg__AmazingQuote));
  bool success = packages_with_interfaces__msg__AmazingQuote__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
packages_with_interfaces__msg__AmazingQuote__destroy(packages_with_interfaces__msg__AmazingQuote * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    packages_with_interfaces__msg__AmazingQuote__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
packages_with_interfaces__msg__AmazingQuote__Sequence__init(packages_with_interfaces__msg__AmazingQuote__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  packages_with_interfaces__msg__AmazingQuote * data = NULL;

  if (size) {
    data = (packages_with_interfaces__msg__AmazingQuote *)allocator.zero_allocate(size, sizeof(packages_with_interfaces__msg__AmazingQuote), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = packages_with_interfaces__msg__AmazingQuote__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        packages_with_interfaces__msg__AmazingQuote__fini(&data[i - 1]);
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
packages_with_interfaces__msg__AmazingQuote__Sequence__fini(packages_with_interfaces__msg__AmazingQuote__Sequence * array)
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
      packages_with_interfaces__msg__AmazingQuote__fini(&array->data[i]);
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

packages_with_interfaces__msg__AmazingQuote__Sequence *
packages_with_interfaces__msg__AmazingQuote__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  packages_with_interfaces__msg__AmazingQuote__Sequence * array = (packages_with_interfaces__msg__AmazingQuote__Sequence *)allocator.allocate(sizeof(packages_with_interfaces__msg__AmazingQuote__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = packages_with_interfaces__msg__AmazingQuote__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
packages_with_interfaces__msg__AmazingQuote__Sequence__destroy(packages_with_interfaces__msg__AmazingQuote__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    packages_with_interfaces__msg__AmazingQuote__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
packages_with_interfaces__msg__AmazingQuote__Sequence__are_equal(const packages_with_interfaces__msg__AmazingQuote__Sequence * lhs, const packages_with_interfaces__msg__AmazingQuote__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!packages_with_interfaces__msg__AmazingQuote__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
packages_with_interfaces__msg__AmazingQuote__Sequence__copy(
  const packages_with_interfaces__msg__AmazingQuote__Sequence * input,
  packages_with_interfaces__msg__AmazingQuote__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(packages_with_interfaces__msg__AmazingQuote);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    packages_with_interfaces__msg__AmazingQuote * data =
      (packages_with_interfaces__msg__AmazingQuote *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!packages_with_interfaces__msg__AmazingQuote__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          packages_with_interfaces__msg__AmazingQuote__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!packages_with_interfaces__msg__AmazingQuote__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
