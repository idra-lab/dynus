// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynus_interfaces:msg/DynTraj.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ__BUILDER_HPP_
#define DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynus_interfaces/msg/detail/dyn_traj__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynus_interfaces
{

namespace msg
{

namespace builder
{

class Init_DynTraj_mode
{
public:
  explicit Init_DynTraj_mode(::dynus_interfaces::msg::DynTraj & msg)
  : msg_(msg)
  {}
  ::dynus_interfaces::msg::DynTraj mode(::dynus_interfaces::msg::DynTraj::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynus_interfaces::msg::DynTraj msg_;
};

class Init_DynTraj_goal
{
public:
  explicit Init_DynTraj_goal(::dynus_interfaces::msg::DynTraj & msg)
  : msg_(msg)
  {}
  Init_DynTraj_mode goal(::dynus_interfaces::msg::DynTraj::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_DynTraj_mode(msg_);
  }

private:
  ::dynus_interfaces::msg::DynTraj msg_;
};

class Init_DynTraj_is_agent
{
public:
  explicit Init_DynTraj_is_agent(::dynus_interfaces::msg::DynTraj & msg)
  : msg_(msg)
  {}
  Init_DynTraj_goal is_agent(::dynus_interfaces::msg::DynTraj::_is_agent_type arg)
  {
    msg_.is_agent = std::move(arg);
    return Init_DynTraj_goal(msg_);
  }

private:
  ::dynus_interfaces::msg::DynTraj msg_;
};

class Init_DynTraj_pos
{
public:
  explicit Init_DynTraj_pos(::dynus_interfaces::msg::DynTraj & msg)
  : msg_(msg)
  {}
  Init_DynTraj_is_agent pos(::dynus_interfaces::msg::DynTraj::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_DynTraj_is_agent(msg_);
  }

private:
  ::dynus_interfaces::msg::DynTraj msg_;
};

class Init_DynTraj_velocity
{
public:
  explicit Init_DynTraj_velocity(::dynus_interfaces::msg::DynTraj & msg)
  : msg_(msg)
  {}
  Init_DynTraj_pos velocity(::dynus_interfaces::msg::DynTraj::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_DynTraj_pos(msg_);
  }

private:
  ::dynus_interfaces::msg::DynTraj msg_;
};

class Init_DynTraj_function
{
public:
  explicit Init_DynTraj_function(::dynus_interfaces::msg::DynTraj & msg)
  : msg_(msg)
  {}
  Init_DynTraj_velocity function(::dynus_interfaces::msg::DynTraj::_function_type arg)
  {
    msg_.function = std::move(arg);
    return Init_DynTraj_velocity(msg_);
  }

private:
  ::dynus_interfaces::msg::DynTraj msg_;
};

class Init_DynTraj_poly_end_time
{
public:
  explicit Init_DynTraj_poly_end_time(::dynus_interfaces::msg::DynTraj & msg)
  : msg_(msg)
  {}
  Init_DynTraj_function poly_end_time(::dynus_interfaces::msg::DynTraj::_poly_end_time_type arg)
  {
    msg_.poly_end_time = std::move(arg);
    return Init_DynTraj_function(msg_);
  }

private:
  ::dynus_interfaces::msg::DynTraj msg_;
};

class Init_DynTraj_poly_start_time
{
public:
  explicit Init_DynTraj_poly_start_time(::dynus_interfaces::msg::DynTraj & msg)
  : msg_(msg)
  {}
  Init_DynTraj_poly_end_time poly_start_time(::dynus_interfaces::msg::DynTraj::_poly_start_time_type arg)
  {
    msg_.poly_start_time = std::move(arg);
    return Init_DynTraj_poly_end_time(msg_);
  }

private:
  ::dynus_interfaces::msg::DynTraj msg_;
};

class Init_DynTraj_poly_coeffs_z
{
public:
  explicit Init_DynTraj_poly_coeffs_z(::dynus_interfaces::msg::DynTraj & msg)
  : msg_(msg)
  {}
  Init_DynTraj_poly_start_time poly_coeffs_z(::dynus_interfaces::msg::DynTraj::_poly_coeffs_z_type arg)
  {
    msg_.poly_coeffs_z = std::move(arg);
    return Init_DynTraj_poly_start_time(msg_);
  }

private:
  ::dynus_interfaces::msg::DynTraj msg_;
};

class Init_DynTraj_poly_coeffs_y
{
public:
  explicit Init_DynTraj_poly_coeffs_y(::dynus_interfaces::msg::DynTraj & msg)
  : msg_(msg)
  {}
  Init_DynTraj_poly_coeffs_z poly_coeffs_y(::dynus_interfaces::msg::DynTraj::_poly_coeffs_y_type arg)
  {
    msg_.poly_coeffs_y = std::move(arg);
    return Init_DynTraj_poly_coeffs_z(msg_);
  }

private:
  ::dynus_interfaces::msg::DynTraj msg_;
};

class Init_DynTraj_poly_coeffs_x
{
public:
  explicit Init_DynTraj_poly_coeffs_x(::dynus_interfaces::msg::DynTraj & msg)
  : msg_(msg)
  {}
  Init_DynTraj_poly_coeffs_y poly_coeffs_x(::dynus_interfaces::msg::DynTraj::_poly_coeffs_x_type arg)
  {
    msg_.poly_coeffs_x = std::move(arg);
    return Init_DynTraj_poly_coeffs_y(msg_);
  }

private:
  ::dynus_interfaces::msg::DynTraj msg_;
};

class Init_DynTraj_poly_cov
{
public:
  explicit Init_DynTraj_poly_cov(::dynus_interfaces::msg::DynTraj & msg)
  : msg_(msg)
  {}
  Init_DynTraj_poly_coeffs_x poly_cov(::dynus_interfaces::msg::DynTraj::_poly_cov_type arg)
  {
    msg_.poly_cov = std::move(arg);
    return Init_DynTraj_poly_coeffs_x(msg_);
  }

private:
  ::dynus_interfaces::msg::DynTraj msg_;
};

class Init_DynTraj_ekf_cov_r
{
public:
  explicit Init_DynTraj_ekf_cov_r(::dynus_interfaces::msg::DynTraj & msg)
  : msg_(msg)
  {}
  Init_DynTraj_poly_cov ekf_cov_r(::dynus_interfaces::msg::DynTraj::_ekf_cov_r_type arg)
  {
    msg_.ekf_cov_r = std::move(arg);
    return Init_DynTraj_poly_cov(msg_);
  }

private:
  ::dynus_interfaces::msg::DynTraj msg_;
};

class Init_DynTraj_ekf_cov_q
{
public:
  explicit Init_DynTraj_ekf_cov_q(::dynus_interfaces::msg::DynTraj & msg)
  : msg_(msg)
  {}
  Init_DynTraj_ekf_cov_r ekf_cov_q(::dynus_interfaces::msg::DynTraj::_ekf_cov_q_type arg)
  {
    msg_.ekf_cov_q = std::move(arg);
    return Init_DynTraj_ekf_cov_r(msg_);
  }

private:
  ::dynus_interfaces::msg::DynTraj msg_;
};

class Init_DynTraj_ekf_cov_p
{
public:
  explicit Init_DynTraj_ekf_cov_p(::dynus_interfaces::msg::DynTraj & msg)
  : msg_(msg)
  {}
  Init_DynTraj_ekf_cov_q ekf_cov_p(::dynus_interfaces::msg::DynTraj::_ekf_cov_p_type arg)
  {
    msg_.ekf_cov_p = std::move(arg);
    return Init_DynTraj_ekf_cov_q(msg_);
  }

private:
  ::dynus_interfaces::msg::DynTraj msg_;
};

class Init_DynTraj_quintic_pwp
{
public:
  explicit Init_DynTraj_quintic_pwp(::dynus_interfaces::msg::DynTraj & msg)
  : msg_(msg)
  {}
  Init_DynTraj_ekf_cov_p quintic_pwp(::dynus_interfaces::msg::DynTraj::_quintic_pwp_type arg)
  {
    msg_.quintic_pwp = std::move(arg);
    return Init_DynTraj_ekf_cov_p(msg_);
  }

private:
  ::dynus_interfaces::msg::DynTraj msg_;
};

class Init_DynTraj_pwp
{
public:
  explicit Init_DynTraj_pwp(::dynus_interfaces::msg::DynTraj & msg)
  : msg_(msg)
  {}
  Init_DynTraj_quintic_pwp pwp(::dynus_interfaces::msg::DynTraj::_pwp_type arg)
  {
    msg_.pwp = std::move(arg);
    return Init_DynTraj_quintic_pwp(msg_);
  }

private:
  ::dynus_interfaces::msg::DynTraj msg_;
};

class Init_DynTraj_id
{
public:
  explicit Init_DynTraj_id(::dynus_interfaces::msg::DynTraj & msg)
  : msg_(msg)
  {}
  Init_DynTraj_pwp id(::dynus_interfaces::msg::DynTraj::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_DynTraj_pwp(msg_);
  }

private:
  ::dynus_interfaces::msg::DynTraj msg_;
};

class Init_DynTraj_bbox
{
public:
  explicit Init_DynTraj_bbox(::dynus_interfaces::msg::DynTraj & msg)
  : msg_(msg)
  {}
  Init_DynTraj_id bbox(::dynus_interfaces::msg::DynTraj::_bbox_type arg)
  {
    msg_.bbox = std::move(arg);
    return Init_DynTraj_id(msg_);
  }

private:
  ::dynus_interfaces::msg::DynTraj msg_;
};

class Init_DynTraj_header
{
public:
  Init_DynTraj_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynTraj_bbox header(::dynus_interfaces::msg::DynTraj::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DynTraj_bbox(msg_);
  }

private:
  ::dynus_interfaces::msg::DynTraj msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynus_interfaces::msg::DynTraj>()
{
  return dynus_interfaces::msg::builder::Init_DynTraj_header();
}

}  // namespace dynus_interfaces

#endif  // DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ__BUILDER_HPP_
