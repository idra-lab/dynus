// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from snapstack_msgs2:msg/Motors.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__MOTORS__TRAITS_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__MOTORS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "snapstack_msgs2/msg/detail/motors__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace snapstack_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const Motors & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: m1
  {
    out << "m1: ";
    rosidl_generator_traits::value_to_yaml(msg.m1, out);
    out << ", ";
  }

  // member: m2
  {
    out << "m2: ";
    rosidl_generator_traits::value_to_yaml(msg.m2, out);
    out << ", ";
  }

  // member: m3
  {
    out << "m3: ";
    rosidl_generator_traits::value_to_yaml(msg.m3, out);
    out << ", ";
  }

  // member: m4
  {
    out << "m4: ";
    rosidl_generator_traits::value_to_yaml(msg.m4, out);
    out << ", ";
  }

  // member: m5
  {
    out << "m5: ";
    rosidl_generator_traits::value_to_yaml(msg.m5, out);
    out << ", ";
  }

  // member: m6
  {
    out << "m6: ";
    rosidl_generator_traits::value_to_yaml(msg.m6, out);
    out << ", ";
  }

  // member: m7
  {
    out << "m7: ";
    rosidl_generator_traits::value_to_yaml(msg.m7, out);
    out << ", ";
  }

  // member: m8
  {
    out << "m8: ";
    rosidl_generator_traits::value_to_yaml(msg.m8, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Motors & msg,
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

  // member: m1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m1: ";
    rosidl_generator_traits::value_to_yaml(msg.m1, out);
    out << "\n";
  }

  // member: m2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m2: ";
    rosidl_generator_traits::value_to_yaml(msg.m2, out);
    out << "\n";
  }

  // member: m3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m3: ";
    rosidl_generator_traits::value_to_yaml(msg.m3, out);
    out << "\n";
  }

  // member: m4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m4: ";
    rosidl_generator_traits::value_to_yaml(msg.m4, out);
    out << "\n";
  }

  // member: m5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m5: ";
    rosidl_generator_traits::value_to_yaml(msg.m5, out);
    out << "\n";
  }

  // member: m6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m6: ";
    rosidl_generator_traits::value_to_yaml(msg.m6, out);
    out << "\n";
  }

  // member: m7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m7: ";
    rosidl_generator_traits::value_to_yaml(msg.m7, out);
    out << "\n";
  }

  // member: m8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m8: ";
    rosidl_generator_traits::value_to_yaml(msg.m8, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Motors & msg, bool use_flow_style = false)
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
  const snapstack_msgs2::msg::Motors & msg,
  std::ostream & out, size_t indentation = 0)
{
  snapstack_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use snapstack_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const snapstack_msgs2::msg::Motors & msg)
{
  return snapstack_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<snapstack_msgs2::msg::Motors>()
{
  return "snapstack_msgs2::msg::Motors";
}

template<>
inline const char * name<snapstack_msgs2::msg::Motors>()
{
  return "snapstack_msgs2/msg/Motors";
}

template<>
struct has_fixed_size<snapstack_msgs2::msg::Motors>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<snapstack_msgs2::msg::Motors>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<snapstack_msgs2::msg::Motors>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__MOTORS__TRAITS_HPP_
