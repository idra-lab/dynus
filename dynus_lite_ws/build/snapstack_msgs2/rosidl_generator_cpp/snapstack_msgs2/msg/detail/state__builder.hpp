// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from snapstack_msgs2:msg/State.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__STATE__BUILDER_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "snapstack_msgs2/msg/detail/state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace snapstack_msgs2
{

namespace msg
{

namespace builder
{

class Init_State_gbias
{
public:
  explicit Init_State_gbias(::snapstack_msgs2::msg::State & msg)
  : msg_(msg)
  {}
  ::snapstack_msgs2::msg::State gbias(::snapstack_msgs2::msg::State::_gbias_type arg)
  {
    msg_.gbias = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snapstack_msgs2::msg::State msg_;
};

class Init_State_abias
{
public:
  explicit Init_State_abias(::snapstack_msgs2::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_gbias abias(::snapstack_msgs2::msg::State::_abias_type arg)
  {
    msg_.abias = std::move(arg);
    return Init_State_gbias(msg_);
  }

private:
  ::snapstack_msgs2::msg::State msg_;
};

class Init_State_w
{
public:
  explicit Init_State_w(::snapstack_msgs2::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_abias w(::snapstack_msgs2::msg::State::_w_type arg)
  {
    msg_.w = std::move(arg);
    return Init_State_abias(msg_);
  }

private:
  ::snapstack_msgs2::msg::State msg_;
};

class Init_State_quat
{
public:
  explicit Init_State_quat(::snapstack_msgs2::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_w quat(::snapstack_msgs2::msg::State::_quat_type arg)
  {
    msg_.quat = std::move(arg);
    return Init_State_w(msg_);
  }

private:
  ::snapstack_msgs2::msg::State msg_;
};

class Init_State_vel
{
public:
  explicit Init_State_vel(::snapstack_msgs2::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_quat vel(::snapstack_msgs2::msg::State::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_State_quat(msg_);
  }

private:
  ::snapstack_msgs2::msg::State msg_;
};

class Init_State_pos
{
public:
  explicit Init_State_pos(::snapstack_msgs2::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_vel pos(::snapstack_msgs2::msg::State::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_State_vel(msg_);
  }

private:
  ::snapstack_msgs2::msg::State msg_;
};

class Init_State_state_stamp
{
public:
  explicit Init_State_state_stamp(::snapstack_msgs2::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_pos state_stamp(::snapstack_msgs2::msg::State::_state_stamp_type arg)
  {
    msg_.state_stamp = std::move(arg);
    return Init_State_pos(msg_);
  }

private:
  ::snapstack_msgs2::msg::State msg_;
};

class Init_State_header
{
public:
  Init_State_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_State_state_stamp header(::snapstack_msgs2::msg::State::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_State_state_stamp(msg_);
  }

private:
  ::snapstack_msgs2::msg::State msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::snapstack_msgs2::msg::State>()
{
  return snapstack_msgs2::msg::builder::Init_State_header();
}

}  // namespace snapstack_msgs2

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__STATE__BUILDER_HPP_
