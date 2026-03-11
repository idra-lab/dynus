// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from snapstack_msgs2:msg/CommAge.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__COMM_AGE__BUILDER_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__COMM_AGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "snapstack_msgs2/msg/detail/comm_age__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace snapstack_msgs2
{

namespace msg
{

namespace builder
{

class Init_CommAge_goal_age_secs
{
public:
  explicit Init_CommAge_goal_age_secs(::snapstack_msgs2::msg::CommAge & msg)
  : msg_(msg)
  {}
  ::snapstack_msgs2::msg::CommAge goal_age_secs(::snapstack_msgs2::msg::CommAge::_goal_age_secs_type arg)
  {
    msg_.goal_age_secs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snapstack_msgs2::msg::CommAge msg_;
};

class Init_CommAge_vicon_age_secs
{
public:
  explicit Init_CommAge_vicon_age_secs(::snapstack_msgs2::msg::CommAge & msg)
  : msg_(msg)
  {}
  Init_CommAge_goal_age_secs vicon_age_secs(::snapstack_msgs2::msg::CommAge::_vicon_age_secs_type arg)
  {
    msg_.vicon_age_secs = std::move(arg);
    return Init_CommAge_goal_age_secs(msg_);
  }

private:
  ::snapstack_msgs2::msg::CommAge msg_;
};

class Init_CommAge_header
{
public:
  Init_CommAge_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommAge_vicon_age_secs header(::snapstack_msgs2::msg::CommAge::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CommAge_vicon_age_secs(msg_);
  }

private:
  ::snapstack_msgs2::msg::CommAge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::snapstack_msgs2::msg::CommAge>()
{
  return snapstack_msgs2::msg::builder::Init_CommAge_header();
}

}  // namespace snapstack_msgs2

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__COMM_AGE__BUILDER_HPP_
