// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from snapstack_msgs2:msg/VioFilterState.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__VIO_FILTER_STATE__STRUCT_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__VIO_FILTER_STATE__STRUCT_HPP_

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
// Member 'pose'
// Member 'extrinsics'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'bw'
// Member 'ba'
// Member 'accel_meas'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__snapstack_msgs2__msg__VioFilterState __attribute__((deprecated))
#else
# define DEPRECATED__snapstack_msgs2__msg__VioFilterState __declspec(deprecated)
#endif

namespace snapstack_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VioFilterState_
{
  using Type = VioFilterState_<ContainerAllocator>;

  explicit VioFilterState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init),
    twist(_init),
    bw(_init),
    ba(_init),
    extrinsics(_init),
    accel_meas(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n = 0l;
    }
  }

  explicit VioFilterState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init),
    twist(_alloc, _init),
    bw(_alloc, _init),
    ba(_alloc, _init),
    extrinsics(_alloc, _init),
    accel_meas(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;
  using _bw_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _bw_type bw;
  using _ba_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _ba_type ba;
  using _extrinsics_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _extrinsics_type extrinsics;
  using _accel_meas_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _accel_meas_type accel_meas;
  using _n_type =
    int32_t;
  _n_type n;
  using _error_cov_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _error_cov_type error_cov;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }
  Type & set__bw(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->bw = _arg;
    return *this;
  }
  Type & set__ba(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->ba = _arg;
    return *this;
  }
  Type & set__extrinsics(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->extrinsics = _arg;
    return *this;
  }
  Type & set__accel_meas(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->accel_meas = _arg;
    return *this;
  }
  Type & set__n(
    const int32_t & _arg)
  {
    this->n = _arg;
    return *this;
  }
  Type & set__error_cov(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->error_cov = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    snapstack_msgs2::msg::VioFilterState_<ContainerAllocator> *;
  using ConstRawPtr =
    const snapstack_msgs2::msg::VioFilterState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snapstack_msgs2::msg::VioFilterState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snapstack_msgs2::msg::VioFilterState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snapstack_msgs2::msg::VioFilterState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snapstack_msgs2::msg::VioFilterState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snapstack_msgs2::msg::VioFilterState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snapstack_msgs2::msg::VioFilterState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snapstack_msgs2::msg::VioFilterState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snapstack_msgs2::msg::VioFilterState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snapstack_msgs2__msg__VioFilterState
    std::shared_ptr<snapstack_msgs2::msg::VioFilterState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snapstack_msgs2__msg__VioFilterState
    std::shared_ptr<snapstack_msgs2::msg::VioFilterState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VioFilterState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    if (this->bw != other.bw) {
      return false;
    }
    if (this->ba != other.ba) {
      return false;
    }
    if (this->extrinsics != other.extrinsics) {
      return false;
    }
    if (this->accel_meas != other.accel_meas) {
      return false;
    }
    if (this->n != other.n) {
      return false;
    }
    if (this->error_cov != other.error_cov) {
      return false;
    }
    return true;
  }
  bool operator!=(const VioFilterState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VioFilterState_

// alias to use template instance with default allocator
using VioFilterState =
  snapstack_msgs2::msg::VioFilterState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace snapstack_msgs2

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__VIO_FILTER_STATE__STRUCT_HPP_
