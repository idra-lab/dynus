// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynus_interfaces:msg/Mode.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__MODE__BUILDER_HPP_
#define DYNUS_INTERFACES__MSG__DETAIL__MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynus_interfaces/msg/detail/mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynus_interfaces
{

namespace msg
{

namespace builder
{

class Init_Mode_mode
{
public:
  explicit Init_Mode_mode(::dynus_interfaces::msg::Mode & msg)
  : msg_(msg)
  {}
  ::dynus_interfaces::msg::Mode mode(::dynus_interfaces::msg::Mode::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynus_interfaces::msg::Mode msg_;
};

class Init_Mode_header
{
public:
  Init_Mode_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mode_mode header(::dynus_interfaces::msg::Mode::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Mode_mode(msg_);
  }

private:
  ::dynus_interfaces::msg::Mode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynus_interfaces::msg::Mode>()
{
  return dynus_interfaces::msg::builder::Init_Mode_header();
}

}  // namespace dynus_interfaces

#endif  // DYNUS_INTERFACES__MSG__DETAIL__MODE__BUILDER_HPP_
