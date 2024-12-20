// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from packages_with_interfaces:msg/AmazingQuote.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "packages_with_interfaces/msg/detail/amazing_quote__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace packages_with_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AmazingQuote_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) packages_with_interfaces::msg::AmazingQuote(_init);
}

void AmazingQuote_fini_function(void * message_memory)
{
  auto typed_message = static_cast<packages_with_interfaces::msg::AmazingQuote *>(message_memory);
  typed_message->~AmazingQuote();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AmazingQuote_message_member_array[3] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(packages_with_interfaces::msg::AmazingQuote, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "quote",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(packages_with_interfaces::msg::AmazingQuote, quote),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "philosopher_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(packages_with_interfaces::msg::AmazingQuote, philosopher_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AmazingQuote_message_members = {
  "packages_with_interfaces::msg",  // message namespace
  "AmazingQuote",  // message name
  3,  // number of fields
  sizeof(packages_with_interfaces::msg::AmazingQuote),
  AmazingQuote_message_member_array,  // message members
  AmazingQuote_init_function,  // function to initialize message memory (memory has to be allocated)
  AmazingQuote_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AmazingQuote_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AmazingQuote_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace packages_with_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<packages_with_interfaces::msg::AmazingQuote>()
{
  return &::packages_with_interfaces::msg::rosidl_typesupport_introspection_cpp::AmazingQuote_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, packages_with_interfaces, msg, AmazingQuote)() {
  return &::packages_with_interfaces::msg::rosidl_typesupport_introspection_cpp::AmazingQuote_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
