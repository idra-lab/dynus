// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from snapstack_msgs2:msg/QuadFlightMode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "snapstack_msgs2/msg/detail/quad_flight_mode__rosidl_typesupport_introspection_c.h"
#include "snapstack_msgs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "snapstack_msgs2/msg/detail/quad_flight_mode__functions.h"
#include "snapstack_msgs2/msg/detail/quad_flight_mode__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void snapstack_msgs2__msg__QuadFlightMode__rosidl_typesupport_introspection_c__QuadFlightMode_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  snapstack_msgs2__msg__QuadFlightMode__init(message_memory);
}

void snapstack_msgs2__msg__QuadFlightMode__rosidl_typesupport_introspection_c__QuadFlightMode_fini_function(void * message_memory)
{
  snapstack_msgs2__msg__QuadFlightMode__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember snapstack_msgs2__msg__QuadFlightMode__rosidl_typesupport_introspection_c__QuadFlightMode_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snapstack_msgs2__msg__QuadFlightMode, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snapstack_msgs2__msg__QuadFlightMode, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers snapstack_msgs2__msg__QuadFlightMode__rosidl_typesupport_introspection_c__QuadFlightMode_message_members = {
  "snapstack_msgs2__msg",  // message namespace
  "QuadFlightMode",  // message name
  2,  // number of fields
  sizeof(snapstack_msgs2__msg__QuadFlightMode),
  snapstack_msgs2__msg__QuadFlightMode__rosidl_typesupport_introspection_c__QuadFlightMode_message_member_array,  // message members
  snapstack_msgs2__msg__QuadFlightMode__rosidl_typesupport_introspection_c__QuadFlightMode_init_function,  // function to initialize message memory (memory has to be allocated)
  snapstack_msgs2__msg__QuadFlightMode__rosidl_typesupport_introspection_c__QuadFlightMode_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t snapstack_msgs2__msg__QuadFlightMode__rosidl_typesupport_introspection_c__QuadFlightMode_message_type_support_handle = {
  0,
  &snapstack_msgs2__msg__QuadFlightMode__rosidl_typesupport_introspection_c__QuadFlightMode_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_snapstack_msgs2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snapstack_msgs2, msg, QuadFlightMode)() {
  snapstack_msgs2__msg__QuadFlightMode__rosidl_typesupport_introspection_c__QuadFlightMode_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!snapstack_msgs2__msg__QuadFlightMode__rosidl_typesupport_introspection_c__QuadFlightMode_message_type_support_handle.typesupport_identifier) {
    snapstack_msgs2__msg__QuadFlightMode__rosidl_typesupport_introspection_c__QuadFlightMode_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &snapstack_msgs2__msg__QuadFlightMode__rosidl_typesupport_introspection_c__QuadFlightMode_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
