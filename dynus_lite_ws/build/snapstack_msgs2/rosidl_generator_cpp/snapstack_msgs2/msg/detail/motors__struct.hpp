// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from snapstack_msgs2:msg/Motors.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__MOTORS__STRUCT_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__MOTORS__STRUCT_HPP_

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
# define DEPRECATED__snapstack_msgs2__msg__Motors __attribute__((deprecated))
#else
# define DEPRECATED__snapstack_msgs2__msg__Motors __declspec(deprecated)
#endif

namespace snapstack_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Motors_
{
  using Type = Motors_<ContainerAllocator>;

  explicit Motors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m1 = 0.0;
      this->m2 = 0.0;
      this->m3 = 0.0;
      this->m4 = 0.0;
      this->m5 = 0.0;
      this->m6 = 0.0;
      this->m7 = 0.0;
      this->m8 = 0.0;
    }
  }

  explicit Motors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m1 = 0.0;
      this->m2 = 0.0;
      this->m3 = 0.0;
      this->m4 = 0.0;
      this->m5 = 0.0;
      this->m6 = 0.0;
      this->m7 = 0.0;
      this->m8 = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _m1_type =
    double;
  _m1_type m1;
  using _m2_type =
    double;
  _m2_type m2;
  using _m3_type =
    double;
  _m3_type m3;
  using _m4_type =
    double;
  _m4_type m4;
  using _m5_type =
    double;
  _m5_type m5;
  using _m6_type =
    double;
  _m6_type m6;
  using _m7_type =
    double;
  _m7_type m7;
  using _m8_type =
    double;
  _m8_type m8;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__m1(
    const double & _arg)
  {
    this->m1 = _arg;
    return *this;
  }
  Type & set__m2(
    const double & _arg)
  {
    this->m2 = _arg;
    return *this;
  }
  Type & set__m3(
    const double & _arg)
  {
    this->m3 = _arg;
    return *this;
  }
  Type & set__m4(
    const double & _arg)
  {
    this->m4 = _arg;
    return *this;
  }
  Type & set__m5(
    const double & _arg)
  {
    this->m5 = _arg;
    return *this;
  }
  Type & set__m6(
    const double & _arg)
  {
    this->m6 = _arg;
    return *this;
  }
  Type & set__m7(
    const double & _arg)
  {
    this->m7 = _arg;
    return *this;
  }
  Type & set__m8(
    const double & _arg)
  {
    this->m8 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    snapstack_msgs2::msg::Motors_<ContainerAllocator> *;
  using ConstRawPtr =
    const snapstack_msgs2::msg::Motors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snapstack_msgs2::msg::Motors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snapstack_msgs2::msg::Motors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snapstack_msgs2::msg::Motors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snapstack_msgs2::msg::Motors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snapstack_msgs2::msg::Motors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snapstack_msgs2::msg::Motors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snapstack_msgs2::msg::Motors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snapstack_msgs2::msg::Motors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snapstack_msgs2__msg__Motors
    std::shared_ptr<snapstack_msgs2::msg::Motors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snapstack_msgs2__msg__Motors
    std::shared_ptr<snapstack_msgs2::msg::Motors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Motors_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->m1 != other.m1) {
      return false;
    }
    if (this->m2 != other.m2) {
      return false;
    }
    if (this->m3 != other.m3) {
      return false;
    }
    if (this->m4 != other.m4) {
      return false;
    }
    if (this->m5 != other.m5) {
      return false;
    }
    if (this->m6 != other.m6) {
      return false;
    }
    if (this->m7 != other.m7) {
      return false;
    }
    if (this->m8 != other.m8) {
      return false;
    }
    return true;
  }
  bool operator!=(const Motors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Motors_

// alias to use template instance with default allocator
using Motors =
  snapstack_msgs2::msg::Motors_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace snapstack_msgs2

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__MOTORS__STRUCT_HPP_
