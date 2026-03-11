// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from snapstack_msgs2:msg/QuadFlightMode.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__QUAD_FLIGHT_MODE__BUILDER_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__QUAD_FLIGHT_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "snapstack_msgs2/msg/detail/quad_flight_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace snapstack_msgs2
{

namespace msg
{

namespace builder
{

class Init_QuadFlightMode_mode
{
public:
  explicit Init_QuadFlightMode_mode(::snapstack_msgs2::msg::QuadFlightMode & msg)
  : msg_(msg)
  {}
  ::snapstack_msgs2::msg::QuadFlightMode mode(::snapstack_msgs2::msg::QuadFlightMode::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snapstack_msgs2::msg::QuadFlightMode msg_;
};

class Init_QuadFlightMode_header
{
public:
  Init_QuadFlightMode_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuadFlightMode_mode header(::snapstack_msgs2::msg::QuadFlightMode::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_QuadFlightMode_mode(msg_);
  }

private:
  ::snapstack_msgs2::msg::QuadFlightMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::snapstack_msgs2::msg::QuadFlightMode>()
{
  return snapstack_msgs2::msg::builder::Init_QuadFlightMode_header();
}

}  // namespace snapstack_msgs2

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__QUAD_FLIGHT_MODE__BUILDER_HPP_
