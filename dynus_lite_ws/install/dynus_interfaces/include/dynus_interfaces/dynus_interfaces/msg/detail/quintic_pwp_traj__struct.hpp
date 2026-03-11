// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynus_interfaces:msg/QuinticPWPTraj.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__QUINTIC_PWP_TRAJ__STRUCT_HPP_
#define DYNUS_INTERFACES__MSG__DETAIL__QUINTIC_PWP_TRAJ__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'coeff_x'
// Member 'coeff_y'
// Member 'coeff_z'
#include "dynus_interfaces/msg/detail/quintic_coeff_poly3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dynus_interfaces__msg__QuinticPWPTraj __attribute__((deprecated))
#else
# define DEPRECATED__dynus_interfaces__msg__QuinticPWPTraj __declspec(deprecated)
#endif

namespace dynus_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct QuinticPWPTraj_
{
  using Type = QuinticPWPTraj_<ContainerAllocator>;

  explicit QuinticPWPTraj_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit QuinticPWPTraj_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _times_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _times_type times;
  using _coeff_x_type =
    std::vector<dynus_interfaces::msg::QuinticCoeffPoly3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynus_interfaces::msg::QuinticCoeffPoly3_<ContainerAllocator>>>;
  _coeff_x_type coeff_x;
  using _coeff_y_type =
    std::vector<dynus_interfaces::msg::QuinticCoeffPoly3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynus_interfaces::msg::QuinticCoeffPoly3_<ContainerAllocator>>>;
  _coeff_y_type coeff_y;
  using _coeff_z_type =
    std::vector<dynus_interfaces::msg::QuinticCoeffPoly3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynus_interfaces::msg::QuinticCoeffPoly3_<ContainerAllocator>>>;
  _coeff_z_type coeff_z;

  // setters for named parameter idiom
  Type & set__times(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->times = _arg;
    return *this;
  }
  Type & set__coeff_x(
    const std::vector<dynus_interfaces::msg::QuinticCoeffPoly3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynus_interfaces::msg::QuinticCoeffPoly3_<ContainerAllocator>>> & _arg)
  {
    this->coeff_x = _arg;
    return *this;
  }
  Type & set__coeff_y(
    const std::vector<dynus_interfaces::msg::QuinticCoeffPoly3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynus_interfaces::msg::QuinticCoeffPoly3_<ContainerAllocator>>> & _arg)
  {
    this->coeff_y = _arg;
    return *this;
  }
  Type & set__coeff_z(
    const std::vector<dynus_interfaces::msg::QuinticCoeffPoly3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynus_interfaces::msg::QuinticCoeffPoly3_<ContainerAllocator>>> & _arg)
  {
    this->coeff_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynus_interfaces::msg::QuinticPWPTraj_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynus_interfaces::msg::QuinticPWPTraj_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynus_interfaces::msg::QuinticPWPTraj_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynus_interfaces::msg::QuinticPWPTraj_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynus_interfaces::msg::QuinticPWPTraj_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynus_interfaces::msg::QuinticPWPTraj_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynus_interfaces::msg::QuinticPWPTraj_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynus_interfaces::msg::QuinticPWPTraj_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynus_interfaces::msg::QuinticPWPTraj_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynus_interfaces::msg::QuinticPWPTraj_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynus_interfaces__msg__QuinticPWPTraj
    std::shared_ptr<dynus_interfaces::msg::QuinticPWPTraj_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynus_interfaces__msg__QuinticPWPTraj
    std::shared_ptr<dynus_interfaces::msg::QuinticPWPTraj_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QuinticPWPTraj_ & other) const
  {
    if (this->times != other.times) {
      return false;
    }
    if (this->coeff_x != other.coeff_x) {
      return false;
    }
    if (this->coeff_y != other.coeff_y) {
      return false;
    }
    if (this->coeff_z != other.coeff_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const QuinticPWPTraj_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QuinticPWPTraj_

// alias to use template instance with default allocator
using QuinticPWPTraj =
  dynus_interfaces::msg::QuinticPWPTraj_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynus_interfaces

#endif  // DYNUS_INTERFACES__MSG__DETAIL__QUINTIC_PWP_TRAJ__STRUCT_HPP_
