// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynus_interfaces:srv/FlightCommand.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__SRV__DETAIL__FLIGHT_COMMAND__TRAITS_HPP_
#define DYNUS_INTERFACES__SRV__DETAIL__FLIGHT_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynus_interfaces/srv/detail/flight_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dynus_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const FlightCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FlightCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FlightCommand_Request & msg, bool use_flow_style = false)
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

}  // namespace dynus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dynus_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynus_interfaces::srv::FlightCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynus_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynus_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynus_interfaces::srv::FlightCommand_Request & msg)
{
  return dynus_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynus_interfaces::srv::FlightCommand_Request>()
{
  return "dynus_interfaces::srv::FlightCommand_Request";
}

template<>
inline const char * name<dynus_interfaces::srv::FlightCommand_Request>()
{
  return "dynus_interfaces/srv/FlightCommand_Request";
}

template<>
struct has_fixed_size<dynus_interfaces::srv::FlightCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynus_interfaces::srv::FlightCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dynus_interfaces::srv::FlightCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dynus_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const FlightCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FlightCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FlightCommand_Response & msg, bool use_flow_style = false)
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

}  // namespace dynus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dynus_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynus_interfaces::srv::FlightCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynus_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynus_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynus_interfaces::srv::FlightCommand_Response & msg)
{
  return dynus_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynus_interfaces::srv::FlightCommand_Response>()
{
  return "dynus_interfaces::srv::FlightCommand_Response";
}

template<>
inline const char * name<dynus_interfaces::srv::FlightCommand_Response>()
{
  return "dynus_interfaces/srv/FlightCommand_Response";
}

template<>
struct has_fixed_size<dynus_interfaces::srv::FlightCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynus_interfaces::srv::FlightCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynus_interfaces::srv::FlightCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dynus_interfaces::srv::FlightCommand>()
{
  return "dynus_interfaces::srv::FlightCommand";
}

template<>
inline const char * name<dynus_interfaces::srv::FlightCommand>()
{
  return "dynus_interfaces/srv/FlightCommand";
}

template<>
struct has_fixed_size<dynus_interfaces::srv::FlightCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<dynus_interfaces::srv::FlightCommand_Request>::value &&
    has_fixed_size<dynus_interfaces::srv::FlightCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<dynus_interfaces::srv::FlightCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<dynus_interfaces::srv::FlightCommand_Request>::value &&
    has_bounded_size<dynus_interfaces::srv::FlightCommand_Response>::value
  >
{
};

template<>
struct is_service<dynus_interfaces::srv::FlightCommand>
  : std::true_type
{
};

template<>
struct is_service_request<dynus_interfaces::srv::FlightCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dynus_interfaces::srv::FlightCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DYNUS_INTERFACES__SRV__DETAIL__FLIGHT_COMMAND__TRAITS_HPP_
