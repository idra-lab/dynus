// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from snapstack_msgs2:msg/QuadFlightMode.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "snapstack_msgs2/msg/detail/quad_flight_mode__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace snapstack_msgs2
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void QuadFlightMode_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) snapstack_msgs2::msg::QuadFlightMode(_init);
}

void QuadFlightMode_fini_function(void * message_memory)
{
  auto typed_message = static_cast<snapstack_msgs2::msg::QuadFlightMode *>(message_memory);
  typed_message->~QuadFlightMode();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember QuadFlightMode_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snapstack_msgs2::msg::QuadFlightMode, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snapstack_msgs2::msg::QuadFlightMode, mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers QuadFlightMode_message_members = {
  "snapstack_msgs2::msg",  // message namespace
  "QuadFlightMode",  // message name
  2,  // number of fields
  sizeof(snapstack_msgs2::msg::QuadFlightMode),
  QuadFlightMode_message_member_array,  // message members
  QuadFlightMode_init_function,  // function to initialize message memory (memory has to be allocated)
  QuadFlightMode_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t QuadFlightMode_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &QuadFlightMode_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace snapstack_msgs2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<snapstack_msgs2::msg::QuadFlightMode>()
{
  return &::snapstack_msgs2::msg::rosidl_typesupport_introspection_cpp::QuadFlightMode_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, snapstack_msgs2, msg, QuadFlightMode)() {
  return &::snapstack_msgs2::msg::rosidl_typesupport_introspection_cpp::QuadFlightMode_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
