// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dynus_interfaces:msg/PNAdaptation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dynus_interfaces/msg/detail/pn_adaptation__rosidl_typesupport_introspection_c.h"
#include "dynus_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dynus_interfaces/msg/detail/pn_adaptation__functions.h"
#include "dynus_interfaces/msg/detail/pn_adaptation__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dynus_interfaces__msg__PNAdaptation__rosidl_typesupport_introspection_c__PNAdaptation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dynus_interfaces__msg__PNAdaptation__init(message_memory);
}

void dynus_interfaces__msg__PNAdaptation__rosidl_typesupport_introspection_c__PNAdaptation_fini_function(void * message_memory)
{
  dynus_interfaces__msg__PNAdaptation__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dynus_interfaces__msg__PNAdaptation__rosidl_typesupport_introspection_c__PNAdaptation_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__PNAdaptation, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "old_n",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__PNAdaptation, old_n),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "new_n",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__PNAdaptation, new_n),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "old_p",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__PNAdaptation, old_p),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "new_p",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__PNAdaptation, new_p),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dynus_interfaces__msg__PNAdaptation__rosidl_typesupport_introspection_c__PNAdaptation_message_members = {
  "dynus_interfaces__msg",  // message namespace
  "PNAdaptation",  // message name
  5,  // number of fields
  sizeof(dynus_interfaces__msg__PNAdaptation),
  dynus_interfaces__msg__PNAdaptation__rosidl_typesupport_introspection_c__PNAdaptation_message_member_array,  // message members
  dynus_interfaces__msg__PNAdaptation__rosidl_typesupport_introspection_c__PNAdaptation_init_function,  // function to initialize message memory (memory has to be allocated)
  dynus_interfaces__msg__PNAdaptation__rosidl_typesupport_introspection_c__PNAdaptation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dynus_interfaces__msg__PNAdaptation__rosidl_typesupport_introspection_c__PNAdaptation_message_type_support_handle = {
  0,
  &dynus_interfaces__msg__PNAdaptation__rosidl_typesupport_introspection_c__PNAdaptation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dynus_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynus_interfaces, msg, PNAdaptation)() {
  dynus_interfaces__msg__PNAdaptation__rosidl_typesupport_introspection_c__PNAdaptation_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!dynus_interfaces__msg__PNAdaptation__rosidl_typesupport_introspection_c__PNAdaptation_message_type_support_handle.typesupport_identifier) {
    dynus_interfaces__msg__PNAdaptation__rosidl_typesupport_introspection_c__PNAdaptation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dynus_interfaces__msg__PNAdaptation__rosidl_typesupport_introspection_c__PNAdaptation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
