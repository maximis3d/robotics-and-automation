// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from packages_with_interfaces:srv/WhatIsThePoint.idl
// generated code does not contain a copyright notice
#include "packages_with_interfaces/srv/detail/what_is_the_point__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "packages_with_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "packages_with_interfaces/srv/detail/what_is_the_point__struct.h"
#include "packages_with_interfaces/srv/detail/what_is_the_point__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "packages_with_interfaces/msg/detail/amazing_quote__functions.h"  // quote

// forward declare type support functions
size_t get_serialized_size_packages_with_interfaces__msg__AmazingQuote(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_packages_with_interfaces__msg__AmazingQuote(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, packages_with_interfaces, msg, AmazingQuote)();


using _WhatIsThePoint_Request__ros_msg_type = packages_with_interfaces__srv__WhatIsThePoint_Request;

static bool _WhatIsThePoint_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WhatIsThePoint_Request__ros_msg_type * ros_message = static_cast<const _WhatIsThePoint_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: quote
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, packages_with_interfaces, msg, AmazingQuote
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->quote, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _WhatIsThePoint_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WhatIsThePoint_Request__ros_msg_type * ros_message = static_cast<_WhatIsThePoint_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: quote
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, packages_with_interfaces, msg, AmazingQuote
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->quote))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_packages_with_interfaces
size_t get_serialized_size_packages_with_interfaces__srv__WhatIsThePoint_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WhatIsThePoint_Request__ros_msg_type * ros_message = static_cast<const _WhatIsThePoint_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name quote

  current_alignment += get_serialized_size_packages_with_interfaces__msg__AmazingQuote(
    &(ros_message->quote), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _WhatIsThePoint_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_packages_with_interfaces__srv__WhatIsThePoint_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_packages_with_interfaces
size_t max_serialized_size_packages_with_interfaces__srv__WhatIsThePoint_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: quote
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_packages_with_interfaces__msg__AmazingQuote(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = packages_with_interfaces__srv__WhatIsThePoint_Request;
    is_plain =
      (
      offsetof(DataType, quote) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _WhatIsThePoint_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_packages_with_interfaces__srv__WhatIsThePoint_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WhatIsThePoint_Request = {
  "packages_with_interfaces::srv",
  "WhatIsThePoint_Request",
  _WhatIsThePoint_Request__cdr_serialize,
  _WhatIsThePoint_Request__cdr_deserialize,
  _WhatIsThePoint_Request__get_serialized_size,
  _WhatIsThePoint_Request__max_serialized_size
};

static rosidl_message_type_support_t _WhatIsThePoint_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WhatIsThePoint_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, packages_with_interfaces, srv, WhatIsThePoint_Request)() {
  return &_WhatIsThePoint_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "packages_with_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "packages_with_interfaces/srv/detail/what_is_the_point__struct.h"
// already included above
// #include "packages_with_interfaces/srv/detail/what_is_the_point__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/point__functions.h"  // point

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_packages_with_interfaces
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_packages_with_interfaces
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_packages_with_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();


using _WhatIsThePoint_Response__ros_msg_type = packages_with_interfaces__srv__WhatIsThePoint_Response;

static bool _WhatIsThePoint_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WhatIsThePoint_Response__ros_msg_type * ros_message = static_cast<const _WhatIsThePoint_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->point, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _WhatIsThePoint_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WhatIsThePoint_Response__ros_msg_type * ros_message = static_cast<_WhatIsThePoint_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->point))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_packages_with_interfaces
size_t get_serialized_size_packages_with_interfaces__srv__WhatIsThePoint_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WhatIsThePoint_Response__ros_msg_type * ros_message = static_cast<const _WhatIsThePoint_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name point

  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->point), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _WhatIsThePoint_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_packages_with_interfaces__srv__WhatIsThePoint_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_packages_with_interfaces
size_t max_serialized_size_packages_with_interfaces__srv__WhatIsThePoint_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: point
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = packages_with_interfaces__srv__WhatIsThePoint_Response;
    is_plain =
      (
      offsetof(DataType, point) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _WhatIsThePoint_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_packages_with_interfaces__srv__WhatIsThePoint_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WhatIsThePoint_Response = {
  "packages_with_interfaces::srv",
  "WhatIsThePoint_Response",
  _WhatIsThePoint_Response__cdr_serialize,
  _WhatIsThePoint_Response__cdr_deserialize,
  _WhatIsThePoint_Response__get_serialized_size,
  _WhatIsThePoint_Response__max_serialized_size
};

static rosidl_message_type_support_t _WhatIsThePoint_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WhatIsThePoint_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, packages_with_interfaces, srv, WhatIsThePoint_Response)() {
  return &_WhatIsThePoint_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "packages_with_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "packages_with_interfaces/srv/what_is_the_point.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t WhatIsThePoint__callbacks = {
  "packages_with_interfaces::srv",
  "WhatIsThePoint",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, packages_with_interfaces, srv, WhatIsThePoint_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, packages_with_interfaces, srv, WhatIsThePoint_Response)(),
};

static rosidl_service_type_support_t WhatIsThePoint__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &WhatIsThePoint__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, packages_with_interfaces, srv, WhatIsThePoint)() {
  return &WhatIsThePoint__handle;
}

#if defined(__cplusplus)
}
#endif
