// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynus_interfaces:msg/Goal.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__GOAL__TRAITS_HPP_
#define DYNUS_INTERFACES__MSG__DETAIL__GOAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynus_interfaces/msg/detail/goal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'p'
// Member 'v'
// Member 'a'
// Member 'j'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace dynus_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Goal & msg,
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

  // member: v
  {
    out << "v: ";
    to_flow_style_yaml(msg.v, out);
    out << ", ";
  }

  // member: a
  {
    out << "a: ";
    to_flow_style_yaml(msg.a, out);
    out << ", ";
  }

  // member: j
  {
    out << "j: ";
    to_flow_style_yaml(msg.j, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: dyaw
  {
    out << "dyaw: ";
    rosidl_generator_traits::value_to_yaml(msg.dyaw, out);
    out << ", ";
  }

  // member: power
  {
    out << "power: ";
    rosidl_generator_traits::value_to_yaml(msg.power, out);
    out << ", ";
  }

  // member: mode_xy
  {
    out << "mode_xy: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_xy, out);
    out << ", ";
  }

  // member: mode_z
  {
    out << "mode_z: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Goal & msg,
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

  // member: v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v:\n";
    to_block_style_yaml(msg.v, out, indentation + 2);
  }

  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a:\n";
    to_block_style_yaml(msg.a, out, indentation + 2);
  }

  // member: j
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j:\n";
    to_block_style_yaml(msg.j, out, indentation + 2);
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: dyaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dyaw: ";
    rosidl_generator_traits::value_to_yaml(msg.dyaw, out);
    out << "\n";
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

  // member: mode_xy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_xy: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_xy, out);
    out << "\n";
  }

  // member: mode_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_z: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Goal & msg, bool use_flow_style = false)
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

}  // namespace dynus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dynus_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynus_interfaces::msg::Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynus_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynus_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const dynus_interfaces::msg::Goal & msg)
{
  return dynus_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dynus_interfaces::msg::Goal>()
{
  return "dynus_interfaces::msg::Goal";
}

template<>
inline const char * name<dynus_interfaces::msg::Goal>()
{
  return "dynus_interfaces/msg/Goal";
}

template<>
struct has_fixed_size<dynus_interfaces::msg::Goal>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<dynus_interfaces::msg::Goal>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<dynus_interfaces::msg::Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNUS_INTERFACES__MSG__DETAIL__GOAL__TRAITS_HPP_
