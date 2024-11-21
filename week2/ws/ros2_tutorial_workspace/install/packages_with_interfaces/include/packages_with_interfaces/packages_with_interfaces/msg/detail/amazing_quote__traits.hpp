// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from packages_with_interfaces:msg/AmazingQuote.idl
// generated code does not contain a copyright notice

#ifndef PACKAGES_WITH_INTERFACES__MSG__DETAIL__AMAZING_QUOTE__TRAITS_HPP_
#define PACKAGES_WITH_INTERFACES__MSG__DETAIL__AMAZING_QUOTE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "packages_with_interfaces/msg/detail/amazing_quote__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace packages_with_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const AmazingQuote & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: quote
  {
    out << "quote: ";
    rosidl_generator_traits::value_to_yaml(msg.quote, out);
    out << ", ";
  }

  // member: philosopher_name
  {
    out << "philosopher_name: ";
    rosidl_generator_traits::value_to_yaml(msg.philosopher_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AmazingQuote & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: quote
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quote: ";
    rosidl_generator_traits::value_to_yaml(msg.quote, out);
    out << "\n";
  }

  // member: philosopher_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "philosopher_name: ";
    rosidl_generator_traits::value_to_yaml(msg.philosopher_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AmazingQuote & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace packages_with_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use packages_with_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const packages_with_interfaces::msg::AmazingQuote & msg,
  std::ostream & out, size_t indentation = 0)
{
  packages_with_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use packages_with_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const packages_with_interfaces::msg::AmazingQuote & msg)
{
  return packages_with_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<packages_with_interfaces::msg::AmazingQuote>()
{
  return "packages_with_interfaces::msg::AmazingQuote";
}

template<>
inline const char * name<packages_with_interfaces::msg::AmazingQuote>()
{
  return "packages_with_interfaces/msg/AmazingQuote";
}

template<>
struct has_fixed_size<packages_with_interfaces::msg::AmazingQuote>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<packages_with_interfaces::msg::AmazingQuote>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<packages_with_interfaces::msg::AmazingQuote>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PACKAGES_WITH_INTERFACES__MSG__DETAIL__AMAZING_QUOTE__TRAITS_HPP_
