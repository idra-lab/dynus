// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynus_interfaces:msg/DynTraj.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ__STRUCT_HPP_
#define DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ__STRUCT_HPP_

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
// Member 'pwp'
#include "dynus_interfaces/msg/detail/pwp_traj__struct.hpp"
// Member 'quintic_pwp'
#include "dynus_interfaces/msg/detail/quintic_pwp_traj__struct.hpp"
// Member 'pos'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dynus_interfaces__msg__DynTraj __attribute__((deprecated))
#else
# define DEPRECATED__dynus_interfaces__msg__DynTraj __declspec(deprecated)
#endif

namespace dynus_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DynTraj_
{
  using Type = DynTraj_<ContainerAllocator>;

  explicit DynTraj_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pwp(_init),
    quintic_pwp(_init),
    pos(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->poly_start_time = 0.0;
      this->poly_end_time = 0.0;
      this->is_agent = false;
      this->mode = "";
    }
  }

  explicit DynTraj_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pwp(_alloc, _init),
    quintic_pwp(_alloc, _init),
    pos(_alloc, _init),
    mode(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->poly_start_time = 0.0;
      this->poly_end_time = 0.0;
      this->is_agent = false;
      this->mode = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _bbox_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _bbox_type bbox;
  using _id_type =
    int32_t;
  _id_type id;
  using _pwp_type =
    dynus_interfaces::msg::PWPTraj_<ContainerAllocator>;
  _pwp_type pwp;
  using _quintic_pwp_type =
    dynus_interfaces::msg::QuinticPWPTraj_<ContainerAllocator>;
  _quintic_pwp_type quintic_pwp;
  using _ekf_cov_p_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _ekf_cov_p_type ekf_cov_p;
  using _ekf_cov_q_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _ekf_cov_q_type ekf_cov_q;
  using _ekf_cov_r_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _ekf_cov_r_type ekf_cov_r;
  using _poly_cov_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _poly_cov_type poly_cov;
  using _poly_coeffs_x_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _poly_coeffs_x_type poly_coeffs_x;
  using _poly_coeffs_y_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _poly_coeffs_y_type poly_coeffs_y;
  using _poly_coeffs_z_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _poly_coeffs_z_type poly_coeffs_z;
  using _poly_start_time_type =
    double;
  _poly_start_time_type poly_start_time;
  using _poly_end_time_type =
    double;
  _poly_end_time_type poly_end_time;
  using _function_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _function_type function;
  using _velocity_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _velocity_type velocity;
  using _pos_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _pos_type pos;
  using _is_agent_type =
    bool;
  _is_agent_type is_agent;
  using _goal_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _goal_type goal;
  using _mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__bbox(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->bbox = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__pwp(
    const dynus_interfaces::msg::PWPTraj_<ContainerAllocator> & _arg)
  {
    this->pwp = _arg;
    return *this;
  }
  Type & set__quintic_pwp(
    const dynus_interfaces::msg::QuinticPWPTraj_<ContainerAllocator> & _arg)
  {
    this->quintic_pwp = _arg;
    return *this;
  }
  Type & set__ekf_cov_p(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->ekf_cov_p = _arg;
    return *this;
  }
  Type & set__ekf_cov_q(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->ekf_cov_q = _arg;
    return *this;
  }
  Type & set__ekf_cov_r(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->ekf_cov_r = _arg;
    return *this;
  }
  Type & set__poly_cov(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->poly_cov = _arg;
    return *this;
  }
  Type & set__poly_coeffs_x(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->poly_coeffs_x = _arg;
    return *this;
  }
  Type & set__poly_coeffs_y(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->poly_coeffs_y = _arg;
    return *this;
  }
  Type & set__poly_coeffs_z(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->poly_coeffs_z = _arg;
    return *this;
  }
  Type & set__poly_start_time(
    const double & _arg)
  {
    this->poly_start_time = _arg;
    return *this;
  }
  Type & set__poly_end_time(
    const double & _arg)
  {
    this->poly_end_time = _arg;
    return *this;
  }
  Type & set__function(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->function = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__pos(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__is_agent(
    const bool & _arg)
  {
    this->is_agent = _arg;
    return *this;
  }
  Type & set__goal(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->goal = _arg;
    return *this;
  }
  Type & set__mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynus_interfaces::msg::DynTraj_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynus_interfaces::msg::DynTraj_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynus_interfaces::msg::DynTraj_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynus_interfaces::msg::DynTraj_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynus_interfaces::msg::DynTraj_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynus_interfaces::msg::DynTraj_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynus_interfaces::msg::DynTraj_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynus_interfaces::msg::DynTraj_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynus_interfaces::msg::DynTraj_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynus_interfaces::msg::DynTraj_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynus_interfaces__msg__DynTraj
    std::shared_ptr<dynus_interfaces::msg::DynTraj_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynus_interfaces__msg__DynTraj
    std::shared_ptr<dynus_interfaces::msg::DynTraj_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynTraj_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->bbox != other.bbox) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->pwp != other.pwp) {
      return false;
    }
    if (this->quintic_pwp != other.quintic_pwp) {
      return false;
    }
    if (this->ekf_cov_p != other.ekf_cov_p) {
      return false;
    }
    if (this->ekf_cov_q != other.ekf_cov_q) {
      return false;
    }
    if (this->ekf_cov_r != other.ekf_cov_r) {
      return false;
    }
    if (this->poly_cov != other.poly_cov) {
      return false;
    }
    if (this->poly_coeffs_x != other.poly_coeffs_x) {
      return false;
    }
    if (this->poly_coeffs_y != other.poly_coeffs_y) {
      return false;
    }
    if (this->poly_coeffs_z != other.poly_coeffs_z) {
      return false;
    }
    if (this->poly_start_time != other.poly_start_time) {
      return false;
    }
    if (this->poly_end_time != other.poly_end_time) {
      return false;
    }
    if (this->function != other.function) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    if (this->is_agent != other.is_agent) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynTraj_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynTraj_

// alias to use template instance with default allocator
using DynTraj =
  dynus_interfaces::msg::DynTraj_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynus_interfaces

#endif  // DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ__STRUCT_HPP_
