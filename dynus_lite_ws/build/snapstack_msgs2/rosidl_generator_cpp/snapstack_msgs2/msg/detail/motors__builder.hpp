// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from snapstack_msgs2:msg/Motors.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__MOTORS__BUILDER_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__MOTORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "snapstack_msgs2/msg/detail/motors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace snapstack_msgs2
{

namespace msg
{

namespace builder
{

class Init_Motors_m8
{
public:
  explicit Init_Motors_m8(::snapstack_msgs2::msg::Motors & msg)
  : msg_(msg)
  {}
  ::snapstack_msgs2::msg::Motors m8(::snapstack_msgs2::msg::Motors::_m8_type arg)
  {
    msg_.m8 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snapstack_msgs2::msg::Motors msg_;
};

class Init_Motors_m7
{
public:
  explicit Init_Motors_m7(::snapstack_msgs2::msg::Motors & msg)
  : msg_(msg)
  {}
  Init_Motors_m8 m7(::snapstack_msgs2::msg::Motors::_m7_type arg)
  {
    msg_.m7 = std::move(arg);
    return Init_Motors_m8(msg_);
  }

private:
  ::snapstack_msgs2::msg::Motors msg_;
};

class Init_Motors_m6
{
public:
  explicit Init_Motors_m6(::snapstack_msgs2::msg::Motors & msg)
  : msg_(msg)
  {}
  Init_Motors_m7 m6(::snapstack_msgs2::msg::Motors::_m6_type arg)
  {
    msg_.m6 = std::move(arg);
    return Init_Motors_m7(msg_);
  }

private:
  ::snapstack_msgs2::msg::Motors msg_;
};

class Init_Motors_m5
{
public:
  explicit Init_Motors_m5(::snapstack_msgs2::msg::Motors & msg)
  : msg_(msg)
  {}
  Init_Motors_m6 m5(::snapstack_msgs2::msg::Motors::_m5_type arg)
  {
    msg_.m5 = std::move(arg);
    return Init_Motors_m6(msg_);
  }

private:
  ::snapstack_msgs2::msg::Motors msg_;
};

class Init_Motors_m4
{
public:
  explicit Init_Motors_m4(::snapstack_msgs2::msg::Motors & msg)
  : msg_(msg)
  {}
  Init_Motors_m5 m4(::snapstack_msgs2::msg::Motors::_m4_type arg)
  {
    msg_.m4 = std::move(arg);
    return Init_Motors_m5(msg_);
  }

private:
  ::snapstack_msgs2::msg::Motors msg_;
};

class Init_Motors_m3
{
public:
  explicit Init_Motors_m3(::snapstack_msgs2::msg::Motors & msg)
  : msg_(msg)
  {}
  Init_Motors_m4 m3(::snapstack_msgs2::msg::Motors::_m3_type arg)
  {
    msg_.m3 = std::move(arg);
    return Init_Motors_m4(msg_);
  }

private:
  ::snapstack_msgs2::msg::Motors msg_;
};

class Init_Motors_m2
{
public:
  explicit Init_Motors_m2(::snapstack_msgs2::msg::Motors & msg)
  : msg_(msg)
  {}
  Init_Motors_m3 m2(::snapstack_msgs2::msg::Motors::_m2_type arg)
  {
    msg_.m2 = std::move(arg);
    return Init_Motors_m3(msg_);
  }

private:
  ::snapstack_msgs2::msg::Motors msg_;
};

class Init_Motors_m1
{
public:
  explicit Init_Motors_m1(::snapstack_msgs2::msg::Motors & msg)
  : msg_(msg)
  {}
  Init_Motors_m2 m1(::snapstack_msgs2::msg::Motors::_m1_type arg)
  {
    msg_.m1 = std::move(arg);
    return Init_Motors_m2(msg_);
  }

private:
  ::snapstack_msgs2::msg::Motors msg_;
};

class Init_Motors_header
{
public:
  Init_Motors_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motors_m1 header(::snapstack_msgs2::msg::Motors::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Motors_m1(msg_);
  }

private:
  ::snapstack_msgs2::msg::Motors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::snapstack_msgs2::msg::Motors>()
{
  return snapstack_msgs2::msg::builder::Init_Motors_header();
}

}  // namespace snapstack_msgs2

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__MOTORS__BUILDER_HPP_
