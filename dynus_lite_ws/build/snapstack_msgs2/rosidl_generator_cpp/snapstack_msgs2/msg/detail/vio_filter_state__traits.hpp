// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from snapstack_msgs2:msg/VioFilterState.idl
// generated code does not contain a copyright notice

#ifndef SNAPSTACK_MSGS2__MSG__DETAIL__VIO_FILTER_STATE__TRAITS_HPP_
#define SNAPSTACK_MSGS2__MSG__DETAIL__VIO_FILTER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "snapstack_msgs2/msg/detail/vio_filter_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
// Member 'extrinsics'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'bw'
// Member 'ba'
// Member 'accel_meas'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace snapstack_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const VioFilterState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
    out << ", ";
  }

  // member: bw
  {
    out << "bw: ";
    to_flow_style_yaml(msg.bw, out);
    out << ", ";
  }

  // member: ba
  {
    out << "ba: ";
    to_flow_style_yaml(msg.ba, out);
    out << ", ";
  }

  // member: extrinsics
  {
    out << "extrinsics: ";
    to_flow_style_yaml(msg.extrinsics, out);
    out << ", ";
  }

  // member: accel_meas
  {
    out << "accel_meas: ";
    to_flow_style_yaml(msg.accel_meas, out);
    out << ", ";
  }

  // member: n
  {
    out << "n: ";
    rosidl_generator_traits::value_to_yaml(msg.n, out);
    out << ", ";
  }

  // member: error_cov
  {
    if (msg.error_cov.size() == 0) {
      out << "error_cov: []";
    } else {
      out << "error_cov: [";
      size_t pending_items = msg.error_cov.size();
      for (auto item : msg.error_cov) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const VioFilterState & msg,
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

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }

  // member: bw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bw:\n";
    to_block_style_yaml(msg.bw, out, indentation + 2);
  }

  // member: ba
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ba:\n";
    to_block_style_yaml(msg.ba, out, indentation + 2);
  }

  // member: extrinsics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extrinsics:\n";
    to_block_style_yaml(msg.extrinsics, out, indentation + 2);
  }

  // member: accel_meas
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_meas:\n";
    to_block_style_yaml(msg.accel_meas, out, indentation + 2);
  }

  // member: n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n: ";
    rosidl_generator_traits::value_to_yaml(msg.n, out);
    out << "\n";
  }

  // member: error_cov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.error_cov.size() == 0) {
      out << "error_cov: []\n";
    } else {
      out << "error_cov:\n";
      for (auto item : msg.error_cov) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VioFilterState & msg, bool use_flow_style = false)
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
  const snapstack_msgs2::msg::VioFilterState & msg,
  std::ostream & out, size_t indentation = 0)
{
  snapstack_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use snapstack_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const snapstack_msgs2::msg::VioFilterState & msg)
{
  return snapstack_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<snapstack_msgs2::msg::VioFilterState>()
{
  return "snapstack_msgs2::msg::VioFilterState";
}

template<>
inline const char * name<snapstack_msgs2::msg::VioFilterState>()
{
  return "snapstack_msgs2/msg/VioFilterState";
}

template<>
struct has_fixed_size<snapstack_msgs2::msg::VioFilterState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<snapstack_msgs2::msg::VioFilterState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<snapstack_msgs2::msg::VioFilterState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SNAPSTACK_MSGS2__MSG__DETAIL__VIO_FILTER_STATE__TRAITS_HPP_
