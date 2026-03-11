// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from snapstack_msgs2:msg/ControlLog.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__CONTROL_LOG__BUILDER_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__CONTROL_LOG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "snapstack_msgs2/msg/detail/control_log__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace snapstack_msgs2
{

namespace msg
{

namespace builder
{

class Init_ControlLog_power
{
public:
  explicit Init_ControlLog_power(::snapstack_msgs2::msg::ControlLog & msg)
  : msg_(msg)
  {}
  ::snapstack_msgs2::msg::ControlLog power(::snapstack_msgs2::msg::ControlLog::_power_type arg)
  {
    msg_.power = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snapstack_msgs2::msg::ControlLog msg_;
};

class Init_ControlLog_f_w
{
public:
  explicit Init_ControlLog_f_w(::snapstack_msgs2::msg::ControlLog & msg)
  : msg_(msg)
  {}
  Init_ControlLog_power f_w(::snapstack_msgs2::msg::ControlLog::_f_w_type arg)
  {
    msg_.f_w = std::move(arg);
    return Init_ControlLog_power(msg_);
  }

private:
  ::snapstack_msgs2::msg::ControlLog msg_;
};

class Init_ControlLog_w_ref
{
public:
  explicit Init_ControlLog_w_ref(::snapstack_msgs2::msg::ControlLog & msg)
  : msg_(msg)
  {}
  Init_ControlLog_f_w w_ref(::snapstack_msgs2::msg::ControlLog::_w_ref_type arg)
  {
    msg_.w_ref = std::move(arg);
    return Init_ControlLog_f_w(msg_);
  }

private:
  ::snapstack_msgs2::msg::ControlLog msg_;
};

class Init_ControlLog_w
{
public:
  explicit Init_ControlLog_w(::snapstack_msgs2::msg::ControlLog & msg)
  : msg_(msg)
  {}
  Init_ControlLog_w_ref w(::snapstack_msgs2::msg::ControlLog::_w_type arg)
  {
    msg_.w = std::move(arg);
    return Init_ControlLog_w_ref(msg_);
  }

private:
  ::snapstack_msgs2::msg::ControlLog msg_;
};

class Init_ControlLog_rpy_ref
{
public:
  explicit Init_ControlLog_rpy_ref(::snapstack_msgs2::msg::ControlLog & msg)
  : msg_(msg)
  {}
  Init_ControlLog_w rpy_ref(::snapstack_msgs2::msg::ControlLog::_rpy_ref_type arg)
  {
    msg_.rpy_ref = std::move(arg);
    return Init_ControlLog_w(msg_);
  }

private:
  ::snapstack_msgs2::msg::ControlLog msg_;
};

class Init_ControlLog_rpy
{
public:
  explicit Init_ControlLog_rpy(::snapstack_msgs2::msg::ControlLog & msg)
  : msg_(msg)
  {}
  Init_ControlLog_rpy_ref rpy(::snapstack_msgs2::msg::ControlLog::_rpy_type arg)
  {
    msg_.rpy = std::move(arg);
    return Init_ControlLog_rpy_ref(msg_);
  }

private:
  ::snapstack_msgs2::msg::ControlLog msg_;
};

class Init_ControlLog_q_ref
{
public:
  explicit Init_ControlLog_q_ref(::snapstack_msgs2::msg::ControlLog & msg)
  : msg_(msg)
  {}
  Init_ControlLog_rpy q_ref(::snapstack_msgs2::msg::ControlLog::_q_ref_type arg)
  {
    msg_.q_ref = std::move(arg);
    return Init_ControlLog_rpy(msg_);
  }

private:
  ::snapstack_msgs2::msg::ControlLog msg_;
};

class Init_ControlLog_q
{
public:
  explicit Init_ControlLog_q(::snapstack_msgs2::msg::ControlLog & msg)
  : msg_(msg)
  {}
  Init_ControlLog_q_ref q(::snapstack_msgs2::msg::ControlLog::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_ControlLog_q_ref(msg_);
  }

private:
  ::snapstack_msgs2::msg::ControlLog msg_;
};

class Init_ControlLog_j_fb
{
public:
  explicit Init_ControlLog_j_fb(::snapstack_msgs2::msg::ControlLog & msg)
  : msg_(msg)
  {}
  Init_ControlLog_q j_fb(::snapstack_msgs2::msg::ControlLog::_j_fb_type arg)
  {
    msg_.j_fb = std::move(arg);
    return Init_ControlLog_q(msg_);
  }

private:
  ::snapstack_msgs2::msg::ControlLog msg_;
};

class Init_ControlLog_j_ff
{
public:
  explicit Init_ControlLog_j_ff(::snapstack_msgs2::msg::ControlLog & msg)
  : msg_(msg)
  {}
  Init_ControlLog_j_fb j_ff(::snapstack_msgs2::msg::ControlLog::_j_ff_type arg)
  {
    msg_.j_ff = std::move(arg);
    return Init_ControlLog_j_fb(msg_);
  }

private:
  ::snapstack_msgs2::msg::ControlLog msg_;
};

class Init_ControlLog_a_fb
{
public:
  explicit Init_ControlLog_a_fb(::snapstack_msgs2::msg::ControlLog & msg)
  : msg_(msg)
  {}
  Init_ControlLog_j_ff a_fb(::snapstack_msgs2::msg::ControlLog::_a_fb_type arg)
  {
    msg_.a_fb = std::move(arg);
    return Init_ControlLog_j_ff(msg_);
  }

private:
  ::snapstack_msgs2::msg::ControlLog msg_;
};

class Init_ControlLog_a_ff
{
public:
  explicit Init_ControlLog_a_ff(::snapstack_msgs2::msg::ControlLog & msg)
  : msg_(msg)
  {}
  Init_ControlLog_a_fb a_ff(::snapstack_msgs2::msg::ControlLog::_a_ff_type arg)
  {
    msg_.a_ff = std::move(arg);
    return Init_ControlLog_a_fb(msg_);
  }

private:
  ::snapstack_msgs2::msg::ControlLog msg_;
};

class Init_ControlLog_v_err
{
public:
  explicit Init_ControlLog_v_err(::snapstack_msgs2::msg::ControlLog & msg)
  : msg_(msg)
  {}
  Init_ControlLog_a_ff v_err(::snapstack_msgs2::msg::ControlLog::_v_err_type arg)
  {
    msg_.v_err = std::move(arg);
    return Init_ControlLog_a_ff(msg_);
  }

private:
  ::snapstack_msgs2::msg::ControlLog msg_;
};

class Init_ControlLog_v_ref
{
public:
  explicit Init_ControlLog_v_ref(::snapstack_msgs2::msg::ControlLog & msg)
  : msg_(msg)
  {}
  Init_ControlLog_v_err v_ref(::snapstack_msgs2::msg::ControlLog::_v_ref_type arg)
  {
    msg_.v_ref = std::move(arg);
    return Init_ControlLog_v_err(msg_);
  }

private:
  ::snapstack_msgs2::msg::ControlLog msg_;
};

class Init_ControlLog_v
{
public:
  explicit Init_ControlLog_v(::snapstack_msgs2::msg::ControlLog & msg)
  : msg_(msg)
  {}
  Init_ControlLog_v_ref v(::snapstack_msgs2::msg::ControlLog::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_ControlLog_v_ref(msg_);
  }

private:
  ::snapstack_msgs2::msg::ControlLog msg_;
};

class Init_ControlLog_p_err_int
{
public:
  explicit Init_ControlLog_p_err_int(::snapstack_msgs2::msg::ControlLog & msg)
  : msg_(msg)
  {}
  Init_ControlLog_v p_err_int(::snapstack_msgs2::msg::ControlLog::_p_err_int_type arg)
  {
    msg_.p_err_int = std::move(arg);
    return Init_ControlLog_v(msg_);
  }

private:
  ::snapstack_msgs2::msg::ControlLog msg_;
};

class Init_ControlLog_p_err
{
public:
  explicit Init_ControlLog_p_err(::snapstack_msgs2::msg::ControlLog & msg)
  : msg_(msg)
  {}
  Init_ControlLog_p_err_int p_err(::snapstack_msgs2::msg::ControlLog::_p_err_type arg)
  {
    msg_.p_err = std::move(arg);
    return Init_ControlLog_p_err_int(msg_);
  }

private:
  ::snapstack_msgs2::msg::ControlLog msg_;
};

class Init_ControlLog_p_ref
{
public:
  explicit Init_ControlLog_p_ref(::snapstack_msgs2::msg::ControlLog & msg)
  : msg_(msg)
  {}
  Init_ControlLog_p_err p_ref(::snapstack_msgs2::msg::ControlLog::_p_ref_type arg)
  {
    msg_.p_ref = std::move(arg);
    return Init_ControlLog_p_err(msg_);
  }

private:
  ::snapstack_msgs2::msg::ControlLog msg_;
};

class Init_ControlLog_p
{
public:
  explicit Init_ControlLog_p(::snapstack_msgs2::msg::ControlLog & msg)
  : msg_(msg)
  {}
  Init_ControlLog_p_ref p(::snapstack_msgs2::msg::ControlLog::_p_type arg)
  {
    msg_.p = std::move(arg);
    return Init_ControlLog_p_ref(msg_);
  }

private:
  ::snapstack_msgs2::msg::ControlLog msg_;
};

class Init_ControlLog_header
{
public:
  Init_ControlLog_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlLog_p header(::snapstack_msgs2::msg::ControlLog::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ControlLog_p(msg_);
  }

private:
  ::snapstack_msgs2::msg::ControlLog msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::snapstack_msgs2::msg::ControlLog>()
{
  return snapstack_msgs2::msg::builder::Init_ControlLog_header();
}

}  // namespace snapstack_msgs2

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__CONTROL_LOG__BUILDER_HPP_
