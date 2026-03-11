// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynus_interfaces:msg/PNAdaptation.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__PN_ADAPTATION__TRAITS_HPP_
#define DYNUS_INTERFACES__MSG__DETAIL__PN_ADAPTATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynus_interfaces/msg/detail/pn_adaptation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace dynus_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PNAdaptation & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: old_n
  {
    out << "old_n: ";
    rosidl_generator_traits::value_to_yaml(msg.old_n, out);
    out << ", ";
  }

  // member: new_n
  {
    out << "new_n: ";
    rosidl_generator_traits::value_to_yaml(msg.new_n, out);
    out << ", ";
  }

  // member: old_p
  {
    out << "old_p: ";
    rosidl_generator_traits::value_to_yaml(msg.old_p, out);
    out << ", ";
  }

  // member: new_p
  {
    out << "new_p: ";
    rosidl_generator_traits::value_to_yaml(msg.new_p, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PNAdaptation & msg,
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

  // member: old_n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "old_n: ";
    rosidl_generator_traits::value_to_yaml(msg.old_n, out);
    out << "\n";
  }

  // member: new_n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_n: ";
    rosidl_generator_traits::value_to_yaml(msg.new_n, out);
    out << "\n";
  }

  // member: old_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "old_p: ";
    rosidl_generator_traits::value_to_yaml(msg.old_p, out);
    out << "\n";
  }

  // member: new_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_p: ";
    rosidl_generator_traits::value_to_yaml(msg.new_p, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PNAdaptation & msg, bool use_flow_style = false)
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
  const dynus_interfaces::msg::PNAdaptation & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynus_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynus_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const dynus_interfaces::msg::PNAdaptation & msg)
{
  return dynus_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dynus_interfaces::msg::PNAdaptation>()
{
  return "dynus_interfaces::msg::PNAdaptation";
}

template<>
inline const char * name<dynus_interfaces::msg::PNAdaptation>()
{
  return "dynus_interfaces/msg/PNAdaptation";
}

template<>
struct has_fixed_size<dynus_interfaces::msg::PNAdaptation>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<dynus_interfaces::msg::PNAdaptation>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<dynus_interfaces::msg::PNAdaptation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNUS_INTERFACES__MSG__DETAIL__PN_ADAPTATION__TRAITS_HPP_
