// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dynus_interfaces:msg/QuinticPWPTraj.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dynus_interfaces/msg/detail/quintic_pwp_traj__struct.hpp"
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

void QuinticPWPTraj_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dynus_interfaces::msg::QuinticPWPTraj(_init);
}

void QuinticPWPTraj_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dynus_interfaces::msg::QuinticPWPTraj *>(message_memory);
  typed_message->~QuinticPWPTraj();
}

size_t size_function__QuinticPWPTraj__times(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__QuinticPWPTraj__times(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__QuinticPWPTraj__times(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__QuinticPWPTraj__times(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__QuinticPWPTraj__times(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__QuinticPWPTraj__times(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__QuinticPWPTraj__times(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__QuinticPWPTraj__times(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__QuinticPWPTraj__coeff_x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<dynus_interfaces::msg::QuinticCoeffPoly3> *>(untyped_member);
  return member->size();
}

const void * get_const_function__QuinticPWPTraj__coeff_x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<dynus_interfaces::msg::QuinticCoeffPoly3> *>(untyped_member);
  return &member[index];
}

void * get_function__QuinticPWPTraj__coeff_x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<dynus_interfaces::msg::QuinticCoeffPoly3> *>(untyped_member);
  return &member[index];
}

void fetch_function__QuinticPWPTraj__coeff_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const dynus_interfaces::msg::QuinticCoeffPoly3 *>(
    get_const_function__QuinticPWPTraj__coeff_x(untyped_member, index));
  auto & value = *reinterpret_cast<dynus_interfaces::msg::QuinticCoeffPoly3 *>(untyped_value);
  value = item;
}

void assign_function__QuinticPWPTraj__coeff_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<dynus_interfaces::msg::QuinticCoeffPoly3 *>(
    get_function__QuinticPWPTraj__coeff_x(untyped_member, index));
  const auto & value = *reinterpret_cast<const dynus_interfaces::msg::QuinticCoeffPoly3 *>(untyped_value);
  item = value;
}

void resize_function__QuinticPWPTraj__coeff_x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<dynus_interfaces::msg::QuinticCoeffPoly3> *>(untyped_member);
  member->resize(size);
}

size_t size_function__QuinticPWPTraj__coeff_y(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<dynus_interfaces::msg::QuinticCoeffPoly3> *>(untyped_member);
  return member->size();
}

const void * get_const_function__QuinticPWPTraj__coeff_y(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<dynus_interfaces::msg::QuinticCoeffPoly3> *>(untyped_member);
  return &member[index];
}

void * get_function__QuinticPWPTraj__coeff_y(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<dynus_interfaces::msg::QuinticCoeffPoly3> *>(untyped_member);
  return &member[index];
}

void fetch_function__QuinticPWPTraj__coeff_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const dynus_interfaces::msg::QuinticCoeffPoly3 *>(
    get_const_function__QuinticPWPTraj__coeff_y(untyped_member, index));
  auto & value = *reinterpret_cast<dynus_interfaces::msg::QuinticCoeffPoly3 *>(untyped_value);
  value = item;
}

void assign_function__QuinticPWPTraj__coeff_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<dynus_interfaces::msg::QuinticCoeffPoly3 *>(
    get_function__QuinticPWPTraj__coeff_y(untyped_member, index));
  const auto & value = *reinterpret_cast<const dynus_interfaces::msg::QuinticCoeffPoly3 *>(untyped_value);
  item = value;
}

void resize_function__QuinticPWPTraj__coeff_y(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<dynus_interfaces::msg::QuinticCoeffPoly3> *>(untyped_member);
  member->resize(size);
}

size_t size_function__QuinticPWPTraj__coeff_z(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<dynus_interfaces::msg::QuinticCoeffPoly3> *>(untyped_member);
  return member->size();
}

const void * get_const_function__QuinticPWPTraj__coeff_z(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<dynus_interfaces::msg::QuinticCoeffPoly3> *>(untyped_member);
  return &member[index];
}

void * get_function__QuinticPWPTraj__coeff_z(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<dynus_interfaces::msg::QuinticCoeffPoly3> *>(untyped_member);
  return &member[index];
}

void fetch_function__QuinticPWPTraj__coeff_z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const dynus_interfaces::msg::QuinticCoeffPoly3 *>(
    get_const_function__QuinticPWPTraj__coeff_z(untyped_member, index));
  auto & value = *reinterpret_cast<dynus_interfaces::msg::QuinticCoeffPoly3 *>(untyped_value);
  value = item;
}

