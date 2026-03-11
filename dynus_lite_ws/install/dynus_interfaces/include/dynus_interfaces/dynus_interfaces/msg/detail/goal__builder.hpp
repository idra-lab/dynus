// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynus_interfaces:msg/Goal.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__GOAL__BUILDER_HPP_
#define DYNUS_INTERFACES__MSG__DETAIL__GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynus_interfaces/msg/detail/goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynus_interfaces
{

namespace msg
{

namespace builder
{

class Init_Goal_mode_z
{
public:
  explicit Init_Goal_mode_z(::dynus_interfaces::msg::Goal & msg)
  : msg_(msg)
  {}
  ::dynus_interfaces::msg::Goal mode_z(::dynus_interfaces::msg::Goal::_mode_z_type arg)
  {
    msg_.mode_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynus_interfaces::msg::Goal msg_;
};

class Init_Goal_mode_xy
{
public:
  explicit Init_Goal_mode_xy(::dynus_interfaces::msg::Goal & msg)
  : msg_(msg)
  {}
  Init_Goal_mode_z mode_xy(::dynus_interfaces::msg::Goal::_mode_xy_type arg)
  {
    msg_.mode_xy = std::move(arg);
    return Init_Goal_mode_z(msg_);
  }

private:
  ::dynus_interfaces::msg::Goal msg_;
};

class Init_Goal_power
{
public:
  explicit Init_Goal_power(::dynus_interfaces::msg::Goal & msg)
  : msg_(msg)
  {}
  Init_Goal_mode_xy power(::dynus_interfaces::msg::Goal::_power_type arg)
  {
    msg_.power = std::move(arg);
    return Init_Goal_mode_xy(msg_);
  }

private:
  ::dynus_interfaces::msg::Goal msg_;
};

class Init_Goal_dyaw
{
public:
  explicit Init_Goal_dyaw(::dynus_interfaces::msg::Goal & msg)
  : msg_(msg)
  {}
  Init_Goal_power dyaw(::dynus_interfaces::msg::Goal::_dyaw_type arg)
  {
    msg_.dyaw = std::move(arg);
    return Init_Goal_power(msg_);
  }

private:
  ::dynus_interfaces::msg::Goal msg_;
};

class Init_Goal_yaw
{
public:
  explicit Init_Goal_yaw(::dynus_interfaces::msg::Goal & msg)
  : msg_(msg)
  {}
  Init_Goal_dyaw yaw(::dynus_interfaces::msg::Goal::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Goal_dyaw(msg_);
  }

private:
  ::dynus_interfaces::msg::Goal msg_;
};

class Init_Goal_j
{
public:
  explicit Init_Goal_j(::dynus_interfaces::msg::Goal & msg)
  : msg_(msg)
  {}
  Init_Goal_yaw j(::dynus_interfaces::msg::Goal::_j_type arg)
  {
    msg_.j = std::move(arg);
    return Init_Goal_yaw(msg_);
  }

private:
  ::dynus_interfaces::msg::Goal msg_;
};

class Init_Goal_a
{
public:
  explicit Init_Goal_a(::dynus_interfaces::msg::Goal & msg)
  : msg_(msg)
  {}
  Init_Goal_j a(::dynus_interfaces::msg::Goal::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Goal_j(msg_);
  }

private:
  ::dynus_interfaces::msg::Goal msg_;
};

class Init_Goal_v
{
public:
  explicit Init_Goal_v(::dynus_interfaces::msg::Goal & msg)
  : msg_(msg)
  {}
  Init_Goal_a v(::dynus_interfaces::msg::Goal::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_Goal_a(msg_);
  }

private:
  ::dynus_interfaces::msg::Goal msg_;
};

class Init_Goal_p
{
public:
  explicit Init_Goal_p(::dynus_interfaces::msg::Goal & msg)
  : msg_(msg)
  {}
  Init_Goal_v p(::dynus_interfaces::msg::Goal::_p_type arg)
  {
    msg_.p = std::move(arg);
    return Init_Goal_v(msg_);
  }

private:
  ::dynus_interfaces::msg::Goal msg_;
};

class Init_Goal_header
{
public:
  Init_Goal_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Goal_p header(::dynus_interfaces::msg::Goal::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Goal_p(msg_);
  }

private:
  ::dynus_interfaces::msg::Goal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynus_interfaces::msg::Goal>()
{
  return dynus_interfaces::msg::builder::Init_Goal_header();
}

}  // namespace dynus_interfaces

#endif  // DYNUS_INTERFACES__MSG__DETAIL__GOAL__BUILDER_HPP_
