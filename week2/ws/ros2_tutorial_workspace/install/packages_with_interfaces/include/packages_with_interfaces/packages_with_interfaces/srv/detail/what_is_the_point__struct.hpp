// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from packages_with_interfaces:srv/WhatIsThePoint.idl
// generated code does not contain a copyright notice

#ifndef PACKAGES_WITH_INTERFACES__SRV__DETAIL__WHAT_IS_THE_POINT__STRUCT_HPP_
#define PACKAGES_WITH_INTERFACES__SRV__DETAIL__WHAT_IS_THE_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'quote'
#include "packages_with_interfaces/msg/detail/amazing_quote__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__packages_with_interfaces__srv__WhatIsThePoint_Request __attribute__((deprecated))
#else
# define DEPRECATED__packages_with_interfaces__srv__WhatIsThePoint_Request __declspec(deprecated)
#endif

namespace packages_with_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WhatIsThePoint_Request_
{
  using Type = WhatIsThePoint_Request_<ContainerAllocator>;

  explicit WhatIsThePoint_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : quote(_init)
  {
    (void)_init;
  }

  explicit WhatIsThePoint_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : quote(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _quote_type =
    packages_with_interfaces::msg::AmazingQuote_<ContainerAllocator>;
  _quote_type quote;

  // setters for named parameter idiom
  Type & set__quote(
    const packages_with_interfaces::msg::AmazingQuote_<ContainerAllocator> & _arg)
  {
    this->quote = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    packages_with_interfaces::srv::WhatIsThePoint_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const packages_with_interfaces::srv::WhatIsThePoint_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<packages_with_interfaces::srv::WhatIsThePoint_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<packages_with_interfaces::srv::WhatIsThePoint_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      packages_with_interfaces::srv::WhatIsThePoint_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<packages_with_interfaces::srv::WhatIsThePoint_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      packages_with_interfaces::srv::WhatIsThePoint_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<packages_with_interfaces::srv::WhatIsThePoint_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<packages_with_interfaces::srv::WhatIsThePoint_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<packages_with_interfaces::srv::WhatIsThePoint_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__packages_with_interfaces__srv__WhatIsThePoint_Request
    std::shared_ptr<packages_with_interfaces::srv::WhatIsThePoint_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__packages_with_interfaces__srv__WhatIsThePoint_Request
    std::shared_ptr<packages_with_interfaces::srv::WhatIsThePoint_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WhatIsThePoint_Request_ & other) const
  {
    if (this->quote != other.quote) {
      return false;
    }
    return true;
  }
  bool operator!=(const WhatIsThePoint_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WhatIsThePoint_Request_

// alias to use template instance with default allocator
using WhatIsThePoint_Request =
  packages_with_interfaces::srv::WhatIsThePoint_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace packages_with_interfaces


// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__packages_with_interfaces__srv__WhatIsThePoint_Response __attribute__((deprecated))
#else
# define DEPRECATED__packages_with_interfaces__srv__WhatIsThePoint_Response __declspec(deprecated)
#endif

namespace packages_with_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WhatIsThePoint_Response_
{
  using Type = WhatIsThePoint_Response_<ContainerAllocator>;

  explicit WhatIsThePoint_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init)
  {
    (void)_init;
  }

  explicit WhatIsThePoint_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _point_type point;

  // setters for named parameter idiom
  Type & set__point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    packages_with_interfaces::srv::WhatIsThePoint_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const packages_with_interfaces::srv::WhatIsThePoint_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<packages_with_interfaces::srv::WhatIsThePoint_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<packages_with_interfaces::srv::WhatIsThePoint_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      packages_with_interfaces::srv::WhatIsThePoint_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<packages_with_interfaces::srv::WhatIsThePoint_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      packages_with_interfaces::srv::WhatIsThePoint_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<packages_with_interfaces::srv::WhatIsThePoint_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<packages_with_interfaces::srv::WhatIsThePoint_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<packages_with_interfaces::srv::WhatIsThePoint_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__packages_with_interfaces__srv__WhatIsThePoint_Response
    std::shared_ptr<packages_with_interfaces::srv::WhatIsThePoint_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__packages_with_interfaces__srv__WhatIsThePoint_Response
    std::shared_ptr<packages_with_interfaces::srv::WhatIsThePoint_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WhatIsThePoint_Response_ & other) const
  {
    if (this->point != other.point) {
      return false;
    }
    return true;
  }
  bool operator!=(const WhatIsThePoint_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WhatIsThePoint_Response_

// alias to use template instance with default allocator
using WhatIsThePoint_Response =
  packages_with_interfaces::srv::WhatIsThePoint_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace packages_with_interfaces

namespace packages_with_interfaces
{

namespace srv
{

struct WhatIsThePoint
{
  using Request = packages_with_interfaces::srv::WhatIsThePoint_Request;
  using Response = packages_with_interfaces::srv::WhatIsThePoint_Response;
};

}  // namespace srv

}  // namespace packages_with_interfaces

#endif  // PACKAGES_WITH_INTERFACES__SRV__DETAIL__WHAT_IS_THE_POINT__STRUCT_HPP_
