// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from packages_with_interfaces:msg/AmazingQuote.idl
// generated code does not contain a copyright notice

#ifndef PACKAGES_WITH_INTERFACES__MSG__DETAIL__AMAZING_QUOTE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PACKAGES_WITH_INTERFACES__MSG__DETAIL__AMAZING_QUOTE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "packages_with_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "packages_with_interfaces/msg/detail/amazing_quote__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace packages_with_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_packages_with_interfaces
cdr_serialize(
  const packages_with_interfaces::msg::AmazingQuote & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_packages_with_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  packages_with_interfaces::msg::AmazingQuote & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_packages_with_interfaces
get_serialized_size(
  const packages_with_interfaces::msg::AmazingQuote & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_packages_with_interfaces
max_serialized_size_AmazingQuote(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace packages_with_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_packages_with_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, packages_with_interfaces, msg, AmazingQuote)();

#ifdef __cplusplus
}
#endif

#endif  // PACKAGES_WITH_INTERFACES__MSG__DETAIL__AMAZING_QUOTE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
