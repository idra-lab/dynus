// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynus_interfaces:msg/QuinticPWPTraj.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__QUINTIC_PWP_TRAJ__BUILDER_HPP_
#define DYNUS_INTERFACES__MSG__DETAIL__QUINTIC_PWP_TRAJ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynus_interfaces/msg/detail/quintic_pwp_traj__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynus_interfaces
{

namespace msg
{

namespace builder
{

class Init_QuinticPWPTraj_coeff_z
{
public:
  explicit Init_QuinticPWPTraj_coeff_z(::dynus_interfaces::msg::QuinticPWPTraj & msg)
  : msg_(msg)
  {}
  ::dynus_interfaces::msg::QuinticPWPTraj coeff_z(::dynus_interfaces::msg::QuinticPWPTraj::_coeff_z_type arg)
  {
    msg_.coeff_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynus_interfaces::msg::QuinticPWPTraj msg_;
};

class Init_QuinticPWPTraj_coeff_y
{
public:
  explicit Init_QuinticPWPTraj_coeff_y(::dynus_interfaces::msg::QuinticPWPTraj & msg)
  : msg_(msg)
  {}
  Init_QuinticPWPTraj_coeff_z coeff_y(::dynus_interfaces::msg::QuinticPWPTraj::_coeff_y_type arg)
  {
    msg_.coeff_y = std::move(arg);
    return Init_QuinticPWPTraj_coeff_z(msg_);
  }

private:
  ::dynus_interfaces::msg::QuinticPWPTraj msg_;
};

class Init_QuinticPWPTraj_coeff_x
{
public:
  explicit Init_QuinticPWPTraj_coeff_x(::dynus_interfaces::msg::QuinticPWPTraj & msg)
  : msg_(msg)
  {}
  Init_QuinticPWPTraj_coeff_y coeff_x(::dynus_interfaces::msg::QuinticPWPTraj::_coeff_x_type arg)
  {
    msg_.coeff_x = std::move(arg);
    return Init_QuinticPWPTraj_coeff_y(msg_);
  }

private:
  ::dynus_interfaces::msg::QuinticPWPTraj msg_;
};

class Init_QuinticPWPTraj_times
{
public:
  Init_QuinticPWPTraj_times()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuinticPWPTraj_coeff_x times(::dynus_interfaces::msg::QuinticPWPTraj::_times_type arg)
  {
    msg_.times = std::move(arg);
    return Init_QuinticPWPTraj_coeff_x(msg_);
  }

private:
  ::dynus_interfaces::msg::QuinticPWPTraj msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynus_interfaces::msg::QuinticPWPTraj>()
{
  return dynus_interfaces::msg::builder::Init_QuinticPWPTraj_times();
}

}  // namespace dynus_interfaces

#endif  // DYNUS_INTERFACES__MSG__DETAIL__QUINTIC_PWP_TRAJ__BUILDER_HPP_
