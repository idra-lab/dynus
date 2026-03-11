// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from snapstack_msgs2:msg/CommAge.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__COMM_AGE__TRAITS_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__COMM_AGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "snapstack_msgs2/msg/detail/comm_age__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace snapstack_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const CommAge & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: vicon_age_secs
  {
    out << "vicon_age_secs: ";
    rosidl_generator_traits::value_to_yaml(msg.vicon_age_secs, out);
    out << ", ";
  }

  // member: goal_age_secs
  {
    out << "goal_age_secs: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_age_secs, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CommAge & msg,
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

  // member: vicon_age_secs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vicon_age_secs: ";
    rosidl_generator_traits::value_to_yaml(msg.vicon_age_secs, out);
    out << "\n";
  }

  // member: goal_age_secs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_age_secs: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_age_secs, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CommAge & msg, bool use_flow_style = false)
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
  const snapstack_msgs2::msg::CommAge & msg,
  std::ostream & out, size_t indentation = 0)
{
  snapstack_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use snapstack_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const snapstack_msgs2::msg::CommAge & msg)
{
  return snapstack_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<snapstack_msgs2::msg::CommAge>()
{
  return "snapstack_msgs2::msg::CommAge";
}

template<>
inline const char * name<snapstack_msgs2::msg::CommAge>()
{
  return "snapstack_msgs2/msg/CommAge";
}

template<>
struct has_fixed_size<snapstack_msgs2::msg::CommAge>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<snapstack_msgs2::msg::CommAge>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<snapstack_msgs2::msg::CommAge>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__COMM_AGE__TRAITS_HPP_
