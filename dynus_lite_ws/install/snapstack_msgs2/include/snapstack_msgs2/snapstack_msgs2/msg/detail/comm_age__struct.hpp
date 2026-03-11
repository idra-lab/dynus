// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from snapstack_msgs2:msg/CommAge.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__COMM_AGE__STRUCT_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__COMM_AGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__snapstack_msgs2__msg__CommAge __attribute__((deprecated))
#else
# define DEPRECATED__snapstack_msgs2__msg__CommAge __declspec(deprecated)
#endif

namespace snapstack_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CommAge_
{
  using Type = CommAge_<ContainerAllocator>;

  explicit CommAge_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vicon_age_secs = 0.0f;
      this->goal_age_secs = 0.0f;
    }
  }

  explicit CommAge_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vicon_age_secs = 0.0f;
      this->goal_age_secs = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vicon_age_secs_type =
    float;
  _vicon_age_secs_type vicon_age_secs;
  using _goal_age_secs_type =
    float;
  _goal_age_secs_type goal_age_secs;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vicon_age_secs(
    const float & _arg)
  {
    this->vicon_age_secs = _arg;
    return *this;
  }
  Type & set__goal_age_secs(
    const float & _arg)
  {
    this->goal_age_secs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    snapstack_msgs2::msg::CommAge_<ContainerAllocator> *;
  using ConstRawPtr =
    const snapstack_msgs2::msg::CommAge_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snapstack_msgs2::msg::CommAge_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snapstack_msgs2::msg::CommAge_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snapstack_msgs2::msg::CommAge_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snapstack_msgs2::msg::CommAge_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snapstack_msgs2::msg::CommAge_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snapstack_msgs2::msg::CommAge_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snapstack_msgs2::msg::CommAge_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snapstack_msgs2::msg::CommAge_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snapstack_msgs2__msg__CommAge
    std::shared_ptr<snapstack_msgs2::msg::CommAge_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snapstack_msgs2__msg__CommAge
    std::shared_ptr<snapstack_msgs2::msg::CommAge_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CommAge_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vicon_age_secs != other.vicon_age_secs) {
      return false;
    }
    if (this->goal_age_secs != other.goal_age_secs) {
      return false;
    }
    return true;
  }
  bool operator!=(const CommAge_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CommAge_

// alias to use template instance with default allocator
using CommAge =
  snapstack_msgs2::msg::CommAge_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace snapstack_msgs2

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__COMM_AGE__STRUCT_HPP_
