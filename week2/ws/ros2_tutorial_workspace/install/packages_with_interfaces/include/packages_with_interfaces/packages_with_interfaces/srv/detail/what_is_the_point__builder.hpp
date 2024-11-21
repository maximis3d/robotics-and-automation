// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from packages_with_interfaces:srv/WhatIsThePoint.idl
// generated code does not contain a copyright notice

#ifndef PACKAGES_WITH_INTERFACES__SRV__DETAIL__WHAT_IS_THE_POINT__BUILDER_HPP_
#define PACKAGES_WITH_INTERFACES__SRV__DETAIL__WHAT_IS_THE_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "packages_with_interfaces/srv/detail/what_is_the_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace packages_with_interfaces
{

namespace srv
{

namespace builder
{

class Init_WhatIsThePoint_Request_quote
{
public:
  Init_WhatIsThePoint_Request_quote()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::packages_with_interfaces::srv::WhatIsThePoint_Request quote(::packages_with_interfaces::srv::WhatIsThePoint_Request::_quote_type arg)
  {
    msg_.quote = std::move(arg);
    return std::move(msg_);
  }

private:
  ::packages_with_interfaces::srv::WhatIsThePoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::packages_with_interfaces::srv::WhatIsThePoint_Request>()
{
  return packages_with_interfaces::srv::builder::Init_WhatIsThePoint_Request_quote();
}

}  // namespace packages_with_interfaces


namespace packages_with_interfaces
{

namespace srv
{

namespace builder
{

class Init_WhatIsThePoint_Response_point
{
public:
  Init_WhatIsThePoint_Response_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::packages_with_interfaces::srv::WhatIsThePoint_Response point(::packages_with_interfaces::srv::WhatIsThePoint_Response::_point_type arg)
  {
    msg_.point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::packages_with_interfaces::srv::WhatIsThePoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::packages_with_interfaces::srv::WhatIsThePoint_Response>()
{
  return packages_with_interfaces::srv::builder::Init_WhatIsThePoint_Response_point();
}

}  // namespace packages_with_interfaces

#endif  // PACKAGES_WITH_INTERFACES__SRV__DETAIL__WHAT_IS_THE_POINT__BUILDER_HPP_
