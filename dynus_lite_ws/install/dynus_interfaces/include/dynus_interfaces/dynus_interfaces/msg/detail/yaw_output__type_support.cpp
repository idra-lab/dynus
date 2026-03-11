// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dynus_interfaces:msg/YawOutput.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dynus_interfaces/msg/detail/yaw_output__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dynus_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void YawOutput_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dynus_interfaces::msg::YawOutput(_init);
}

void YawOutput_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dynus_interfaces::msg::YawOutput *>(message_memory);
  typed_message->~YawOutput();
}

size_t size_function__YawOutput__sequence(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__YawOutput__sequence(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__YawOutput__sequence(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__YawOutput__sequence(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__YawOutput__sequence(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__YawOutput__sequence(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__YawOutput__sequence(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__YawOutput__sequence(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__YawOutput__control_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__YawOutput__control_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__YawOutput__control_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__YawOutput__control_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__YawOutput__control_points(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__YawOutput__control_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__YawOutput__control_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__YawOutput__control_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__YawOutput__knots(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__YawOutput__knots(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__YawOutput__knots(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__YawOutput__knots(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__YawOutput__knots(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__YawOutput__knots(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__YawOutput__knots(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__YawOutput__knots(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember YawOutput_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces::msg::YawOutput, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sequence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces::msg::YawOutput, sequence),  // bytes offset in struct
    nullptr,  // default value
    size_function__YawOutput__sequence,  // size() function pointer
    get_const_function__YawOutput__sequence,  // get_const(index) function pointer
    get_function__YawOutput__sequence,  // get(index) function pointer
    fetch_function__YawOutput__sequence,  // fetch(index, &value) function pointer
    assign_function__YawOutput__sequence,  // assign(index, value) function pointer
    resize_function__YawOutput__sequence  // resize(index) function pointer
  },
  {
    "control_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces::msg::YawOutput, control_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__YawOutput__control_points,  // size() function pointer
    get_const_function__YawOutput__control_points,  // get_const(index) function pointer
    get_function__YawOutput__control_points,  // get(index) function pointer
    fetch_function__YawOutput__control_points,  // fetch(index, &value) function pointer
    assign_function__YawOutput__control_points,  // assign(index, value) function pointer
    resize_function__YawOutput__control_points  // resize(index) function pointer
  },
  {
    "knots",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces::msg::YawOutput, knots),  // bytes offset in struct
    nullptr,  // default value
    size_function__YawOutput__knots,  // size() function pointer
    get_const_function__YawOutput__knots,  // get_const(index) function pointer
    get_function__YawOutput__knots,  // get(index) function pointer
    fetch_function__YawOutput__knots,  // fetch(index, &value) function pointer
    assign_function__YawOutput__knots,  // assign(index, value) function pointer
    resize_function__YawOutput__knots  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers YawOutput_message_members = {
  "dynus_interfaces::msg",  // message namespace
  "YawOutput",  // message name
  4,  // number of fields
  sizeof(dynus_interfaces::msg::YawOutput),
  YawOutput_message_member_array,  // message members
  YawOutput_init_function,  // function to initialize message memory (memory has to be allocated)
  YawOutput_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t YawOutput_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &YawOutput_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dynus_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynus_interfaces::msg::YawOutput>()
{
  return &::dynus_interfaces::msg::rosidl_typesupport_introspection_cpp::YawOutput_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynus_interfaces, msg, YawOutput)() {
  return &::dynus_interfaces::msg::rosidl_typesupport_introspection_cpp::YawOutput_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
