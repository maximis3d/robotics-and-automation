// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pendulum_msgs:msg/RttestResults.idl
// generated code does not contain a copyright notice

#ifndef PENDULUM_MSGS__MSG__DETAIL__RTTEST_RESULTS__FUNCTIONS_H_
#define PENDULUM_MSGS__MSG__DETAIL__RTTEST_RESULTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pendulum_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "pendulum_msgs/msg/detail/rttest_results__struct.h"

/// Initialize msg/RttestResults message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pendulum_msgs__msg__RttestResults
 * )) before or use
 * pendulum_msgs__msg__RttestResults__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pendulum_msgs
bool
pendulum_msgs__msg__RttestResults__init(pendulum_msgs__msg__RttestResults * msg);

/// Finalize msg/RttestResults message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pendulum_msgs
void
pendulum_msgs__msg__RttestResults__fini(pendulum_msgs__msg__RttestResults * msg);

/// Create msg/RttestResults message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pendulum_msgs__msg__RttestResults__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pendulum_msgs
pendulum_msgs__msg__RttestResults *
pendulum_msgs__msg__RttestResults__create();

/// Destroy msg/RttestResults message.
/**
 * It calls
 * pendulum_msgs__msg__RttestResults__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pendulum_msgs
void
pendulum_msgs__msg__RttestResults__destroy(pendulum_msgs__msg__RttestResults * msg);

/// Check for msg/RttestResults message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pendulum_msgs
bool
pendulum_msgs__msg__RttestResults__are_equal(const pendulum_msgs__msg__RttestResults * lhs, const pendulum_msgs__msg__RttestResults * rhs);

/// Copy a msg/RttestResults message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pendulum_msgs
bool
pendulum_msgs__msg__RttestResults__copy(
  const pendulum_msgs__msg__RttestResults * input,
  pendulum_msgs__msg__RttestResults * output);

/// Initialize array of msg/RttestResults messages.
/**
 * It allocates the memory for the number of elements and calls
 * pendulum_msgs__msg__RttestResults__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pendulum_msgs
bool
pendulum_msgs__msg__RttestResults__Sequence__init(pendulum_msgs__msg__RttestResults__Sequence * array, size_t size);

/// Finalize array of msg/RttestResults messages.
/**
 * It calls
 * pendulum_msgs__msg__RttestResults__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pendulum_msgs
void
pendulum_msgs__msg__RttestResults__Sequence__fini(pendulum_msgs__msg__RttestResults__Sequence * array);

/// Create array of msg/RttestResults messages.
/**
 * It allocates the memory for the array and calls
 * pendulum_msgs__msg__RttestResults__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pendulum_msgs
pendulum_msgs__msg__RttestResults__Sequence *
pendulum_msgs__msg__RttestResults__Sequence__create(size_t size);

/// Destroy array of msg/RttestResults messages.
/**
 * It calls
 * pendulum_msgs__msg__RttestResults__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pendulum_msgs
void
pendulum_msgs__msg__RttestResults__Sequence__destroy(pendulum_msgs__msg__RttestResults__Sequence * array);

/// Check for msg/RttestResults message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pendulum_msgs
bool
pendulum_msgs__msg__RttestResults__Sequence__are_equal(const pendulum_msgs__msg__RttestResults__Sequence * lhs, const pendulum_msgs__msg__RttestResults__Sequence * rhs);

/// Copy an array of msg/RttestResults messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pendulum_msgs
bool
pendulum_msgs__msg__RttestResults__Sequence__copy(
  const pendulum_msgs__msg__RttestResults__Sequence * input,
  pendulum_msgs__msg__RttestResults__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PENDULUM_MSGS__MSG__DETAIL__RTTEST_RESULTS__FUNCTIONS_H_
