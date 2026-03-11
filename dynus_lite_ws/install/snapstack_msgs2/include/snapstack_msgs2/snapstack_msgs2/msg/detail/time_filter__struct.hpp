// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from snapstack_msgs2:msg/TimeFilter.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__TIME_FILTER__STRUCT_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__TIME_FILTER__STRUCT_HPP_

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
# define DEPRECATED__snapstack_msgs2__msg__TimeFilter __attribute__((deprecated))
#else
# define DEPRECATED__snapstack_msgs2__msg__TimeFilter __declspec(deprecated)
#endif

namespace snapstack_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TimeFilter_
{
  using Type = TimeFilter_<ContainerAllocator>;

  explicit TimeFilter_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dt = 0.0f;
      this->delayed_dt = 0.0f;
      this->skipped = false;
      this->upper = 0.0f;
      this->lower = 0.0f;
    }
  }

  explicit TimeFilter_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dt = 0.0f;
      this->delayed_dt = 0.0f;
      this->skipped = false;
      this->upper = 0.0f;
      this->lower = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _dt_type =
    float;
  _dt_type dt;
  using _delayed_dt_type =
    float;
  _delayed_dt_type delayed_dt;
  using _skipped_type =
    bool;
  _skipped_type skipped;
  using _upper_type =
    float;
  _upper_type upper;
  using _lower_type =
    float;
  _lower_type lower;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__dt(
    const float & _arg)
  {
    this->dt = _arg;
    return *this;
  }
  Type & set__delayed_dt(
    const float & _arg)
  {
    this->delayed_dt = _arg;
    return *this;
  }
  Type & set__skipped(
    const bool & _arg)
  {
    this->skipped = _arg;
    return *this;
  }
  Type & set__upper(
    const float & _arg)
  {
    this->upper = _arg;
    return *this;
  }
  Type & set__lower(
    const float & _arg)
  {
    this->lower = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    snapstack_msgs2::msg::TimeFilter_<ContainerAllocator> *;
  using ConstRawPtr =
    const snapstack_msgs2::msg::TimeFilter_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snapstack_msgs2::msg::TimeFilter_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snapstack_msgs2::msg::TimeFilter_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snapstack_msgs2::msg::TimeFilter_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snapstack_msgs2::msg::TimeFilter_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snapstack_msgs2::msg::TimeFilter_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snapstack_msgs2::msg::TimeFilter_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snapstack_msgs2::msg::TimeFilter_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snapstack_msgs2::msg::TimeFilter_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snapstack_msgs2__msg__TimeFilter
    std::shared_ptr<snapstack_msgs2::msg::TimeFilter_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snapstack_msgs2__msg__TimeFilter
    std::shared_ptr<snapstack_msgs2::msg::TimeFilter_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimeFilter_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->dt != other.dt) {
      return false;
    }
    if (this->delayed_dt != other.delayed_dt) {
      return false;
    }
    if (this->skipped != other.skipped) {
      return false;
    }
    if (this->upper != other.upper) {
      return false;
    }
    if (this->lower != other.lower) {
      return false;
    }
    return true;
  }
  bool operator!=(const TimeFilter_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimeFilter_

// alias to use template instance with default allocator
using TimeFilter =
  snapstack_msgs2::msg::TimeFilter_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace snapstack_msgs2

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__TIME_FILTER__STRUCT_HPP_
