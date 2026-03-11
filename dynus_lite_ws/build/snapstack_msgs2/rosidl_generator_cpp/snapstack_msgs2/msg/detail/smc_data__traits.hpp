// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from snapstack_msgs2:msg/SMCData.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__SMC_DATA__TRAITS_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__SMC_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "snapstack_msgs2/msg/detail/smc_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'q_des'
// Member 'q_act'
// Member 'q_err'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"
// Member 'w_des'
// Member 'w_act'
// Member 'w_err'
// Member 's'
// Member 'integrator'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace snapstack_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const SMCData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: q_des
  {
    out << "q_des: ";
    to_flow_style_yaml(msg.q_des, out);
    out << ", ";
  }

  // member: q_act
  {
    out << "q_act: ";
    to_flow_style_yaml(msg.q_act, out);
    out << ", ";
  }

  // member: q_err
  {
    out << "q_err: ";
    to_flow_style_yaml(msg.q_err, out);
    out << ", ";
  }

  // member: w_des
  {
    out << "w_des: ";
    to_flow_style_yaml(msg.w_des, out);
    out << ", ";
  }

  // member: w_act
  {
    out << "w_act: ";
    to_flow_style_yaml(msg.w_act, out);
    out << ", ";
  }

  // member: w_err
  {
    out << "w_err: ";
    to_flow_style_yaml(msg.w_err, out);
    out << ", ";
  }

  // member: s
  {
    out << "s: ";
    to_flow_style_yaml(msg.s, out);
    out << ", ";
  }

  // member: integrator
  {
    out << "integrator: ";
    to_flow_style_yaml(msg.integrator, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SMCData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: q_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q_des:\n";
    to_block_style_yaml(msg.q_des, out, indentation + 2);
  }

  // member: q_act
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q_act:\n";
    to_block_style_yaml(msg.q_act, out, indentation + 2);
  }

  // member: q_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q_err:\n";
    to_block_style_yaml(msg.q_err, out, indentation + 2);
  }

  // member: w_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "w_des:\n";
    to_block_style_yaml(msg.w_des, out, indentation + 2);
  }

  // member: w_act
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "w_act:\n";
    to_block_style_yaml(msg.w_act, out, indentation + 2);
  }

  // member: w_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "w_err:\n";
    to_block_style_yaml(msg.w_err, out, indentation + 2);
  }

  // member: s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s:\n";
    to_block_style_yaml(msg.s, out, indentation + 2);
  }

  // member: integrator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "integrator:\n";
    to_block_style_yaml(msg.integrator, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SMCData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace snapstack_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use snapstack_msgs2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const snapstack_msgs2::msg::SMCData & msg,
  std::ostream & out, size_t indentation = 0)
{
  snapstack_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use snapstack_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const snapstack_msgs2::msg::SMCData & msg)
{
  return snapstack_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<snapstack_msgs2::msg::SMCData>()
{
  return "snapstack_msgs2::msg::SMCData";
}

template<>
inline const char * name<snapstack_msgs2::msg::SMCData>()
{
  return "snapstack_msgs2/msg/SMCData";
}

template<>
struct has_fixed_size<snapstack_msgs2::msg::SMCData>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<snapstack_msgs2::msg::SMCData>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<snapstack_msgs2::msg::SMCData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__SMC_DATA__TRAITS_HPP_
