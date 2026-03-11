// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dynus_interfaces:msg/DynTrajArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dynus_interfaces/msg/detail/dyn_traj_array__rosidl_typesupport_introspection_c.h"
#include "dynus_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dynus_interfaces/msg/detail/dyn_traj_array__functions.h"
#include "dynus_interfaces/msg/detail/dyn_traj_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `trajs`
#include "dynus_interfaces/msg/dyn_traj.h"
// Member `trajs`
#include "dynus_interfaces/msg/detail/dyn_traj__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__DynTrajArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dynus_interfaces__msg__DynTrajArray__init(message_memory);
}

void dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__DynTrajArray_fini_function(void * message_memory)
{
  dynus_interfaces__msg__DynTrajArray__fini(message_memory);
}

size_t dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__size_function__DynTrajArray__trajs(
  const void * untyped_member)
{
  const dynus_interfaces__msg__DynTraj__Sequence * member =
    (const dynus_interfaces__msg__DynTraj__Sequence *)(untyped_member);
  return member->size;
}

const void * dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__get_const_function__DynTrajArray__trajs(
  const void * untyped_member, size_t index)
{
  const dynus_interfaces__msg__DynTraj__Sequence * member =
    (const dynus_interfaces__msg__DynTraj__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__get_function__DynTrajArray__trajs(
  void * untyped_member, size_t index)
{
  dynus_interfaces__msg__DynTraj__Sequence * member =
    (dynus_interfaces__msg__DynTraj__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__fetch_function__DynTrajArray__trajs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const dynus_interfaces__msg__DynTraj * item =
    ((const dynus_interfaces__msg__DynTraj *)
    dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__get_const_function__DynTrajArray__trajs(untyped_member, index));
  dynus_interfaces__msg__DynTraj * value =
    (dynus_interfaces__msg__DynTraj *)(untyped_value);
  *value = *item;
}

void dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__assign_function__DynTrajArray__trajs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  dynus_interfaces__msg__DynTraj * item =
    ((dynus_interfaces__msg__DynTraj *)
    dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__get_function__DynTrajArray__trajs(untyped_member, index));
  const dynus_interfaces__msg__DynTraj * value =
    (const dynus_interfaces__msg__DynTraj *)(untyped_value);
  *item = *value;
}

bool dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__resize_function__DynTrajArray__trajs(
  void * untyped_member, size_t size)
{
  dynus_interfaces__msg__DynTraj__Sequence * member =
    (dynus_interfaces__msg__DynTraj__Sequence *)(untyped_member);
  dynus_interfaces__msg__DynTraj__Sequence__fini(member);
  return dynus_interfaces__msg__DynTraj__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__DynTrajArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__DynTrajArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__DynTrajArray, trajs),  // bytes offset in struct
    NULL,  // default value
    dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__size_function__DynTrajArray__trajs,  // size() function pointer
    dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__get_const_function__DynTrajArray__trajs,  // get_const(index) function pointer
    dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__get_function__DynTrajArray__trajs,  // get(index) function pointer
    dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__fetch_function__DynTrajArray__trajs,  // fetch(index, &value) function pointer
    dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__assign_function__DynTrajArray__trajs,  // assign(index, value) function pointer
    dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__resize_function__DynTrajArray__trajs  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__DynTrajArray_message_members = {
  "dynus_interfaces__msg",  // message namespace
  "DynTrajArray",  // message name
  2,  // number of fields
  sizeof(dynus_interfaces__msg__DynTrajArray),
  dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__DynTrajArray_message_member_array,  // message members
  dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__DynTrajArray_init_function,  // function to initialize message memory (memory has to be allocated)
  dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__DynTrajArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__DynTrajArray_message_type_support_handle = {
  0,
  &dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__DynTrajArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dynus_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynus_interfaces, msg, DynTrajArray)() {
  dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__DynTrajArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__DynTrajArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynus_interfaces, msg, DynTraj)();
  if (!dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__DynTrajArray_message_type_support_handle.typesupport_identifier) {
    dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__DynTrajArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dynus_interfaces__msg__DynTrajArray__rosidl_typesupport_introspection_c__DynTrajArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
