// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynus_interfaces:msg/QuinticCoeffPoly3.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__QUINTIC_COEFF_POLY3__TRAITS_HPP_
#define DYNUS_INTERFACES__MSG__DETAIL__QUINTIC_COEFF_POLY3__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynus_interfaces/msg/detail/quintic_coeff_poly3__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dynus_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const QuinticCoeffPoly3 & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << ", ";
  }

  // member: d
  {
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
    out << ", ";
  }

  // member: e
  {
    out << "e: ";
    rosidl_generator_traits::value_to_yaml(msg.e, out);
    out << ", ";
  }

  // member: f
  {
    out << "f: ";
    rosidl_generator_traits::value_to_yaml(msg.f, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const QuinticCoeffPoly3 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }

  // member: d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
    out << "\n";
  }

  // member: e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "e: ";
    rosidl_generator_traits::value_to_yaml(msg.e, out);
    out << "\n";
  }

  // member: f
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f: ";
    rosidl_generator_traits::value_to_yaml(msg.f, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const QuinticCoeffPoly3 & msg, bool use_flow_style = false)
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
  const dynus_interfaces::msg::QuinticCoeffPoly3 & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynus_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynus_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const dynus_interfaces::msg::QuinticCoeffPoly3 & msg)
{
  return dynus_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dynus_interfaces::msg::QuinticCoeffPoly3>()
{
  return "dynus_interfaces::msg::QuinticCoeffPoly3";
}

template<>
inline const char * name<dynus_interfaces::msg::QuinticCoeffPoly3>()
{
  return "dynus_interfaces/msg/QuinticCoeffPoly3";
}

template<>
struct has_fixed_size<dynus_interfaces::msg::QuinticCoeffPoly3>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynus_interfaces::msg::QuinticCoeffPoly3>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynus_interfaces::msg::QuinticCoeffPoly3>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNUS_INTERFACES__MSG__DETAIL__QUINTIC_COEFF_POLY3__TRAITS_HPP_
