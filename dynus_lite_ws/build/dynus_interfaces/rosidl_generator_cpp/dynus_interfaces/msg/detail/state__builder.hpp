// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynus_interfaces:msg/State.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__STATE__BUILDER_HPP_
#define DYNUS_INTERFACES__MSG__DETAIL__STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynus_interfaces/msg/detail/state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynus_interfaces
{

namespace msg
{

namespace builder
{

class Init_State_quat
{
public:
  explicit Init_State_quat(::dynus_interfaces::msg::State & msg)
  : msg_(msg)
  {}
  ::dynus_interfaces::msg::State quat(::dynus_interfaces::msg::State::_quat_type arg)
  {
    msg_.quat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynus_interfaces::msg::State msg_;
};

class Init_State_vel
{
public:
  explicit Init_State_vel(::dynus_interfaces::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_quat vel(::dynus_interfaces::msg::State::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_State_quat(msg_);
  }

private:
  ::dynus_interfaces::msg::State msg_;
};

class Init_State_pos
{
public:
  explicit Init_State_pos(::dynus_interfaces::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_vel pos(::dynus_interfaces::msg::State::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_State_vel(msg_);
  }

private:
  ::dynus_interfaces::msg::State msg_;
};

class Init_State_header
{
public:
  Init_State_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_State_pos header(::dynus_interfaces::msg::State::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_State_pos(msg_);
  }

private:
  ::dynus_interfaces::msg::State msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynus_interfaces::msg::State>()
{
  return dynus_interfaces::msg::builder::Init_State_header();
}

}  // namespace dynus_interfaces

#endif  // DYNUS_INTERFACES__MSG__DETAIL__STATE__BUILDER_HPP_
