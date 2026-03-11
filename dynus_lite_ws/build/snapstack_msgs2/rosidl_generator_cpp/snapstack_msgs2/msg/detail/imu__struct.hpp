// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from snapstack_msgs2:msg/IMU.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__IMU__STRUCT_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__IMU__STRUCT_HPP_

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
// Member 'imu_stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'gyro'
// Member 'accel'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__snapstack_msgs2__msg__IMU __attribute__((deprecated))
#else
# define DEPRECATED__snapstack_msgs2__msg__IMU __declspec(deprecated)
#endif

namespace snapstack_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IMU_
{
  using Type = IMU_<ContainerAllocator>;

  explicit IMU_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    imu_stamp(_init),
    gyro(_init),
    accel(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->loop_time = 0.0;
    }
  }

  explicit IMU_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    imu_stamp(_alloc, _init),
    gyro(_alloc, _init),
    accel(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->loop_time = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _imu_stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _imu_stamp_type imu_stamp;
  using _gyro_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _gyro_type gyro;
  using _accel_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _accel_type accel;
  using _loop_time_type =
    double;
  _loop_time_type loop_time;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__imu_stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->imu_stamp = _arg;
    return *this;
  }
  Type & set__gyro(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->gyro = _arg;
    return *this;
  }
  Type & set__accel(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->accel = _arg;
    return *this;
  }
  Type & set__loop_time(
    const double & _arg)
  {
    this->loop_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    snapstack_msgs2::msg::IMU_<ContainerAllocator> *;
  using ConstRawPtr =
    const snapstack_msgs2::msg::IMU_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snapstack_msgs2::msg::IMU_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snapstack_msgs2::msg::IMU_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snapstack_msgs2::msg::IMU_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snapstack_msgs2::msg::IMU_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snapstack_msgs2::msg::IMU_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snapstack_msgs2::msg::IMU_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snapstack_msgs2::msg::IMU_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snapstack_msgs2::msg::IMU_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snapstack_msgs2__msg__IMU
    std::shared_ptr<snapstack_msgs2::msg::IMU_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snapstack_msgs2__msg__IMU
    std::shared_ptr<snapstack_msgs2::msg::IMU_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IMU_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->imu_stamp != other.imu_stamp) {
      return false;
    }
    if (this->gyro != other.gyro) {
      return false;
    }
    if (this->accel != other.accel) {
      return false;
    }
    if (this->loop_time != other.loop_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const IMU_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IMU_

// alias to use template instance with default allocator
using IMU =
  snapstack_msgs2::msg::IMU_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace snapstack_msgs2

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__IMU__STRUCT_HPP_
