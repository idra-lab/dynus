// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from snapstack_msgs2:msg/Goal.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__GOAL__BUILDER_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "snapstack_msgs2/msg/detail/goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace snapstack_msgs2
{

namespace msg
{

namespace builder
{

class Init_Goal_mode_z
{
public:
  explicit Init_Goal_mode_z(::snapstack_msgs2::msg::Goal & msg)
  : msg_(msg)
  {}
  ::snapstack_msgs2::msg::Goal mode_z(::snapstack_msgs2::msg::Goal::_mode_z_type arg)
  {
    msg_.mode_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snapstack_msgs2::msg::Goal msg_;
};

class Init_Goal_mode_xy
{
public:
  explicit Init_Goal_mode_xy(::snapstack_msgs2::msg::Goal & msg)
  : msg_(msg)
  {}
  Init_Goal_mode_z mode_xy(::snapstack_msgs2::msg::Goal::_mode_xy_type arg)
  {
    msg_.mode_xy = std::move(arg);
    return Init_Goal_mode_z(msg_);
  }

private:
  ::snapstack_msgs2::msg::Goal msg_;
};

class Init_Goal_power
{
public:
  explicit Init_Goal_power(::snapstack_msgs2::msg::Goal & msg)
  : msg_(msg)
  {}
  Init_Goal_mode_xy power(::snapstack_msgs2::msg::Goal::_power_type arg)
  {
    msg_.power = std::move(arg);
    return Init_Goal_mode_xy(msg_);
  }

private:
  ::snapstack_msgs2::msg::Goal msg_;
};

class Init_Goal_dpsi
{
public:
  explicit Init_Goal_dpsi(::snapstack_msgs2::msg::Goal & msg)
  : msg_(msg)
  {}
  Init_Goal_power dpsi(::snapstack_msgs2::msg::Goal::_dpsi_type arg)
  {
    msg_.dpsi = std::move(arg);
    return Init_Goal_power(msg_);
  }

private:
  ::snapstack_msgs2::msg::Goal msg_;
};

class Init_Goal_psi
{
public:
  explicit Init_Goal_psi(::snapstack_msgs2::msg::Goal & msg)
  : msg_(msg)
  {}
  Init_Goal_dpsi psi(::snapstack_msgs2::msg::Goal::_psi_type arg)
  {
    msg_.psi = std::move(arg);
    return Init_Goal_dpsi(msg_);
  }

private:
  ::snapstack_msgs2::msg::Goal msg_;
};

class Init_Goal_j
{
public:
  explicit Init_Goal_j(::snapstack_msgs2::msg::Goal & msg)
  : msg_(msg)
  {}
  Init_Goal_psi j(::snapstack_msgs2::msg::Goal::_j_type arg)
  {
    msg_.j = std::move(arg);
    return Init_Goal_psi(msg_);
  }

private:
  ::snapstack_msgs2::msg::Goal msg_;
};

class Init_Goal_a
{
public:
  explicit Init_Goal_a(::snapstack_msgs2::msg::Goal & msg)
  : msg_(msg)
  {}
  Init_Goal_j a(::snapstack_msgs2::msg::Goal::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Goal_j(msg_);
  }

private:
  ::snapstack_msgs2::msg::Goal msg_;
};

class Init_Goal_v
{
public:
  explicit Init_Goal_v(::snapstack_msgs2::msg::Goal & msg)
  : msg_(msg)
  {}
  Init_Goal_a v(::snapstack_msgs2::msg::Goal::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_Goal_a(msg_);
  }

private:
  ::snapstack_msgs2::msg::Goal msg_;
};

class Init_Goal_p
{
public:
  explicit Init_Goal_p(::snapstack_msgs2::msg::Goal & msg)
  : msg_(msg)
  {}
  Init_Goal_v p(::snapstack_msgs2::msg::Goal::_p_type arg)
  {
    msg_.p = std::move(arg);
    return Init_Goal_v(msg_);
  }

private:
  ::snapstack_msgs2::msg::Goal msg_;
};

class Init_Goal_header
{
public:
  Init_Goal_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Goal_p header(::snapstack_msgs2::msg::Goal::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Goal_p(msg_);
  }

private:
  ::snapstack_msgs2::msg::Goal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::snapstack_msgs2::msg::Goal>()
{
  return snapstack_msgs2::msg::builder::Init_Goal_header();
}

}  // namespace snapstack_msgs2

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__GOAL__BUILDER_HPP_
