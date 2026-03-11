// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from snapstack_msgs2:msg/VioFilterState.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__VIO_FILTER_STATE__BUILDER_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__VIO_FILTER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "snapstack_msgs2/msg/detail/vio_filter_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace snapstack_msgs2
{

namespace msg
{

namespace builder
{

class Init_VioFilterState_error_cov
{
public:
  explicit Init_VioFilterState_error_cov(::snapstack_msgs2::msg::VioFilterState & msg)
  : msg_(msg)
  {}
  ::snapstack_msgs2::msg::VioFilterState error_cov(::snapstack_msgs2::msg::VioFilterState::_error_cov_type arg)
  {
    msg_.error_cov = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snapstack_msgs2::msg::VioFilterState msg_;
};

class Init_VioFilterState_n
{
public:
  explicit Init_VioFilterState_n(::snapstack_msgs2::msg::VioFilterState & msg)
  : msg_(msg)
  {}
  Init_VioFilterState_error_cov n(::snapstack_msgs2::msg::VioFilterState::_n_type arg)
  {
    msg_.n = std::move(arg);
    return Init_VioFilterState_error_cov(msg_);
  }

private:
  ::snapstack_msgs2::msg::VioFilterState msg_;
};

class Init_VioFilterState_accel_meas
{
public:
  explicit Init_VioFilterState_accel_meas(::snapstack_msgs2::msg::VioFilterState & msg)
  : msg_(msg)
  {}
  Init_VioFilterState_n accel_meas(::snapstack_msgs2::msg::VioFilterState::_accel_meas_type arg)
  {
    msg_.accel_meas = std::move(arg);
    return Init_VioFilterState_n(msg_);
  }

private:
  ::snapstack_msgs2::msg::VioFilterState msg_;
};

class Init_VioFilterState_extrinsics
{
public:
  explicit Init_VioFilterState_extrinsics(::snapstack_msgs2::msg::VioFilterState & msg)
  : msg_(msg)
  {}
  Init_VioFilterState_accel_meas extrinsics(::snapstack_msgs2::msg::VioFilterState::_extrinsics_type arg)
  {
    msg_.extrinsics = std::move(arg);
    return Init_VioFilterState_accel_meas(msg_);
  }

private:
  ::snapstack_msgs2::msg::VioFilterState msg_;
};

class Init_VioFilterState_ba
{
public:
  explicit Init_VioFilterState_ba(::snapstack_msgs2::msg::VioFilterState & msg)
  : msg_(msg)
  {}
  Init_VioFilterState_extrinsics ba(::snapstack_msgs2::msg::VioFilterState::_ba_type arg)
  {
    msg_.ba = std::move(arg);
    return Init_VioFilterState_extrinsics(msg_);
  }

private:
  ::snapstack_msgs2::msg::VioFilterState msg_;
};

class Init_VioFilterState_bw
{
public:
  explicit Init_VioFilterState_bw(::snapstack_msgs2::msg::VioFilterState & msg)
  : msg_(msg)
  {}
  Init_VioFilterState_ba bw(::snapstack_msgs2::msg::VioFilterState::_bw_type arg)
  {
    msg_.bw = std::move(arg);
    return Init_VioFilterState_ba(msg_);
  }

private:
  ::snapstack_msgs2::msg::VioFilterState msg_;
};

class Init_VioFilterState_twist
{
public:
  explicit Init_VioFilterState_twist(::snapstack_msgs2::msg::VioFilterState & msg)
  : msg_(msg)
  {}
  Init_VioFilterState_bw twist(::snapstack_msgs2::msg::VioFilterState::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_VioFilterState_bw(msg_);
  }

private:
  ::snapstack_msgs2::msg::VioFilterState msg_;
};

class Init_VioFilterState_pose
{
public:
  explicit Init_VioFilterState_pose(::snapstack_msgs2::msg::VioFilterState & msg)
  : msg_(msg)
  {}
  Init_VioFilterState_twist pose(::snapstack_msgs2::msg::VioFilterState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_VioFilterState_twist(msg_);
  }

private:
  ::snapstack_msgs2::msg::VioFilterState msg_;
};

class Init_VioFilterState_header
{
public:
  Init_VioFilterState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VioFilterState_pose header(::snapstack_msgs2::msg::VioFilterState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VioFilterState_pose(msg_);
  }

private:
  ::snapstack_msgs2::msg::VioFilterState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::snapstack_msgs2::msg::VioFilterState>()
{
  return snapstack_msgs2::msg::builder::Init_VioFilterState_header();
}

}  // namespace snapstack_msgs2

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__VIO_FILTER_STATE__BUILDER_HPP_
