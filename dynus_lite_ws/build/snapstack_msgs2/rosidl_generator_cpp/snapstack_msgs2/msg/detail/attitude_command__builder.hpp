// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from snapstack_msgs2:msg/AttitudeCommand.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__ATTITUDE_COMMAND__BUILDER_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__ATTITUDE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "snapstack_msgs2/msg/detail/attitude_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace snapstack_msgs2
{

namespace msg
{

namespace builder
{

class Init_AttitudeCommand_power
{
public:
  explicit Init_AttitudeCommand_power(::snapstack_msgs2::msg::AttitudeCommand & msg)
  : msg_(msg)
  {}
  ::snapstack_msgs2::msg::AttitudeCommand power(::snapstack_msgs2::msg::AttitudeCommand::_power_type arg)
  {
    msg_.power = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snapstack_msgs2::msg::AttitudeCommand msg_;
};

class Init_AttitudeCommand_f_w
{
public:
  explicit Init_AttitudeCommand_f_w(::snapstack_msgs2::msg::AttitudeCommand & msg)
  : msg_(msg)
  {}
  Init_AttitudeCommand_power f_w(::snapstack_msgs2::msg::AttitudeCommand::_f_w_type arg)
  {
    msg_.f_w = std::move(arg);
    return Init_AttitudeCommand_power(msg_);
  }

private:
  ::snapstack_msgs2::msg::AttitudeCommand msg_;
};

class Init_AttitudeCommand_w
{
public:
  explicit Init_AttitudeCommand_w(::snapstack_msgs2::msg::AttitudeCommand & msg)
  : msg_(msg)
  {}
  Init_AttitudeCommand_f_w w(::snapstack_msgs2::msg::AttitudeCommand::_w_type arg)
  {
    msg_.w = std::move(arg);
    return Init_AttitudeCommand_f_w(msg_);
  }

private:
  ::snapstack_msgs2::msg::AttitudeCommand msg_;
};

class Init_AttitudeCommand_q
{
public:
  explicit Init_AttitudeCommand_q(::snapstack_msgs2::msg::AttitudeCommand & msg)
  : msg_(msg)
  {}
  Init_AttitudeCommand_w q(::snapstack_msgs2::msg::AttitudeCommand::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_AttitudeCommand_w(msg_);
  }

private:
  ::snapstack_msgs2::msg::AttitudeCommand msg_;
};

class Init_AttitudeCommand_header
{
public:
  Init_AttitudeCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AttitudeCommand_q header(::snapstack_msgs2::msg::AttitudeCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AttitudeCommand_q(msg_);
  }

private:
  ::snapstack_msgs2::msg::AttitudeCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::snapstack_msgs2::msg::AttitudeCommand>()
{
  return snapstack_msgs2::msg::builder::Init_AttitudeCommand_header();
}

}  // namespace snapstack_msgs2

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__ATTITUDE_COMMAND__BUILDER_HPP_
