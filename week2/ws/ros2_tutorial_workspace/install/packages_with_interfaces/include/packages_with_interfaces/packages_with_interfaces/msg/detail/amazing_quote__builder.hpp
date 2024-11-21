// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from packages_with_interfaces:msg/AmazingQuote.idl
// generated code does not contain a copyright notice

#ifndef PACKAGES_WITH_INTERFACES__MSG__DETAIL__AMAZING_QUOTE__BUILDER_HPP_
#define PACKAGES_WITH_INTERFACES__MSG__DETAIL__AMAZING_QUOTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "packages_with_interfaces/msg/detail/amazing_quote__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace packages_with_interfaces
{

namespace msg
{

namespace builder
{

class Init_AmazingQuote_philosopher_name
{
public:
  explicit Init_AmazingQuote_philosopher_name(::packages_with_interfaces::msg::AmazingQuote & msg)
  : msg_(msg)
  {}
  ::packages_with_interfaces::msg::AmazingQuote philosopher_name(::packages_with_interfaces::msg::AmazingQuote::_philosopher_name_type arg)
  {
    msg_.philosopher_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::packages_with_interfaces::msg::AmazingQuote msg_;
};

class Init_AmazingQuote_quote
{
public:
  explicit Init_AmazingQuote_quote(::packages_with_interfaces::msg::AmazingQuote & msg)
  : msg_(msg)
  {}
  Init_AmazingQuote_philosopher_name quote(::packages_with_interfaces::msg::AmazingQuote::_quote_type arg)
  {
    msg_.quote = std::move(arg);
    return Init_AmazingQuote_philosopher_name(msg_);
  }

private:
  ::packages_with_interfaces::msg::AmazingQuote msg_;
};

class Init_AmazingQuote_id
{
public:
  Init_AmazingQuote_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AmazingQuote_quote id(::packages_with_interfaces::msg::AmazingQuote::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_AmazingQuote_quote(msg_);
  }

private:
  ::packages_with_interfaces::msg::AmazingQuote msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::packages_with_interfaces::msg::AmazingQuote>()
{
  return packages_with_interfaces::msg::builder::Init_AmazingQuote_id();
}

}  // namespace packages_with_interfaces

#endif  // PACKAGES_WITH_INTERFACES__MSG__DETAIL__AMAZING_QUOTE__BUILDER_HPP_