void assign_function__QuinticPWPTraj__coeff_z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<dynus_interfaces::msg::QuinticCoeffPoly3 *>(
    get_function__QuinticPWPTraj__coeff_z(untyped_member, index));
  const auto & value = *reinterpret_cast<const dynus_interfaces::msg::QuinticCoeffPoly3 *>(untyped_value);
  item = value;
}

void resize_function__QuinticPWPTraj__coeff_z(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<dynus_interfaces::msg::QuinticCoeffPoly3> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember QuinticPWPTraj_message_member_array[4] = {
  {
    "times",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces::msg::QuinticPWPTraj, times),  // bytes offset in struct
    nullptr,  // default value
    size_function__QuinticPWPTraj__times,  // size() function pointer
    get_const_function__QuinticPWPTraj__times,  // get_const(index) function pointer
    get_function__QuinticPWPTraj__times,  // get(index) function pointer
    fetch_function__QuinticPWPTraj__times,  // fetch(index, &value) function pointer
    assign_function__QuinticPWPTraj__times,  // assign(index, value) function pointer
    resize_function__QuinticPWPTraj__times  // resize(index) function pointer
  },
  {
    "coeff_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dynus_interfaces::msg::QuinticCoeffPoly3>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces::msg::QuinticPWPTraj, coeff_x),  // bytes offset in struct
    nullptr,  // default value
    size_function__QuinticPWPTraj__coeff_x,  // size() function pointer
    get_const_function__QuinticPWPTraj__coeff_x,  // get_const(index) function pointer
    get_function__QuinticPWPTraj__coeff_x,  // get(index) function pointer
    fetch_function__QuinticPWPTraj__coeff_x,  // fetch(index, &value) function pointer
    assign_function__QuinticPWPTraj__coeff_x,  // assign(index, value) function pointer
    resize_function__QuinticPWPTraj__coeff_x  // resize(index) function pointer
  },
  {
    "coeff_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dynus_interfaces::msg::QuinticCoeffPoly3>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces::msg::QuinticPWPTraj, coeff_y),  // bytes offset in struct
    nullptr,  // default value
    size_function__QuinticPWPTraj__coeff_y,  // size() function pointer
    get_const_function__QuinticPWPTraj__coeff_y,  // get_const(index) function pointer
    get_function__QuinticPWPTraj__coeff_y,  // get(index) function pointer
    fetch_function__QuinticPWPTraj__coeff_y,  // fetch(index, &value) function pointer
    assign_function__QuinticPWPTraj__coeff_y,  // assign(index, value) function pointer
    resize_function__QuinticPWPTraj__coeff_y  // resize(index) function pointer
  },
  {
    "coeff_z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dynus_interfaces::msg::QuinticCoeffPoly3>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces::msg::QuinticPWPTraj, coeff_z),  // bytes offset in struct
    nullptr,  // default value
    size_function__QuinticPWPTraj__coeff_z,  // size() function pointer
    get_const_function__QuinticPWPTraj__coeff_z,  // get_const(index) function pointer
    get_function__QuinticPWPTraj__coeff_z,  // get(index) function pointer
    fetch_function__QuinticPWPTraj__coeff_z,  // fetch(index, &value) function pointer
    assign_function__QuinticPWPTraj__coeff_z,  // assign(index, value) function pointer
    resize_function__QuinticPWPTraj__coeff_z  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers QuinticPWPTraj_message_members = {
  "dynus_interfaces::msg",  // message namespace
  "QuinticPWPTraj",  // message name
  4,  // number of fields
  sizeof(dynus_interfaces::msg::QuinticPWPTraj),
  QuinticPWPTraj_message_member_array,  // message members
  QuinticPWPTraj_init_function,  // function to initialize message memory (memory has to be allocated)
  QuinticPWPTraj_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t QuinticPWPTraj_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &QuinticPWPTraj_message_members,
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
get_message_type_support_handle<dynus_interfaces::msg::QuinticPWPTraj>()
{
  return &::dynus_interfaces::msg::rosidl_typesupport_introspection_cpp::QuinticPWPTraj_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynus_interfaces, msg, QuinticPWPTraj)() {
  return &::dynus_interfaces::msg::rosidl_typesupport_introspection_cpp::QuinticPWPTraj_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
