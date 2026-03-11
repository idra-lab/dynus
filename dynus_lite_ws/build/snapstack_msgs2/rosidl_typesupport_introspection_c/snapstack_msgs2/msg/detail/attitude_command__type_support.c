// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from snapstack_msgs2:msg/AttitudeCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "snapstack_msgs2/msg/detail/attitude_command__rosidl_typesupport_introspection_c.h"
#include "snapstack_msgs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "snapstack_msgs2/msg/detail/attitude_command__functions.h"
#include "snapstack_msgs2/msg/detail/attitude_command__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `q`
#include "geometry_msgs/msg/quaternion.h"
// Member `q`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
// Member `w`
// Member `f_w`
#include "geometry_msgs/msg/vector3.h"
// Member `w`
// Member `f_w`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void snapstack_msgs2__msg__AttitudeCommand__rosidl_typesupport_introspection_c__AttitudeCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  snapstack_msgs2__msg__AttitudeCommand__init(message_memory);
}

void snapstack_msgs2__msg__AttitudeCommand__rosidl_typesupport_introspection_c__AttitudeCommand_fini_function(void * message_memory)
{
  snapstack_msgs2__msg__AttitudeCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember snapstack_msgs2__msg__AttitudeCommand__rosidl_typesupport_introspection_c__AttitudeCommand_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snapstack_msgs2__msg__AttitudeCommand, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "q",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snapstack_msgs2__msg__AttitudeCommand, q),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "w",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snapstack_msgs2__msg__AttitudeCommand, w),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "f_w",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snapstack_msgs2__msg__AttitudeCommand, f_w),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "power",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snapstack_msgs2__msg__AttitudeCommand, power),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers snapstack_msgs2__msg__AttitudeCommand__rosidl_typesupport_introspection_c__AttitudeCommand_message_members = {
  "snapstack_msgs2__msg",  // message namespace
  "AttitudeCommand",  // message name
  5,  // number of fields
  sizeof(snapstack_msgs2__msg__AttitudeCommand),
  snapstack_msgs2__msg__AttitudeCommand__rosidl_typesupport_introspection_c__AttitudeCommand_message_member_array,  // message members
  snapstack_msgs2__msg__AttitudeCommand__rosidl_typesupport_introspection_c__AttitudeCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  snapstack_msgs2__msg__AttitudeCommand__rosidl_typesupport_introspection_c__AttitudeCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t snapstack_msgs2__msg__AttitudeCommand__rosidl_typesupport_introspection_c__AttitudeCommand_message_type_support_handle = {
  0,
  &snapstack_msgs2__msg__AttitudeCommand__rosidl_typesupport_introspection_c__AttitudeCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_snapstack_msgs2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snapstack_msgs2, msg, AttitudeCommand)() {
  snapstack_msgs2__msg__AttitudeCommand__rosidl_typesupport_introspection_c__AttitudeCommand_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  snapstack_msgs2__msg__AttitudeCommand__rosidl_typesupport_introspection_c__AttitudeCommand_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  snapstack_msgs2__msg__AttitudeCommand__rosidl_typesupport_introspection_c__AttitudeCommand_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  snapstack_msgs2__msg__AttitudeCommand__rosidl_typesupport_introspection_c__AttitudeCommand_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!snapstack_msgs2__msg__AttitudeCommand__rosidl_typesupport_introspection_c__AttitudeCommand_message_type_support_handle.typesupport_identifier) {
    snapstack_msgs2__msg__AttitudeCommand__rosidl_typesupport_introspection_c__AttitudeCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &snapstack_msgs2__msg__AttitudeCommand__rosidl_typesupport_introspection_c__AttitudeCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
