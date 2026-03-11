// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from snapstack_msgs2:msg/AttitudeCommand.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__ATTITUDE_COMMAND__STRUCT_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__ATTITUDE_COMMAND__STRUCT_HPP_

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
// Member 'q'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"
// Member 'w'
// Member 'f_w'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__snapstack_msgs2__msg__AttitudeCommand __attribute__((deprecated))
#else
# define DEPRECATED__snapstack_msgs2__msg__AttitudeCommand __declspec(deprecated)
#endif

namespace snapstack_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AttitudeCommand_
{
  using Type = AttitudeCommand_<ContainerAllocator>;

  explicit AttitudeCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    q(_init),
    w(_init),
    f_w(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->power = false;
    }
  }

  explicit AttitudeCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    q(_alloc, _init),
    w(_alloc, _init),
    f_w(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->power = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _q_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _q_type q;
  using _w_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _w_type w;
  using _f_w_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _f_w_type f_w;
  using _power_type =
    bool;
  _power_type power;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__q(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__w(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->w = _arg;
    return *this;
  }
  Type & set__f_w(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->f_w = _arg;
    return *this;
  }
  Type & set__power(
    const bool & _arg)
  {
    this->power = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    snapstack_msgs2::msg::AttitudeCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const snapstack_msgs2::msg::AttitudeCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snapstack_msgs2::msg::AttitudeCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snapstack_msgs2::msg::AttitudeCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snapstack_msgs2::msg::AttitudeCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snapstack_msgs2::msg::AttitudeCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snapstack_msgs2::msg::AttitudeCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snapstack_msgs2::msg::AttitudeCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snapstack_msgs2::msg::AttitudeCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snapstack_msgs2::msg::AttitudeCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snapstack_msgs2__msg__AttitudeCommand
    std::shared_ptr<snapstack_msgs2::msg::AttitudeCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snapstack_msgs2__msg__AttitudeCommand
    std::shared_ptr<snapstack_msgs2::msg::AttitudeCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AttitudeCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->q != other.q) {
      return false;
    }
    if (this->w != other.w) {
      return false;
    }
    if (this->f_w != other.f_w) {
      return false;
    }
    if (this->power != other.power) {
      return false;
    }
    return true;
  }
  bool operator!=(const AttitudeCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AttitudeCommand_

// alias to use template instance with default allocator
using AttitudeCommand =
  snapstack_msgs2::msg::AttitudeCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace snapstack_msgs2

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__ATTITUDE_COMMAND__STRUCT_HPP_
