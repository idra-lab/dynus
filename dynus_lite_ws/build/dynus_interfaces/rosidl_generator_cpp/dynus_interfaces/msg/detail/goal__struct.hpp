// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynus_interfaces:msg/Goal.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__GOAL__STRUCT_HPP_
#define DYNUS_INTERFACES__MSG__DETAIL__GOAL__STRUCT_HPP_

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
// Member 'p'
// Member 'v'
// Member 'a'
// Member 'j'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dynus_interfaces__msg__Goal __attribute__((deprecated))
#else
# define DEPRECATED__dynus_interfaces__msg__Goal __declspec(deprecated)
#endif

namespace dynus_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Goal_
{
  using Type = Goal_<ContainerAllocator>;

  explicit Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    p(_init),
    v(_init),
    a(_init),
    j(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
      this->dyaw = 0.0;
      this->power = false;
      this->mode_xy = 0;
      this->mode_z = 0;
    }
  }

  explicit Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    p(_alloc, _init),
    v(_alloc, _init),
    a(_alloc, _init),
    j(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
      this->dyaw = 0.0;
      this->power = false;
      this->mode_xy = 0;
      this->mode_z = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _p_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _p_type p;
  using _v_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _v_type v;
  using _a_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _a_type a;
  using _j_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _j_type j;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _dyaw_type =
    double;
  _dyaw_type dyaw;
  using _power_type =
    bool;
  _power_type power;
  using _mode_xy_type =
    uint8_t;
  _mode_xy_type mode_xy;
  using _mode_z_type =
    uint8_t;
  _mode_z_type mode_z;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__p(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->p = _arg;
    return *this;
  }
  Type & set__v(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->v = _arg;
    return *this;
  }
  Type & set__a(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__j(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->j = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__dyaw(
    const double & _arg)
  {
    this->dyaw = _arg;
    return *this;
  }
  Type & set__power(
    const bool & _arg)
  {
    this->power = _arg;
    return *this;
  }
  Type & set__mode_xy(
    const uint8_t & _arg)
  {
    this->mode_xy = _arg;
    return *this;
  }
  Type & set__mode_z(
    const uint8_t & _arg)
  {
    this->mode_z = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MODE_POSITION_CONTROL =
    0u;
  static constexpr uint8_t MODE_VELOCITY_CONTROL =
    1u;
  static constexpr uint8_t MODE_ACCELERATION_CONTROL =
    2u;

  // pointer types
  using RawPtr =
    dynus_interfaces::msg::Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynus_interfaces::msg::Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynus_interfaces::msg::Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynus_interfaces::msg::Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynus_interfaces::msg::Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynus_interfaces::msg::Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynus_interfaces::msg::Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynus_interfaces::msg::Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynus_interfaces::msg::Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynus_interfaces::msg::Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynus_interfaces__msg__Goal
    std::shared_ptr<dynus_interfaces::msg::Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynus_interfaces__msg__Goal
    std::shared_ptr<dynus_interfaces::msg::Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Goal_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->p != other.p) {
      return false;
    }
    if (this->v != other.v) {
      return false;
    }
    if (this->a != other.a) {
      return false;
    }
    if (this->j != other.j) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->dyaw != other.dyaw) {
      return false;
    }
    if (this->power != other.power) {
      return false;
    }
    if (this->mode_xy != other.mode_xy) {
      return false;
    }
    if (this->mode_z != other.mode_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Goal_

// alias to use template instance with default allocator
using Goal =
  dynus_interfaces::msg::Goal_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Goal_<ContainerAllocator>::MODE_POSITION_CONTROL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Goal_<ContainerAllocator>::MODE_VELOCITY_CONTROL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Goal_<ContainerAllocator>::MODE_ACCELERATION_CONTROL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace dynus_interfaces

#endif  // DYNUS_INTERFACES__MSG__DETAIL__GOAL__STRUCT_HPP_
