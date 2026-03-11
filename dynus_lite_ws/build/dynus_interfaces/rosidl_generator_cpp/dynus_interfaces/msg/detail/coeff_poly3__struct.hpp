// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynus_interfaces:msg/CoeffPoly3.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__COEFF_POLY3__STRUCT_HPP_
#define DYNUS_INTERFACES__MSG__DETAIL__COEFF_POLY3__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynus_interfaces__msg__CoeffPoly3 __attribute__((deprecated))
#else
# define DEPRECATED__dynus_interfaces__msg__CoeffPoly3 __declspec(deprecated)
#endif

namespace dynus_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CoeffPoly3_
{
  using Type = CoeffPoly3_<ContainerAllocator>;

  explicit CoeffPoly3_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0.0;
      this->b = 0.0;
      this->c = 0.0;
      this->d = 0.0;
    }
  }

  explicit CoeffPoly3_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0.0;
      this->b = 0.0;
      this->c = 0.0;
      this->d = 0.0;
    }
  }

  // field types and members
  using _a_type =
    double;
  _a_type a;
  using _b_type =
    double;
  _b_type b;
  using _c_type =
    double;
  _c_type c;
  using _d_type =
    double;
  _d_type d;

  // setters for named parameter idiom
  Type & set__a(
    const double & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const double & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__c(
    const double & _arg)
  {
    this->c = _arg;
    return *this;
  }
  Type & set__d(
    const double & _arg)
  {
    this->d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynus_interfaces::msg::CoeffPoly3_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynus_interfaces::msg::CoeffPoly3_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynus_interfaces::msg::CoeffPoly3_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynus_interfaces::msg::CoeffPoly3_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynus_interfaces::msg::CoeffPoly3_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynus_interfaces::msg::CoeffPoly3_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynus_interfaces::msg::CoeffPoly3_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynus_interfaces::msg::CoeffPoly3_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynus_interfaces::msg::CoeffPoly3_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynus_interfaces::msg::CoeffPoly3_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynus_interfaces__msg__CoeffPoly3
    std::shared_ptr<dynus_interfaces::msg::CoeffPoly3_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynus_interfaces__msg__CoeffPoly3
    std::shared_ptr<dynus_interfaces::msg::CoeffPoly3_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CoeffPoly3_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->c != other.c) {
      return false;
    }
    if (this->d != other.d) {
      return false;
    }
    return true;
  }
  bool operator!=(const CoeffPoly3_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CoeffPoly3_

// alias to use template instance with default allocator
using CoeffPoly3 =
  dynus_interfaces::msg::CoeffPoly3_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynus_interfaces

#endif  // DYNUS_INTERFACES__MSG__DETAIL__COEFF_POLY3__STRUCT_HPP_
