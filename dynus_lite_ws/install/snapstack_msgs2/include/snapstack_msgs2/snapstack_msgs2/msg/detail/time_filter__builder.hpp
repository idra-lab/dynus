// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from snapstack_msgs2:msg/TimeFilter.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__TIME_FILTER__BUILDER_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__TIME_FILTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "snapstack_msgs2/msg/detail/time_filter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace snapstack_msgs2
{

namespace msg
{

namespace builder
{

class Init_TimeFilter_lower
{
public:
  explicit Init_TimeFilter_lower(::snapstack_msgs2::msg::TimeFilter & msg)
  : msg_(msg)
  {}
  ::snapstack_msgs2::msg::TimeFilter lower(::snapstack_msgs2::msg::TimeFilter::_lower_type arg)
  {
    msg_.lower = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snapstack_msgs2::msg::TimeFilter msg_;
};

class Init_TimeFilter_upper
{
public:
  explicit Init_TimeFilter_upper(::snapstack_msgs2::msg::TimeFilter & msg)
  : msg_(msg)
  {}
  Init_TimeFilter_lower upper(::snapstack_msgs2::msg::TimeFilter::_upper_type arg)
  {
    msg_.upper = std::move(arg);
    return Init_TimeFilter_lower(msg_);
  }

private:
  ::snapstack_msgs2::msg::TimeFilter msg_;
};

class Init_TimeFilter_skipped
{
public:
  explicit Init_TimeFilter_skipped(::snapstack_msgs2::msg::TimeFilter & msg)
  : msg_(msg)
  {}
  Init_TimeFilter_upper skipped(::snapstack_msgs2::msg::TimeFilter::_skipped_type arg)
  {
    msg_.skipped = std::move(arg);
    return Init_TimeFilter_upper(msg_);
  }

private:
  ::snapstack_msgs2::msg::TimeFilter msg_;
};

class Init_TimeFilter_delayed_dt
{
public:
  explicit Init_TimeFilter_delayed_dt(::snapstack_msgs2::msg::TimeFilter & msg)
  : msg_(msg)
  {}
  Init_TimeFilter_skipped delayed_dt(::snapstack_msgs2::msg::TimeFilter::_delayed_dt_type arg)
  {
    msg_.delayed_dt = std::move(arg);
    return Init_TimeFilter_skipped(msg_);
  }

private:
  ::snapstack_msgs2::msg::TimeFilter msg_;
};

class Init_TimeFilter_dt
{
public:
  explicit Init_TimeFilter_dt(::snapstack_msgs2::msg::TimeFilter & msg)
  : msg_(msg)
  {}
  Init_TimeFilter_delayed_dt dt(::snapstack_msgs2::msg::TimeFilter::_dt_type arg)
  {
    msg_.dt = std::move(arg);
    return Init_TimeFilter_delayed_dt(msg_);
  }

private:
  ::snapstack_msgs2::msg::TimeFilter msg_;
};

class Init_TimeFilter_header
{
public:
  Init_TimeFilter_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimeFilter_dt header(::snapstack_msgs2::msg::TimeFilter::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TimeFilter_dt(msg_);
  }

private:
  ::snapstack_msgs2::msg::TimeFilter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::snapstack_msgs2::msg::TimeFilter>()
{
  return snapstack_msgs2::msg::builder::Init_TimeFilter_header();
}

}  // namespace snapstack_msgs2

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__TIME_FILTER__BUILDER_HPP_
