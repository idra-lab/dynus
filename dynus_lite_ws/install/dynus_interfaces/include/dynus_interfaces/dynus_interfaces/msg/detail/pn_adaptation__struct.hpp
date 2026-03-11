// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynus_interfaces:msg/PNAdaptation.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__PN_ADAPTATION__STRUCT_HPP_
#define DYNUS_INTERFACES__MSG__DETAIL__PN_ADAPTATION__STRUCT_HPP_

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
# define DEPRECATED__dynus_interfaces__msg__PNAdaptation __attribute__((deprecated))
#else
# define DEPRECATED__dynus_interfaces__msg__PNAdaptation __declspec(deprecated)
#endif

namespace dynus_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PNAdaptation_
{
  using Type = PNAdaptation_<ContainerAllocator>;

  explicit PNAdaptation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->old_n = 0l;
      this->new_n = 0l;
      this->old_p = 0l;
      this->new_p = 0l;
    }
  }

  explicit PNAdaptation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->old_n = 0l;
      this->new_n = 0l;
      this->old_p = 0l;
      this->new_p = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _old_n_type =
    int32_t;
  _old_n_type old_n;
  using _new_n_type =
    int32_t;
  _new_n_type new_n;
  using _old_p_type =
    int32_t;
  _old_p_type old_p;
  using _new_p_type =
    int32_t;
  _new_p_type new_p;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__old_n(
    const int32_t & _arg)
  {
    this->old_n = _arg;
    return *this;
  }
  Type & set__new_n(
    const int32_t & _arg)
  {
    this->new_n = _arg;
    return *this;
  }
  Type & set__old_p(
    const int32_t & _arg)
  {
    this->old_p = _arg;
    return *this;
  }
  Type & set__new_p(
    const int32_t & _arg)
  {
    this->new_p = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynus_interfaces::msg::PNAdaptation_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynus_interfaces::msg::PNAdaptation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynus_interfaces::msg::PNAdaptation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynus_interfaces::msg::PNAdaptation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynus_interfaces::msg::PNAdaptation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynus_interfaces::msg::PNAdaptation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynus_interfaces::msg::PNAdaptation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynus_interfaces::msg::PNAdaptation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynus_interfaces::msg::PNAdaptation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynus_interfaces::msg::PNAdaptation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynus_interfaces__msg__PNAdaptation
    std::shared_ptr<dynus_interfaces::msg::PNAdaptation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynus_interfaces__msg__PNAdaptation
    std::shared_ptr<dynus_interfaces::msg::PNAdaptation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PNAdaptation_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->old_n != other.old_n) {
      return false;
    }
    if (this->new_n != other.new_n) {
      return false;
    }
    if (this->old_p != other.old_p) {
      return false;
    }
    if (this->new_p != other.new_p) {
      return false;
    }
    return true;
  }
  bool operator!=(const PNAdaptation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PNAdaptation_

// alias to use template instance with default allocator
using PNAdaptation =
  dynus_interfaces::msg::PNAdaptation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynus_interfaces

#endif  // DYNUS_INTERFACES__MSG__DETAIL__PN_ADAPTATION__STRUCT_HPP_
