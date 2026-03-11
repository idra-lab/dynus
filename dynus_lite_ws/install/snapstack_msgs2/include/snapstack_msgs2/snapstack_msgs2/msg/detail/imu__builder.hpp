// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from snapstack_msgs2:msg/IMU.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__IMU__BUILDER_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__IMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "snapstack_msgs2/msg/detail/imu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace snapstack_msgs2
{

namespace msg
{

namespace builder
{

class Init_IMU_loop_time
{
public:
  explicit Init_IMU_loop_time(::snapstack_msgs2::msg::IMU & msg)
  : msg_(msg)
  {}
  ::snapstack_msgs2::msg::IMU loop_time(::snapstack_msgs2::msg::IMU::_loop_time_type arg)
  {
    msg_.loop_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snapstack_msgs2::msg::IMU msg_;
};

class Init_IMU_accel
{
public:
  explicit Init_IMU_accel(::snapstack_msgs2::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_loop_time accel(::snapstack_msgs2::msg::IMU::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return Init_IMU_loop_time(msg_);
  }

private:
  ::snapstack_msgs2::msg::IMU msg_;
};

class Init_IMU_gyro
{
public:
  explicit Init_IMU_gyro(::snapstack_msgs2::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_accel gyro(::snapstack_msgs2::msg::IMU::_gyro_type arg)
  {
    msg_.gyro = std::move(arg);
    return Init_IMU_accel(msg_);
  }

private:
  ::snapstack_msgs2::msg::IMU msg_;
};

class Init_IMU_imu_stamp
{
public:
  explicit Init_IMU_imu_stamp(::snapstack_msgs2::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_gyro imu_stamp(::snapstack_msgs2::msg::IMU::_imu_stamp_type arg)
  {
    msg_.imu_stamp = std::move(arg);
    return Init_IMU_gyro(msg_);
  }

private:
  ::snapstack_msgs2::msg::IMU msg_;
};

class Init_IMU_header
{
public:
  Init_IMU_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IMU_imu_stamp header(::snapstack_msgs2::msg::IMU::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IMU_imu_stamp(msg_);
  }

private:
  ::snapstack_msgs2::msg::IMU msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::snapstack_msgs2::msg::IMU>()
{
  return snapstack_msgs2::msg::builder::Init_IMU_header();
}

}  // namespace snapstack_msgs2

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__IMU__BUILDER_HPP_
