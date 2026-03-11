// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from snapstack_msgs2:msg/TimeFilter.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__TIME_FILTER__TRAITS_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__TIME_FILTER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "snapstack_msgs2/msg/detail/time_filter__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace snapstack_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const TimeFilter & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: dt
  {
    out << "dt: ";
    rosidl_generator_traits::value_to_yaml(msg.dt, out);
    out << ", ";
  }

  // member: delayed_dt
  {
    out << "delayed_dt: ";
    rosidl_generator_traits::value_to_yaml(msg.delayed_dt, out);
    out << ", ";
  }

  // member: skipped
  {
    out << "skipped: ";
    rosidl_generator_traits::value_to_yaml(msg.skipped, out);
    out << ", ";
  }

  // member: upper
  {
    out << "upper: ";
    rosidl_generator_traits::value_to_yaml(msg.upper, out);
    out << ", ";
  }

  // member: lower
  {
    out << "lower: ";
    rosidl_generator_traits::value_to_yaml(msg.lower, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TimeFilter & msg,
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

  // member: dt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dt: ";
    rosidl_generator_traits::value_to_yaml(msg.dt, out);
    out << "\n";
  }

  // member: delayed_dt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delayed_dt: ";
    rosidl_generator_traits::value_to_yaml(msg.delayed_dt, out);
    out << "\n";
  }

  // member: skipped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "skipped: ";
    rosidl_generator_traits::value_to_yaml(msg.skipped, out);
    out << "\n";
  }

  // member: upper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "upper: ";
    rosidl_generator_traits::value_to_yaml(msg.upper, out);
    out << "\n";
  }

  // member: lower
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lower: ";
    rosidl_generator_traits::value_to_yaml(msg.lower, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TimeFilter & msg, bool use_flow_style = false)
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
  const snapstack_msgs2::msg::TimeFilter & msg,
  std::ostream & out, size_t indentation = 0)
{
  snapstack_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use snapstack_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const snapstack_msgs2::msg::TimeFilter & msg)
{
  return snapstack_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<snapstack_msgs2::msg::TimeFilter>()
{
  return "snapstack_msgs2::msg::TimeFilter";
}

template<>
inline const char * name<snapstack_msgs2::msg::TimeFilter>()
{
  return "snapstack_msgs2/msg/TimeFilter";
}

template<>
struct has_fixed_size<snapstack_msgs2::msg::TimeFilter>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<snapstack_msgs2::msg::TimeFilter>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<snapstack_msgs2::msg::TimeFilter>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__TIME_FILTER__TRAITS_HPP_
