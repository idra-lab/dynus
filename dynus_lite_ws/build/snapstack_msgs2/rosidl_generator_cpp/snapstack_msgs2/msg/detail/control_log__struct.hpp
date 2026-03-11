// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from snapstack_msgs2:msg/ControlLog.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__CONTROL_LOG__STRUCT_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__CONTROL_LOG__STRUCT_HPP_

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
// Member 'p_ref'
// Member 'p_err'
// Member 'p_err_int'
// Member 'v'
// Member 'v_ref'
// Member 'v_err'
// Member 'a_ff'
// Member 'a_fb'
// Member 'j_ff'
// Member 'j_fb'
// Member 'rpy'
// Member 'rpy_ref'
// Member 'w'
// Member 'w_ref'
// Member 'f_w'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'q'
// Member 'q_ref'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__snapstack_msgs2__msg__ControlLog __attribute__((deprecated))
#else
# define DEPRECATED__snapstack_msgs2__msg__ControlLog __declspec(deprecated)
#endif

namespace snapstack_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlLog_
{
  using Type = ControlLog_<ContainerAllocator>;

  explicit ControlLog_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    p(_init),
    p_ref(_init),
    p_err(_init),
    p_err_int(_init),
    v(_init),
    v_ref(_init),
    v_err(_init),
    a_ff(_init),
    a_fb(_init),
    j_ff(_init),
    j_fb(_init),
    q(_init),
    q_ref(_init),
    rpy(_init),
    rpy_ref(_init),
    w(_init),
    w_ref(_init),
    f_w(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->power = false;
    }
  }

  explicit ControlLog_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    p(_alloc, _init),
    p_ref(_alloc, _init),
    p_err(_alloc, _init),
    p_err_int(_alloc, _init),
    v(_alloc, _init),
    v_ref(_alloc, _init),
    v_err(_alloc, _init),
    a_ff(_alloc, _init),
    a_fb(_alloc, _init),
    j_ff(_alloc, _init),
    j_fb(_alloc, _init),
    q(_alloc, _init),
    q_ref(_alloc, _init),
    rpy(_alloc, _init),
    rpy_ref(_alloc, _init),
    w(_alloc, _init),
    w_ref(_alloc, _init),
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
  using _p_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _p_type p;
  using _p_ref_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _p_ref_type p_ref;
  using _p_err_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _p_err_type p_err;
  using _p_err_int_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _p_err_int_type p_err_int;
  using _v_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _v_type v;
  using _v_ref_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _v_ref_type v_ref;
  using _v_err_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _v_err_type v_err;
  using _a_ff_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _a_ff_type a_ff;
  using _a_fb_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _a_fb_type a_fb;
  using _j_ff_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _j_ff_type j_ff;
  using _j_fb_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _j_fb_type j_fb;
  using _q_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _q_type q;
  using _q_ref_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _q_ref_type q_ref;
  using _rpy_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _rpy_type rpy;
  using _rpy_ref_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _rpy_ref_type rpy_ref;
  using _w_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _w_type w;
  using _w_ref_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _w_ref_type w_ref;
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
  Type & set__p(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->p = _arg;
    return *this;
  }
  Type & set__p_ref(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->p_ref = _arg;
    return *this;
  }
  Type & set__p_err(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->p_err = _arg;
    return *this;
  }
  Type & set__p_err_int(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->p_err_int = _arg;
    return *this;
  }
  Type & set__v(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->v = _arg;
    return *this;
  }
  Type & set__v_ref(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->v_ref = _arg;
    return *this;
  }
  Type & set__v_err(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->v_err = _arg;
    return *this;
  }
  Type & set__a_ff(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->a_ff = _arg;
    return *this;
  }
  Type & set__a_fb(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->a_fb = _arg;
    return *this;
  }
  Type & set__j_ff(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->j_ff = _arg;
    return *this;
  }
  Type & set__j_fb(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->j_fb = _arg;
    return *this;
  }
  Type & set__q(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__q_ref(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->q_ref = _arg;
    return *this;
  }
  Type & set__rpy(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->rpy = _arg;
    return *this;
  }
  Type & set__rpy_ref(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->rpy_ref = _arg;
    return *this;
  }
  Type & set__w(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->w = _arg;
    return *this;
  }
  Type & set__w_ref(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->w_ref = _arg;
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
    snapstack_msgs2::msg::ControlLog_<ContainerAllocator> *;
  using ConstRawPtr =
    const snapstack_msgs2::msg::ControlLog_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snapstack_msgs2::msg::ControlLog_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snapstack_msgs2::msg::ControlLog_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snapstack_msgs2::msg::ControlLog_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snapstack_msgs2::msg::ControlLog_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snapstack_msgs2::msg::ControlLog_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snapstack_msgs2::msg::ControlLog_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snapstack_msgs2::msg::ControlLog_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snapstack_msgs2::msg::ControlLog_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snapstack_msgs2__msg__ControlLog
    std::shared_ptr<snapstack_msgs2::msg::ControlLog_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snapstack_msgs2__msg__ControlLog
    std::shared_ptr<snapstack_msgs2::msg::ControlLog_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlLog_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->p != other.p) {
      return false;
    }
    if (this->p_ref != other.p_ref) {
      return false;
    }
    if (this->p_err != other.p_err) {
      return false;
    }
    if (this->p_err_int != other.p_err_int) {
      return false;
    }
    if (this->v != other.v) {
      return false;
    }
    if (this->v_ref != other.v_ref) {
      return false;
    }
    if (this->v_err != other.v_err) {
      return false;
    }
    if (this->a_ff != other.a_ff) {
      return false;
    }
    if (this->a_fb != other.a_fb) {
      return false;
    }
    if (this->j_ff != other.j_ff) {
      return false;
    }
    if (this->j_fb != other.j_fb) {
      return false;
    }
    if (this->q != other.q) {
      return false;
    }
    if (this->q_ref != other.q_ref) {
      return false;
    }
    if (this->rpy != other.rpy) {
      return false;
    }
    if (this->rpy_ref != other.rpy_ref) {
      return false;
    }
    if (this->w != other.w) {
      return false;
    }
    if (this->w_ref != other.w_ref) {
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
  bool operator!=(const ControlLog_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlLog_

// alias to use template instance with default allocator
using ControlLog =
  snapstack_msgs2::msg::ControlLog_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace snapstack_msgs2

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__CONTROL_LOG__STRUCT_HPP_
