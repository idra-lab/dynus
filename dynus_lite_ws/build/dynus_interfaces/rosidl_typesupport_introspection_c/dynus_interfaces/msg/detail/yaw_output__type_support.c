// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dynus_interfaces:msg/YawOutput.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dynus_interfaces/msg/detail/yaw_output__rosidl_typesupport_introspection_c.h"
#include "dynus_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dynus_interfaces/msg/detail/yaw_output__functions.h"
#include "dynus_interfaces/msg/detail/yaw_output__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `sequence`
// Member `control_points`
// Member `knots`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__YawOutput_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dynus_interfaces__msg__YawOutput__init(message_memory);
}

void dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__YawOutput_fini_function(void * message_memory)
{
  dynus_interfaces__msg__YawOutput__fini(message_memory);
}

size_t dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__size_function__YawOutput__sequence(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__get_const_function__YawOutput__sequence(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__get_function__YawOutput__sequence(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__fetch_function__YawOutput__sequence(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__get_const_function__YawOutput__sequence(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__assign_function__YawOutput__sequence(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__get_function__YawOutput__sequence(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__resize_function__YawOutput__sequence(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__size_function__YawOutput__control_points(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__get_const_function__YawOutput__control_points(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__get_function__YawOutput__control_points(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__fetch_function__YawOutput__control_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__get_const_function__YawOutput__control_points(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__assign_function__YawOutput__control_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__get_function__YawOutput__control_points(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__resize_function__YawOutput__control_points(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__size_function__YawOutput__knots(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__get_const_function__YawOutput__knots(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__get_function__YawOutput__knots(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__fetch_function__YawOutput__knots(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__get_const_function__YawOutput__knots(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__assign_function__YawOutput__knots(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__get_function__YawOutput__knots(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__resize_function__YawOutput__knots(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__YawOutput_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__YawOutput, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__YawOutput, sequence),  // bytes offset in struct
    NULL,  // default value
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__size_function__YawOutput__sequence,  // size() function pointer
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__get_const_function__YawOutput__sequence,  // get_const(index) function pointer
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__get_function__YawOutput__sequence,  // get(index) function pointer
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__fetch_function__YawOutput__sequence,  // fetch(index, &value) function pointer
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__assign_function__YawOutput__sequence,  // assign(index, value) function pointer
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__resize_function__YawOutput__sequence  // resize(index) function pointer
  },
  {
    "control_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__YawOutput, control_points),  // bytes offset in struct
    NULL,  // default value
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__size_function__YawOutput__control_points,  // size() function pointer
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__get_const_function__YawOutput__control_points,  // get_const(index) function pointer
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__get_function__YawOutput__control_points,  // get(index) function pointer
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__fetch_function__YawOutput__control_points,  // fetch(index, &value) function pointer
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__assign_function__YawOutput__control_points,  // assign(index, value) function pointer
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__resize_function__YawOutput__control_points  // resize(index) function pointer
  },
  {
    "knots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__YawOutput, knots),  // bytes offset in struct
    NULL,  // default value
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__size_function__YawOutput__knots,  // size() function pointer
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__get_const_function__YawOutput__knots,  // get_const(index) function pointer
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__get_function__YawOutput__knots,  // get(index) function pointer
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__fetch_function__YawOutput__knots,  // fetch(index, &value) function pointer
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__assign_function__YawOutput__knots,  // assign(index, value) function pointer
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__resize_function__YawOutput__knots  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__YawOutput_message_members = {
  "dynus_interfaces__msg",  // message namespace
  "YawOutput",  // message name
  4,  // number of fields
  sizeof(dynus_interfaces__msg__YawOutput),
  dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__YawOutput_message_member_array,  // message members
  dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__YawOutput_init_function,  // function to initialize message memory (memory has to be allocated)
  dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__YawOutput_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__YawOutput_message_type_support_handle = {
  0,
  &dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__YawOutput_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dynus_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynus_interfaces, msg, YawOutput)() {
  dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__YawOutput_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__YawOutput_message_type_support_handle.typesupport_identifier) {
    dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__YawOutput_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dynus_interfaces__msg__YawOutput__rosidl_typesupport_introspection_c__YawOutput_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
