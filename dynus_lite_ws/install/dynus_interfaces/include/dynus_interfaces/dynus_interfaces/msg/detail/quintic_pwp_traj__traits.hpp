// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynus_interfaces:msg/QuinticPWPTraj.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__QUINTIC_PWP_TRAJ__TRAITS_HPP_
#define DYNUS_INTERFACES__MSG__DETAIL__QUINTIC_PWP_TRAJ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynus_interfaces/msg/detail/quintic_pwp_traj__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'coeff_x'
// Member 'coeff_y'
// Member 'coeff_z'
#include "dynus_interfaces/msg/detail/quintic_coeff_poly3__traits.hpp"

namespace dynus_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const QuinticPWPTraj & msg,
  std::ostream & out)
{
  out << "{";
  // member: times
  {
    if (msg.times.size() == 0) {
      out << "times: []";
    } else {
      out << "times: [";
      size_t pending_items = msg.times.size();
      for (auto item : msg.times) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: coeff_x
  {
    if (msg.coeff_x.size() == 0) {
      out << "coeff_x: []";
    } else {
      out << "coeff_x: [";
      size_t pending_items = msg.coeff_x.size();
      for (auto item : msg.coeff_x) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: coeff_y
  {
    if (msg.coeff_y.size() == 0) {
      out << "coeff_y: []";
    } else {
      out << "coeff_y: [";
      size_t pending_items = msg.coeff_y.size();
      for (auto item : msg.coeff_y) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: coeff_z
  {
    if (msg.coeff_z.size() == 0) {
      out << "coeff_z: []";
    } else {
      out << "coeff_z: [";
      size_t pending_items = msg.coeff_z.size();
      for (auto item : msg.coeff_z) {
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
  const QuinticPWPTraj & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: times
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.times.size() == 0) {
      out << "times: []\n";
    } else {
      out << "times:\n";
      for (auto item : msg.times) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: coeff_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coeff_x.size() == 0) {
      out << "coeff_x: []\n";
    } else {
      out << "coeff_x:\n";
      for (auto item : msg.coeff_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: coeff_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coeff_y.size() == 0) {
      out << "coeff_y: []\n";
    } else {
      out << "coeff_y:\n";
      for (auto item : msg.coeff_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: coeff_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coeff_z.size() == 0) {
      out << "coeff_z: []\n";
    } else {
      out << "coeff_z:\n";
      for (auto item : msg.coeff_z) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const QuinticPWPTraj & msg, bool use_flow_style = false)
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
  const dynus_interfaces::msg::QuinticPWPTraj & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynus_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynus_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const dynus_interfaces::msg::QuinticPWPTraj & msg)
{
  return dynus_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dynus_interfaces::msg::QuinticPWPTraj>()
{
  return "dynus_interfaces::msg::QuinticPWPTraj";
}

template<>
inline const char * name<dynus_interfaces::msg::QuinticPWPTraj>()
{
  return "dynus_interfaces/msg/QuinticPWPTraj";
}

template<>
struct has_fixed_size<dynus_interfaces::msg::QuinticPWPTraj>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynus_interfaces::msg::QuinticPWPTraj>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dynus_interfaces::msg::QuinticPWPTraj>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNUS_INTERFACES__MSG__DETAIL__QUINTIC_PWP_TRAJ__TRAITS_HPP_
