// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from snapstack_msgs2:msg/QuadFlightMode.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__QUAD_FLIGHT_MODE__STRUCT_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__QUAD_FLIGHT_MODE__STRUCT_HPP_

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
# define DEPRECATED__snapstack_msgs2__msg__QuadFlightMode __attribute__((deprecated))
#else
# define DEPRECATED__snapstack_msgs2__msg__QuadFlightMode __declspec(deprecated)
#endif

namespace snapstack_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct QuadFlightMode_
{
  using Type = QuadFlightMode_<ContainerAllocator>;

  explicit QuadFlightMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  explicit QuadFlightMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _mode_type =
    uint8_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NOT_FLYING =
    0u;
  static constexpr uint8_t TAKEOFF =
    1u;
  static constexpr uint8_t LAND =
    2u;
  static constexpr uint8_t INIT =
    3u;
  static constexpr uint8_t GO =
    4u;
  static constexpr uint8_t ESTOP =
    5u;
  static constexpr uint8_t KILL =
    6u;

  // pointer types
  using RawPtr =
    snapstack_msgs2::msg::QuadFlightMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const snapstack_msgs2::msg::QuadFlightMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snapstack_msgs2::msg::QuadFlightMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snapstack_msgs2::msg::QuadFlightMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snapstack_msgs2::msg::QuadFlightMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snapstack_msgs2::msg::QuadFlightMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snapstack_msgs2::msg::QuadFlightMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snapstack_msgs2::msg::QuadFlightMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snapstack_msgs2::msg::QuadFlightMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snapstack_msgs2::msg::QuadFlightMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snapstack_msgs2__msg__QuadFlightMode
    std::shared_ptr<snapstack_msgs2::msg::QuadFlightMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snapstack_msgs2__msg__QuadFlightMode
    std::shared_ptr<snapstack_msgs2::msg::QuadFlightMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QuadFlightMode_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const QuadFlightMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QuadFlightMode_

// alias to use template instance with default allocator
using QuadFlightMode =
  snapstack_msgs2::msg::QuadFlightMode_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t QuadFlightMode_<ContainerAllocator>::NOT_FLYING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t QuadFlightMode_<ContainerAllocator>::TAKEOFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t QuadFlightMode_<ContainerAllocator>::LAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t QuadFlightMode_<ContainerAllocator>::INIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t QuadFlightMode_<ContainerAllocator>::GO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t QuadFlightMode_<ContainerAllocator>::ESTOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t QuadFlightMode_<ContainerAllocator>::KILL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace snapstack_msgs2

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__QUAD_FLIGHT_MODE__STRUCT_HPP_
