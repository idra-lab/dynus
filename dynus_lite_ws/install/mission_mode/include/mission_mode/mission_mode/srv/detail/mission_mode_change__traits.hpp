// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mission_mode:srv/MissionModeChange.idl
// generated code does not contain a copyright notice

#ifndef MISSION_MODE__SRV__DETAIL__MISSION_MODE_CHANGE__TRAITS_HPP_
#define MISSION_MODE__SRV__DETAIL__MISSION_MODE_CHANGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mission_mode/srv/detail/mission_mode_change__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mission_mode
{

namespace srv
{

inline void to_flow_style_yaml(
  const MissionModeChange_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionModeChange_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const MissionModeChange_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mission_mode

namespace rosidl_generator_traits
{

[[deprecated("use mission_mode::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_mode::srv::MissionModeChange_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_mode::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_mode::srv::to_yaml() instead")]]
inline std::string to_yaml(const mission_mode::srv::MissionModeChange_Request & msg)
{
  return mission_mode::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mission_mode::srv::MissionModeChange_Request>()
{
  return "mission_mode::srv::MissionModeChange_Request";
}

template<>
inline const char * name<mission_mode::srv::MissionModeChange_Request>()
{
  return "mission_mode/srv/MissionModeChange_Request";
}

template<>
struct has_fixed_size<mission_mode::srv::MissionModeChange_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mission_mode::srv::MissionModeChange_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mission_mode::srv::MissionModeChange_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mission_mode
{

namespace srv
{

inline void to_flow_style_yaml(
  const MissionModeChange_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: received
  {
    out << "received: ";
    rosidl_generator_traits::value_to_yaml(msg.received, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionModeChange_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: received
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "received: ";
    rosidl_generator_traits::value_to_yaml(msg.received, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionModeChange_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mission_mode

namespace rosidl_generator_traits
{

[[deprecated("use mission_mode::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_mode::srv::MissionModeChange_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_mode::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_mode::srv::to_yaml() instead")]]
inline std::string to_yaml(const mission_mode::srv::MissionModeChange_Response & msg)
{
  return mission_mode::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mission_mode::srv::MissionModeChange_Response>()
{
  return "mission_mode::srv::MissionModeChange_Response";
}

template<>
inline const char * name<mission_mode::srv::MissionModeChange_Response>()
{
  return "mission_mode/srv/MissionModeChange_Response";
}

template<>
struct has_fixed_size<mission_mode::srv::MissionModeChange_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mission_mode::srv::MissionModeChange_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mission_mode::srv::MissionModeChange_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mission_mode::srv::MissionModeChange>()
{
  return "mission_mode::srv::MissionModeChange";
}

template<>
inline const char * name<mission_mode::srv::MissionModeChange>()
{
  return "mission_mode/srv/MissionModeChange";
}

template<>
struct has_fixed_size<mission_mode::srv::MissionModeChange>
  : std::integral_constant<
    bool,
    has_fixed_size<mission_mode::srv::MissionModeChange_Request>::value &&
    has_fixed_size<mission_mode::srv::MissionModeChange_Response>::value
  >
{
};

template<>
struct has_bounded_size<mission_mode::srv::MissionModeChange>
  : std::integral_constant<
    bool,
    has_bounded_size<mission_mode::srv::MissionModeChange_Request>::value &&
    has_bounded_size<mission_mode::srv::MissionModeChange_Response>::value
  >
{
};

template<>
struct is_service<mission_mode::srv::MissionModeChange>
  : std::true_type
{
};

template<>
struct is_service_request<mission_mode::srv::MissionModeChange_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mission_mode::srv::MissionModeChange_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MISSION_MODE__SRV__DETAIL__MISSION_MODE_CHANGE__TRAITS_HPP_
