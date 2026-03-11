// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dynus_interfaces:msg/QuinticPWPTraj.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dynus_interfaces/msg/detail/quintic_pwp_traj__rosidl_typesupport_introspection_c.h"
#include "dynus_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dynus_interfaces/msg/detail/quintic_pwp_traj__functions.h"
#include "dynus_interfaces/msg/detail/quintic_pwp_traj__struct.h"


// Include directives for member types
// Member `times`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `coeff_x`
// Member `coeff_y`
// Member `coeff_z`
#include "dynus_interfaces/msg/quintic_coeff_poly3.h"
// Member `coeff_x`
// Member `coeff_y`
// Member `coeff_z`
#include "dynus_interfaces/msg/detail/quintic_coeff_poly3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__QuinticPWPTraj_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dynus_interfaces__msg__QuinticPWPTraj__init(message_memory);
}

void dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__QuinticPWPTraj_fini_function(void * message_memory)
{
  dynus_interfaces__msg__QuinticPWPTraj__fini(message_memory);
}

size_t dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__size_function__QuinticPWPTraj__times(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_const_function__QuinticPWPTraj__times(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_function__QuinticPWPTraj__times(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__fetch_function__QuinticPWPTraj__times(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_const_function__QuinticPWPTraj__times(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__assign_function__QuinticPWPTraj__times(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_function__QuinticPWPTraj__times(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__resize_function__QuinticPWPTraj__times(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__size_function__QuinticPWPTraj__coeff_x(
  const void * untyped_member)
{
  const dynus_interfaces__msg__QuinticCoeffPoly3__Sequence * member =
    (const dynus_interfaces__msg__QuinticCoeffPoly3__Sequence *)(untyped_member);
  return member->size;
}

const void * dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_const_function__QuinticPWPTraj__coeff_x(
  const void * untyped_member, size_t index)
{
  const dynus_interfaces__msg__QuinticCoeffPoly3__Sequence * member =
    (const dynus_interfaces__msg__QuinticCoeffPoly3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_function__QuinticPWPTraj__coeff_x(
  void * untyped_member, size_t index)
{
  dynus_interfaces__msg__QuinticCoeffPoly3__Sequence * member =
    (dynus_interfaces__msg__QuinticCoeffPoly3__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__fetch_function__QuinticPWPTraj__coeff_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const dynus_interfaces__msg__QuinticCoeffPoly3 * item =
    ((const dynus_interfaces__msg__QuinticCoeffPoly3 *)
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_const_function__QuinticPWPTraj__coeff_x(untyped_member, index));
  dynus_interfaces__msg__QuinticCoeffPoly3 * value =
    (dynus_interfaces__msg__QuinticCoeffPoly3 *)(untyped_value);
  *value = *item;
}

void dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__assign_function__QuinticPWPTraj__coeff_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  dynus_interfaces__msg__QuinticCoeffPoly3 * item =
    ((dynus_interfaces__msg__QuinticCoeffPoly3 *)
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_function__QuinticPWPTraj__coeff_x(untyped_member, index));
  const dynus_interfaces__msg__QuinticCoeffPoly3 * value =
    (const dynus_interfaces__msg__QuinticCoeffPoly3 *)(untyped_value);
  *item = *value;
}

bool dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__resize_function__QuinticPWPTraj__coeff_x(
  void * untyped_member, size_t size)
{
  dynus_interfaces__msg__QuinticCoeffPoly3__Sequence * member =
    (dynus_interfaces__msg__QuinticCoeffPoly3__Sequence *)(untyped_member);
  dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__fini(member);
  return dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__init(member, size);
}

size_t dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__size_function__QuinticPWPTraj__coeff_y(
  const void * untyped_member)
{
  const dynus_interfaces__msg__QuinticCoeffPoly3__Sequence * member =
    (const dynus_interfaces__msg__QuinticCoeffPoly3__Sequence *)(untyped_member);
  return member->size;
}

const void * dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_const_function__QuinticPWPTraj__coeff_y(
  const void * untyped_member, size_t index)
{
  const dynus_interfaces__msg__QuinticCoeffPoly3__Sequence * member =
    (const dynus_interfaces__msg__QuinticCoeffPoly3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_function__QuinticPWPTraj__coeff_y(
  void * untyped_member, size_t index)
{
  dynus_interfaces__msg__QuinticCoeffPoly3__Sequence * member =
    (dynus_interfaces__msg__QuinticCoeffPoly3__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__fetch_function__QuinticPWPTraj__coeff_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const dynus_interfaces__msg__QuinticCoeffPoly3 * item =
    ((const dynus_interfaces__msg__QuinticCoeffPoly3 *)
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_const_function__QuinticPWPTraj__coeff_y(untyped_member, index));
  dynus_interfaces__msg__QuinticCoeffPoly3 * value =
    (dynus_interfaces__msg__QuinticCoeffPoly3 *)(untyped_value);
  *value = *item;
}

void dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__assign_function__QuinticPWPTraj__coeff_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  dynus_interfaces__msg__QuinticCoeffPoly3 * item =
    ((dynus_interfaces__msg__QuinticCoeffPoly3 *)
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_function__QuinticPWPTraj__coeff_y(untyped_member, index));
  const dynus_interfaces__msg__QuinticCoeffPoly3 * value =
    (const dynus_interfaces__msg__QuinticCoeffPoly3 *)(untyped_value);
  *item = *value;
}

bool dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__resize_function__QuinticPWPTraj__coeff_y(
  void * untyped_member, size_t size)
{
  dynus_interfaces__msg__QuinticCoeffPoly3__Sequence * member =
    (dynus_interfaces__msg__QuinticCoeffPoly3__Sequence *)(untyped_member);
  dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__fini(member);
  return dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__init(member, size);
}

size_t dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__size_function__QuinticPWPTraj__coeff_z(
  const void * untyped_member)
{
  const dynus_interfaces__msg__QuinticCoeffPoly3__Sequence * member =
    (const dynus_interfaces__msg__QuinticCoeffPoly3__Sequence *)(untyped_member);
  return member->size;
}

const void * dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_const_function__QuinticPWPTraj__coeff_z(
  const void * untyped_member, size_t index)
{
  const dynus_interfaces__msg__QuinticCoeffPoly3__Sequence * member =
    (const dynus_interfaces__msg__QuinticCoeffPoly3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_function__QuinticPWPTraj__coeff_z(
  void * untyped_member, size_t index)
{
  dynus_interfaces__msg__QuinticCoeffPoly3__Sequence * member =
    (dynus_interfaces__msg__QuinticCoeffPoly3__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__fetch_function__QuinticPWPTraj__coeff_z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const dynus_interfaces__msg__QuinticCoeffPoly3 * item =
    ((const dynus_interfaces__msg__QuinticCoeffPoly3 *)
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_const_function__QuinticPWPTraj__coeff_z(untyped_member, index));
  dynus_interfaces__msg__QuinticCoeffPoly3 * value =
    (dynus_interfaces__msg__QuinticCoeffPoly3 *)(untyped_value);
  *value = *item;
}

void dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__assign_function__QuinticPWPTraj__coeff_z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  dynus_interfaces__msg__QuinticCoeffPoly3 * item =
    ((dynus_interfaces__msg__QuinticCoeffPoly3 *)
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_function__QuinticPWPTraj__coeff_z(untyped_member, index));
  const dynus_interfaces__msg__QuinticCoeffPoly3 * value =
    (const dynus_interfaces__msg__QuinticCoeffPoly3 *)(untyped_value);
  *item = *value;
}

bool dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__resize_function__QuinticPWPTraj__coeff_z(
  void * untyped_member, size_t size)
{
  dynus_interfaces__msg__QuinticCoeffPoly3__Sequence * member =
    (dynus_interfaces__msg__QuinticCoeffPoly3__Sequence *)(untyped_member);
  dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__fini(member);
  return dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__QuinticPWPTraj_message_member_array[4] = {
  {
    "times",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__QuinticPWPTraj, times),  // bytes offset in struct
    NULL,  // default value
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__size_function__QuinticPWPTraj__times,  // size() function pointer
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_const_function__QuinticPWPTraj__times,  // get_const(index) function pointer
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_function__QuinticPWPTraj__times,  // get(index) function pointer
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__fetch_function__QuinticPWPTraj__times,  // fetch(index, &value) function pointer
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__assign_function__QuinticPWPTraj__times,  // assign(index, value) function pointer
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__resize_function__QuinticPWPTraj__times  // resize(index) function pointer
  },
  {
    "coeff_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__QuinticPWPTraj, coeff_x),  // bytes offset in struct
    NULL,  // default value
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__size_function__QuinticPWPTraj__coeff_x,  // size() function pointer
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_const_function__QuinticPWPTraj__coeff_x,  // get_const(index) function pointer
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_function__QuinticPWPTraj__coeff_x,  // get(index) function pointer
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__fetch_function__QuinticPWPTraj__coeff_x,  // fetch(index, &value) function pointer
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__assign_function__QuinticPWPTraj__coeff_x,  // assign(index, value) function pointer
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__resize_function__QuinticPWPTraj__coeff_x  // resize(index) function pointer
  },
  {
    "coeff_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__QuinticPWPTraj, coeff_y),  // bytes offset in struct
    NULL,  // default value
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__size_function__QuinticPWPTraj__coeff_y,  // size() function pointer
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_const_function__QuinticPWPTraj__coeff_y,  // get_const(index) function pointer
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_function__QuinticPWPTraj__coeff_y,  // get(index) function pointer
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__fetch_function__QuinticPWPTraj__coeff_y,  // fetch(index, &value) function pointer
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__assign_function__QuinticPWPTraj__coeff_y,  // assign(index, value) function pointer
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__resize_function__QuinticPWPTraj__coeff_y  // resize(index) function pointer
  },
  {
    "coeff_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__QuinticPWPTraj, coeff_z),  // bytes offset in struct
    NULL,  // default value
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__size_function__QuinticPWPTraj__coeff_z,  // size() function pointer
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_const_function__QuinticPWPTraj__coeff_z,  // get_const(index) function pointer
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__get_function__QuinticPWPTraj__coeff_z,  // get(index) function pointer
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__fetch_function__QuinticPWPTraj__coeff_z,  // fetch(index, &value) function pointer
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__assign_function__QuinticPWPTraj__coeff_z,  // assign(index, value) function pointer
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__resize_function__QuinticPWPTraj__coeff_z  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__QuinticPWPTraj_message_members = {
  "dynus_interfaces__msg",  // message namespace
  "QuinticPWPTraj",  // message name
  4,  // number of fields
  sizeof(dynus_interfaces__msg__QuinticPWPTraj),
  dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__QuinticPWPTraj_message_member_array,  // message members
  dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__QuinticPWPTraj_init_function,  // function to initialize message memory (memory has to be allocated)
  dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__QuinticPWPTraj_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__QuinticPWPTraj_message_type_support_handle = {
  0,
  &dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__QuinticPWPTraj_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dynus_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynus_interfaces, msg, QuinticPWPTraj)() {
  dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__QuinticPWPTraj_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynus_interfaces, msg, QuinticCoeffPoly3)();
  dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__QuinticPWPTraj_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynus_interfaces, msg, QuinticCoeffPoly3)();
  dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__QuinticPWPTraj_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynus_interfaces, msg, QuinticCoeffPoly3)();
  if (!dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__QuinticPWPTraj_message_type_support_handle.typesupport_identifier) {
    dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__QuinticPWPTraj_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dynus_interfaces__msg__QuinticPWPTraj__rosidl_typesupport_introspection_c__QuinticPWPTraj_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
