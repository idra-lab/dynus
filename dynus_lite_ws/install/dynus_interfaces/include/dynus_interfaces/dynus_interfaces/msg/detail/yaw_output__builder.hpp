// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynus_interfaces:msg/YawOutput.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__YAW_OUTPUT__BUILDER_HPP_
#define DYNUS_INTERFACES__MSG__DETAIL__YAW_OUTPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynus_interfaces/msg/detail/yaw_output__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynus_interfaces
{

namespace msg
{

namespace builder
{

class Init_YawOutput_knots
{
public:
  explicit Init_YawOutput_knots(::dynus_interfaces::msg::YawOutput & msg)
  : msg_(msg)
  {}
  ::dynus_interfaces::msg::YawOutput knots(::dynus_interfaces::msg::YawOutput::_knots_type arg)
  {
    msg_.knots = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynus_interfaces::msg::YawOutput msg_;
};

class Init_YawOutput_control_points
{
public:
  explicit Init_YawOutput_control_points(::dynus_interfaces::msg::YawOutput & msg)
  : msg_(msg)
  {}
  Init_YawOutput_knots control_points(::dynus_interfaces::msg::YawOutput::_control_points_type arg)
  {
    msg_.control_points = std::move(arg);
    return Init_YawOutput_knots(msg_);
  }

private:
  ::dynus_interfaces::msg::YawOutput msg_;
};

class Init_YawOutput_sequence
{
public:
  explicit Init_YawOutput_sequence(::dynus_interfaces::msg::YawOutput & msg)
  : msg_(msg)
  {}
  Init_YawOutput_control_points sequence(::dynus_interfaces::msg::YawOutput::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return Init_YawOutput_control_points(msg_);
  }

private:
  ::dynus_interfaces::msg::YawOutput msg_;
};

class Init_YawOutput_header
{
public:
  Init_YawOutput_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YawOutput_sequence header(::dynus_interfaces::msg::YawOutput::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_YawOutput_sequence(msg_);
  }

private:
  ::dynus_interfaces::msg::YawOutput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynus_interfaces::msg::YawOutput>()
{
  return dynus_interfaces::msg::builder::Init_YawOutput_header();
}

}  // namespace dynus_interfaces

#endif  // DYNUS_INTERFACES__MSG__DETAIL__YAW_OUTPUT__BUILDER_HPP_
