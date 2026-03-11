// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_mode:srv/MissionModeChange.idl
// generated code does not contain a copyright notice

#ifndef MISSION_MODE__SRV__DETAIL__MISSION_MODE_CHANGE__BUILDER_HPP_
#define MISSION_MODE__SRV__DETAIL__MISSION_MODE_CHANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_mode/srv/detail/mission_mode_change__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_mode
{

namespace srv
{

namespace builder
{

class Init_MissionModeChange_Request_mode
{
public:
  Init_MissionModeChange_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mission_mode::srv::MissionModeChange_Request mode(::mission_mode::srv::MissionModeChange_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_mode::srv::MissionModeChange_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_mode::srv::MissionModeChange_Request>()
{
  return mission_mode::srv::builder::Init_MissionModeChange_Request_mode();
}

}  // namespace mission_mode


namespace mission_mode
{

namespace srv
{

namespace builder
{

class Init_MissionModeChange_Response_received
{
public:
  Init_MissionModeChange_Response_received()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mission_mode::srv::MissionModeChange_Response received(::mission_mode::srv::MissionModeChange_Response::_received_type arg)
  {
    msg_.received = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_mode::srv::MissionModeChange_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_mode::srv::MissionModeChange_Response>()
{
  return mission_mode::srv::builder::Init_MissionModeChange_Response_received();
}

}  // namespace mission_mode

#endif  // MISSION_MODE__SRV__DETAIL__MISSION_MODE_CHANGE__BUILDER_HPP_
