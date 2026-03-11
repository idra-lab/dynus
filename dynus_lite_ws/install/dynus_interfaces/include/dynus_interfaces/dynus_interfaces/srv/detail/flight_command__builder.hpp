// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynus_interfaces:srv/FlightCommand.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__SRV__DETAIL__FLIGHT_COMMAND__BUILDER_HPP_
#define DYNUS_INTERFACES__SRV__DETAIL__FLIGHT_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynus_interfaces/srv/detail/flight_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynus_interfaces
{

namespace srv
{

namespace builder
{

class Init_FlightCommand_Request_command
{
public:
  Init_FlightCommand_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynus_interfaces::srv::FlightCommand_Request command(::dynus_interfaces::srv::FlightCommand_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynus_interfaces::srv::FlightCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynus_interfaces::srv::FlightCommand_Request>()
{
  return dynus_interfaces::srv::builder::Init_FlightCommand_Request_command();
}

}  // namespace dynus_interfaces


namespace dynus_interfaces
{

namespace srv
{

namespace builder
{

class Init_FlightCommand_Response_success
{
public:
  Init_FlightCommand_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynus_interfaces::srv::FlightCommand_Response success(::dynus_interfaces::srv::FlightCommand_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynus_interfaces::srv::FlightCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynus_interfaces::srv::FlightCommand_Response>()
{
  return dynus_interfaces::srv::builder::Init_FlightCommand_Response_success();
}

}  // namespace dynus_interfaces

#endif  // DYNUS_INTERFACES__SRV__DETAIL__FLIGHT_COMMAND__BUILDER_HPP_
