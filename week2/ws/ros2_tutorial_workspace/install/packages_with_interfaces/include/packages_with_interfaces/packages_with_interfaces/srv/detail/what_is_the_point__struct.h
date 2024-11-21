// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from packages_with_interfaces:srv/WhatIsThePoint.idl
// generated code does not contain a copyright notice

#ifndef PACKAGES_WITH_INTERFACES__SRV__DETAIL__WHAT_IS_THE_POINT__STRUCT_H_
#define PACKAGES_WITH_INTERFACES__SRV__DETAIL__WHAT_IS_THE_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'quote'
#include "packages_with_interfaces/msg/detail/amazing_quote__struct.h"

/// Struct defined in srv/WhatIsThePoint in the package packages_with_interfaces.
typedef struct packages_with_interfaces__srv__WhatIsThePoint_Request
{
  packages_with_interfaces__msg__AmazingQuote quote;
} packages_with_interfaces__srv__WhatIsThePoint_Request;

// Struct for a sequence of packages_with_interfaces__srv__WhatIsThePoint_Request.
typedef struct packages_with_interfaces__srv__WhatIsThePoint_Request__Sequence
{
  packages_with_interfaces__srv__WhatIsThePoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} packages_with_interfaces__srv__WhatIsThePoint_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in srv/WhatIsThePoint in the package packages_with_interfaces.
typedef struct packages_with_interfaces__srv__WhatIsThePoint_Response
{
  geometry_msgs__msg__Point point;
} packages_with_interfaces__srv__WhatIsThePoint_Response;

// Struct for a sequence of packages_with_interfaces__srv__WhatIsThePoint_Response.
typedef struct packages_with_interfaces__srv__WhatIsThePoint_Response__Sequence
{
  packages_with_interfaces__srv__WhatIsThePoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} packages_with_interfaces__srv__WhatIsThePoint_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PACKAGES_WITH_INTERFACES__SRV__DETAIL__WHAT_IS_THE_POINT__STRUCT_H_
