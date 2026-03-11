// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynus_interfaces:msg/DynTrajArray.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ_ARRAY__TRAITS_HPP_
#define DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynus_interfaces/msg/detail/dyn_traj_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'trajs'
#include "dynus_interfaces/msg/detail/dyn_traj__traits.hpp"

namespace dynus_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DynTrajArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: trajs
  {
    if (msg.trajs.size() == 0) {
      out << "trajs: []";
    } else {
      out << "trajs: [";
      size_t pending_items = msg.trajs.size();
      for (auto item : msg.trajs) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DynTrajArray & msg,
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

  // member: trajs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajs.size() == 0) {
      out << "trajs: []\n";
    } else {
      out << "trajs:\n";
      for (auto item : msg.trajs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DynTrajArray & msg, bool use_flow_style = false)
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
  const dynus_interfaces::msg::DynTrajArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynus_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynus_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const dynus_interfaces::msg::DynTrajArray & msg)
{
  return dynus_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dynus_interfaces::msg::DynTrajArray>()
{
  return "dynus_interfaces::msg::DynTrajArray";
}

template<>
inline const char * name<dynus_interfaces::msg::DynTrajArray>()
{
  return "dynus_interfaces/msg/DynTrajArray";
}

template<>
struct has_fixed_size<dynus_interfaces::msg::DynTrajArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynus_interfaces::msg::DynTrajArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dynus_interfaces::msg::DynTrajArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ_ARRAY__TRAITS_HPP_
