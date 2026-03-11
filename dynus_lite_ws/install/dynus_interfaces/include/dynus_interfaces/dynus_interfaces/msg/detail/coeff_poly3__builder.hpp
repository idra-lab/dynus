// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynus_interfaces:msg/CoeffPoly3.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__COEFF_POLY3__BUILDER_HPP_
#define DYNUS_INTERFACES__MSG__DETAIL__COEFF_POLY3__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynus_interfaces/msg/detail/coeff_poly3__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynus_interfaces
{

namespace msg
{

namespace builder
{

class Init_CoeffPoly3_d
{
public:
  explicit Init_CoeffPoly3_d(::dynus_interfaces::msg::CoeffPoly3 & msg)
  : msg_(msg)
  {}
  ::dynus_interfaces::msg::CoeffPoly3 d(::dynus_interfaces::msg::CoeffPoly3::_d_type arg)
  {
    msg_.d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynus_interfaces::msg::CoeffPoly3 msg_;
};

class Init_CoeffPoly3_c
{
public:
  explicit Init_CoeffPoly3_c(::dynus_interfaces::msg::CoeffPoly3 & msg)
  : msg_(msg)
  {}
  Init_CoeffPoly3_d c(::dynus_interfaces::msg::CoeffPoly3::_c_type arg)
  {
    msg_.c = std::move(arg);
    return Init_CoeffPoly3_d(msg_);
  }

private:
  ::dynus_interfaces::msg::CoeffPoly3 msg_;
};

class Init_CoeffPoly3_b
{
public:
  explicit Init_CoeffPoly3_b(::dynus_interfaces::msg::CoeffPoly3 & msg)
  : msg_(msg)
  {}
  Init_CoeffPoly3_c b(::dynus_interfaces::msg::CoeffPoly3::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_CoeffPoly3_c(msg_);
  }

private:
  ::dynus_interfaces::msg::CoeffPoly3 msg_;
};

class Init_CoeffPoly3_a
{
public:
  Init_CoeffPoly3_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CoeffPoly3_b a(::dynus_interfaces::msg::CoeffPoly3::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_CoeffPoly3_b(msg_);
  }

private:
  ::dynus_interfaces::msg::CoeffPoly3 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynus_interfaces::msg::CoeffPoly3>()
{
  return dynus_interfaces::msg::builder::Init_CoeffPoly3_a();
}

}  // namespace dynus_interfaces

#endif  // DYNUS_INTERFACES__MSG__DETAIL__COEFF_POLY3__BUILDER_HPP_
