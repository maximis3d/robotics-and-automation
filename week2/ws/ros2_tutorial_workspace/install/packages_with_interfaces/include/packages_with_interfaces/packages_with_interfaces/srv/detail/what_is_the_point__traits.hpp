// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from packages_with_interfaces:srv/WhatIsThePoint.idl
// generated code does not contain a copyright notice

#ifndef PACKAGES_WITH_INTERFACES__SRV__DETAIL__WHAT_IS_THE_POINT__TRAITS_HPP_
#define PACKAGES_WITH_INTERFACES__SRV__DETAIL__WHAT_IS_THE_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "packages_with_interfaces/srv/detail/what_is_the_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'quote'
#include "packages_with_interfaces/msg/detail/amazing_quote__traits.hpp"

namespace packages_with_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const WhatIsThePoint_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: quote
  {
    out << "quote: ";
    to_flow_style_yaml(msg.quote, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WhatIsThePoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: quote
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quote:\n";
    to_block_style_yaml(msg.quote, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WhatIsThePoint_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace packages_with_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use packages_with_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const packages_with_interfaces::srv::WhatIsThePoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  packages_with_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use packages_with_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const packages_with_interfaces::srv::WhatIsThePoint_Request & msg)
{
  return packages_with_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<packages_with_interfaces::srv::WhatIsThePoint_Request>()
{
  return "packages_with_interfaces::srv::WhatIsThePoint_Request";
}

template<>
inline const char * name<packages_with_interfaces::srv::WhatIsThePoint_Request>()
{
  return "packages_with_interfaces/srv/WhatIsThePoint_Request";
}

template<>
struct has_fixed_size<packages_with_interfaces::srv::WhatIsThePoint_Request>
  : std::integral_constant<bool, has_fixed_size<packages_with_interfaces::msg::AmazingQuote>::value> {};

template<>
struct has_bounded_size<packages_with_interfaces::srv::WhatIsThePoint_Request>
  : std::integral_constant<bool, has_bounded_size<packages_with_interfaces::msg::AmazingQuote>::value> {};

template<>
struct is_message<packages_with_interfaces::srv::WhatIsThePoint_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace packages_with_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const WhatIsThePoint_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: point
  {
    out << "point: ";
    to_flow_style_yaml(msg.point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WhatIsThePoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point:\n";
    to_block_style_yaml(msg.point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WhatIsThePoint_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace packages_with_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use packages_with_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const packages_with_interfaces::srv::WhatIsThePoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  packages_with_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use packages_with_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const packages_with_interfaces::srv::WhatIsThePoint_Response & msg)
{
  return packages_with_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<packages_with_interfaces::srv::WhatIsThePoint_Response>()
{
  return "packages_with_interfaces::srv::WhatIsThePoint_Response";
}

template<>
inline const char * name<packages_with_interfaces::srv::WhatIsThePoint_Response>()
{
  return "packages_with_interfaces/srv/WhatIsThePoint_Response";
}

template<>
struct has_fixed_size<packages_with_interfaces::srv::WhatIsThePoint_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<packages_with_interfaces::srv::WhatIsThePoint_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<packages_with_interfaces::srv::WhatIsThePoint_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<packages_with_interfaces::srv::WhatIsThePoint>()
{
  return "packages_with_interfaces::srv::WhatIsThePoint";
}

template<>
inline const char * name<packages_with_interfaces::srv::WhatIsThePoint>()
{
  return "packages_with_interfaces/srv/WhatIsThePoint";
}

template<>
struct has_fixed_size<packages_with_interfaces::srv::WhatIsThePoint>
  : std::integral_constant<
    bool,
    has_fixed_size<packages_with_interfaces::srv::WhatIsThePoint_Request>::value &&
    has_fixed_size<packages_with_interfaces::srv::WhatIsThePoint_Response>::value
  >
{
};

template<>
struct has_bounded_size<packages_with_interfaces::srv::WhatIsThePoint>
  : std::integral_constant<
    bool,
    has_bounded_size<packages_with_interfaces::srv::WhatIsThePoint_Request>::value &&
    has_bounded_size<packages_with_interfaces::srv::WhatIsThePoint_Response>::value
  >
{
};

template<>
struct is_service<packages_with_interfaces::srv::WhatIsThePoint>
  : std::true_type
{
};

template<>
struct is_service_request<packages_with_interfaces::srv::WhatIsThePoint_Request>
  : std::true_type
{
};

template<>
struct is_service_response<packages_with_interfaces::srv::WhatIsThePoint_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PACKAGES_WITH_INTERFACES__SRV__DETAIL__WHAT_IS_THE_POINT__TRAITS_HPP_
