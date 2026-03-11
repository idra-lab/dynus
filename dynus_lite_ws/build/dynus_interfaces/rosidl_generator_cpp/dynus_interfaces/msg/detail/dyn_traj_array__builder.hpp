// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynus_interfaces:msg/DynTrajArray.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ_ARRAY__BUILDER_HPP_
#define DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynus_interfaces/msg/detail/dyn_traj_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynus_interfaces
{

namespace msg
{

namespace builder
{

class Init_DynTrajArray_trajs
{
public:
  explicit Init_DynTrajArray_trajs(::dynus_interfaces::msg::DynTrajArray & msg)
  : msg_(msg)
  {}
  ::dynus_interfaces::msg::DynTrajArray trajs(::dynus_interfaces::msg::DynTrajArray::_trajs_type arg)
  {
    msg_.trajs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynus_interfaces::msg::DynTrajArray msg_;
};

class Init_DynTrajArray_header
{
public:
  Init_DynTrajArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynTrajArray_trajs header(::dynus_interfaces::msg::DynTrajArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DynTrajArray_trajs(msg_);
  }

private:
  ::dynus_interfaces::msg::DynTrajArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynus_interfaces::msg::DynTrajArray>()
{
  return dynus_interfaces::msg::builder::Init_DynTrajArray_header();
}

}  // namespace dynus_interfaces

#endif  // DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ_ARRAY__BUILDER_HPP_
