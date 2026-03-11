// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from snapstack_msgs2:msg/ControlLog.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__CONTROL_LOG__TRAITS_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__CONTROL_LOG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "snapstack_msgs2/msg/detail/control_log__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'p'
// Member 'p_ref'
// Member 'p_err'
// Member 'p_err_int'
// Member 'v'
// Member 'v_ref'
// Member 'v_err'
// Member 'a_ff'
// Member 'a_fb'
// Member 'j_ff'
// Member 'j_fb'
// Member 'rpy'
// Member 'rpy_ref'
// Member 'w'
// Member 'w_ref'
// Member 'f_w'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'q'
// Member 'q_ref'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace snapstack_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlLog & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: p
  {
    out << "p: ";
    to_flow_style_yaml(msg.p, out);
    out << ", ";
  }

  // member: p_ref
  {
    out << "p_ref: ";
    to_flow_style_yaml(msg.p_ref, out);
    out << ", ";
  }

  // member: p_err
  {
    out << "p_err: ";
    to_flow_style_yaml(msg.p_err, out);
    out << ", ";
  }

  // member: p_err_int
  {
    out << "p_err_int: ";
    to_flow_style_yaml(msg.p_err_int, out);
    out << ", ";
  }

  // member: v
  {
    out << "v: ";
    to_flow_style_yaml(msg.v, out);
    out << ", ";
  }

  // member: v_ref
  {
    out << "v_ref: ";
    to_flow_style_yaml(msg.v_ref, out);
    out << ", ";
  }

  // member: v_err
  {
    out << "v_err: ";
    to_flow_style_yaml(msg.v_err, out);
    out << ", ";
  }

  // member: a_ff
  {
    out << "a_ff: ";
    to_flow_style_yaml(msg.a_ff, out);
    out << ", ";
  }

  // member: a_fb
  {
    out << "a_fb: ";
    to_flow_style_yaml(msg.a_fb, out);
    out << ", ";
  }

  // member: j_ff
  {
    out << "j_ff: ";
    to_flow_style_yaml(msg.j_ff, out);
    out << ", ";
  }

  // member: j_fb
  {
    out << "j_fb: ";
    to_flow_style_yaml(msg.j_fb, out);
    out << ", ";
  }

  // member: q
  {
    out << "q: ";
    to_flow_style_yaml(msg.q, out);
    out << ", ";
  }

  // member: q_ref
  {
    out << "q_ref: ";
    to_flow_style_yaml(msg.q_ref, out);
    out << ", ";
  }

  // member: rpy
  {
    out << "rpy: ";
    to_flow_style_yaml(msg.rpy, out);
    out << ", ";
  }

  // member: rpy_ref
  {
    out << "rpy_ref: ";
    to_flow_style_yaml(msg.rpy_ref, out);
    out << ", ";
  }

  // member: w
  {
    out << "w: ";
    to_flow_style_yaml(msg.w, out);
    out << ", ";
  }

  // member: w_ref
  {
    out << "w_ref: ";
    to_flow_style_yaml(msg.w_ref, out);
    out << ", ";
  }

  // member: f_w
  {
    out << "f_w: ";
    to_flow_style_yaml(msg.f_w, out);
    out << ", ";
  }

  // member: power
  {
    out << "power: ";
    rosidl_generator_traits::value_to_yaml(msg.power, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlLog & msg,
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

  // member: p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p:\n";
    to_block_style_yaml(msg.p, out, indentation + 2);
  }

  // member: p_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p_ref:\n";
    to_block_style_yaml(msg.p_ref, out, indentation + 2);
  }

  // member: p_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p_err:\n";
    to_block_style_yaml(msg.p_err, out, indentation + 2);
  }

  // member: p_err_int
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p_err_int:\n";
    to_block_style_yaml(msg.p_err_int, out, indentation + 2);
  }

  // member: v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v:\n";
    to_block_style_yaml(msg.v, out, indentation + 2);
  }

  // member: v_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_ref:\n";
    to_block_style_yaml(msg.v_ref, out, indentation + 2);
  }

  // member: v_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_err:\n";
    to_block_style_yaml(msg.v_err, out, indentation + 2);
  }

  // member: a_ff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a_ff:\n";
    to_block_style_yaml(msg.a_ff, out, indentation + 2);
  }

  // member: a_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a_fb:\n";
    to_block_style_yaml(msg.a_fb, out, indentation + 2);
  }

  // member: j_ff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j_ff:\n";
    to_block_style_yaml(msg.j_ff, out, indentation + 2);
  }

  // member: j_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j_fb:\n";
    to_block_style_yaml(msg.j_fb, out, indentation + 2);
  }

  // member: q
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q:\n";
    to_block_style_yaml(msg.q, out, indentation + 2);
  }

  // member: q_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q_ref:\n";
    to_block_style_yaml(msg.q_ref, out, indentation + 2);
  }

  // member: rpy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpy:\n";
    to_block_style_yaml(msg.rpy, out, indentation + 2);
  }

  // member: rpy_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpy_ref:\n";
    to_block_style_yaml(msg.rpy_ref, out, indentation + 2);
  }

  // member: w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "w:\n";
    to_block_style_yaml(msg.w, out, indentation + 2);
  }

  // member: w_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "w_ref:\n";
    to_block_style_yaml(msg.w_ref, out, indentation + 2);
  }

  // member: f_w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_w:\n";
    to_block_style_yaml(msg.f_w, out, indentation + 2);
  }

  // member: power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power: ";
    rosidl_generator_traits::value_to_yaml(msg.power, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlLog & msg, bool use_flow_style = false)
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
  const snapstack_msgs2::msg::ControlLog & msg,
  std::ostream & out, size_t indentation = 0)
{
  snapstack_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use snapstack_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const snapstack_msgs2::msg::ControlLog & msg)
{
  return snapstack_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<snapstack_msgs2::msg::ControlLog>()
{
  return "snapstack_msgs2::msg::ControlLog";
}

template<>
inline const char * name<snapstack_msgs2::msg::ControlLog>()
{
  return "snapstack_msgs2/msg/ControlLog";
}

template<>
struct has_fixed_size<snapstack_msgs2::msg::ControlLog>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<snapstack_msgs2::msg::ControlLog>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<snapstack_msgs2::msg::ControlLog>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__CONTROL_LOG__TRAITS_HPP_
