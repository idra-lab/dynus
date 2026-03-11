// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from snapstack_msgs2:msg/QuadFlightMode.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__QUAD_FLIGHT_MODE__TRAITS_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__QUAD_FLIGHT_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "snapstack_msgs2/msg/detail/quad_flight_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace snapstack_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const QuadFlightMode & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const QuadFlightMode & msg,
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

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const QuadFlightMode & msg, bool use_flow_style = false)
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
  const snapstack_msgs2::msg::QuadFlightMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  snapstack_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use snapstack_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const snapstack_msgs2::msg::QuadFlightMode & msg)
{
  return snapstack_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<snapstack_msgs2::msg::QuadFlightMode>()
{
  return "snapstack_msgs2::msg::QuadFlightMode";
}

template<>
inline const char * name<snapstack_msgs2::msg::QuadFlightMode>()
{
  return "snapstack_msgs2/msg/QuadFlightMode";
}

template<>
struct has_fixed_size<snapstack_msgs2::msg::QuadFlightMode>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<snapstack_msgs2::msg::QuadFlightMode>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<snapstack_msgs2::msg::QuadFlightMode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__QUAD_FLIGHT_MODE__TRAITS_HPP_
