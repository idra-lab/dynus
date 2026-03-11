// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynus_interfaces:msg/PNAdaptation.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__PN_ADAPTATION__BUILDER_HPP_
#define DYNUS_INTERFACES__MSG__DETAIL__PN_ADAPTATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynus_interfaces/msg/detail/pn_adaptation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynus_interfaces
{

namespace msg
{

namespace builder
{

class Init_PNAdaptation_new_p
{
public:
  explicit Init_PNAdaptation_new_p(::dynus_interfaces::msg::PNAdaptation & msg)
  : msg_(msg)
  {}
  ::dynus_interfaces::msg::PNAdaptation new_p(::dynus_interfaces::msg::PNAdaptation::_new_p_type arg)
  {
    msg_.new_p = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynus_interfaces::msg::PNAdaptation msg_;
};

class Init_PNAdaptation_old_p
{
public:
  explicit Init_PNAdaptation_old_p(::dynus_interfaces::msg::PNAdaptation & msg)
  : msg_(msg)
  {}
  Init_PNAdaptation_new_p old_p(::dynus_interfaces::msg::PNAdaptation::_old_p_type arg)
  {
    msg_.old_p = std::move(arg);
    return Init_PNAdaptation_new_p(msg_);
  }

private:
  ::dynus_interfaces::msg::PNAdaptation msg_;
};

class Init_PNAdaptation_new_n
{
public:
  explicit Init_PNAdaptation_new_n(::dynus_interfaces::msg::PNAdaptation & msg)
  : msg_(msg)
  {}
  Init_PNAdaptation_old_p new_n(::dynus_interfaces::msg::PNAdaptation::_new_n_type arg)
  {
    msg_.new_n = std::move(arg);
    return Init_PNAdaptation_old_p(msg_);
  }

private:
  ::dynus_interfaces::msg::PNAdaptation msg_;
};

class Init_PNAdaptation_old_n
{
public:
  explicit Init_PNAdaptation_old_n(::dynus_interfaces::msg::PNAdaptation & msg)
  : msg_(msg)
  {}
  Init_PNAdaptation_new_n old_n(::dynus_interfaces::msg::PNAdaptation::_old_n_type arg)
  {
    msg_.old_n = std::move(arg);
    return Init_PNAdaptation_new_n(msg_);
  }

private:
  ::dynus_interfaces::msg::PNAdaptation msg_;
};

class Init_PNAdaptation_header
{
public:
  Init_PNAdaptation_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PNAdaptation_old_n header(::dynus_interfaces::msg::PNAdaptation::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PNAdaptation_old_n(msg_);
  }

private:
  ::dynus_interfaces::msg::PNAdaptation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynus_interfaces::msg::PNAdaptation>()
{
  return dynus_interfaces::msg::builder::Init_PNAdaptation_header();
}

}  // namespace dynus_interfaces

#endif  // DYNUS_INTERFACES__MSG__DETAIL__PN_ADAPTATION__BUILDER_HPP_
