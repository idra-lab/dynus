// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from snapstack_msgs2:msg/VioFilterState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "snapstack_msgs2/msg/detail/vio_filter_state__rosidl_typesupport_introspection_c.h"
#include "snapstack_msgs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "snapstack_msgs2/msg/detail/vio_filter_state__functions.h"
#include "snapstack_msgs2/msg/detail/vio_filter_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pose`
// Member `extrinsics`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
// Member `extrinsics`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `twist`
#include "geometry_msgs/msg/twist.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"
// Member `bw`
// Member `ba`
// Member `accel_meas`
#include "geometry_msgs/msg/vector3.h"
// Member `bw`
// Member `ba`
// Member `accel_meas`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `error_cov`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__VioFilterState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  snapstack_msgs2__msg__VioFilterState__init(message_memory);
}

void snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__VioFilterState_fini_function(void * message_memory)
{
  snapstack_msgs2__msg__VioFilterState__fini(message_memory);
}

size_t snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__size_function__VioFilterState__error_cov(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__get_const_function__VioFilterState__error_cov(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__get_function__VioFilterState__error_cov(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__fetch_function__VioFilterState__error_cov(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__get_const_function__VioFilterState__error_cov(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__assign_function__VioFilterState__error_cov(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__get_function__VioFilterState__error_cov(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__resize_function__VioFilterState__error_cov(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__VioFilterState_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snapstack_msgs2__msg__VioFilterState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snapstack_msgs2__msg__VioFilterState, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "twist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snapstack_msgs2__msg__VioFilterState, twist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snapstack_msgs2__msg__VioFilterState, bw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ba",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snapstack_msgs2__msg__VioFilterState, ba),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "extrinsics",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snapstack_msgs2__msg__VioFilterState, extrinsics),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_meas",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snapstack_msgs2__msg__VioFilterState, accel_meas),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "n",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snapstack_msgs2__msg__VioFilterState, n),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_cov",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snapstack_msgs2__msg__VioFilterState, error_cov),  // bytes offset in struct
    NULL,  // default value
    snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__size_function__VioFilterState__error_cov,  // size() function pointer
    snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__get_const_function__VioFilterState__error_cov,  // get_const(index) function pointer
    snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__get_function__VioFilterState__error_cov,  // get(index) function pointer
    snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__fetch_function__VioFilterState__error_cov,  // fetch(index, &value) function pointer
    snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__assign_function__VioFilterState__error_cov,  // assign(index, value) function pointer
    snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__resize_function__VioFilterState__error_cov  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__VioFilterState_message_members = {
  "snapstack_msgs2__msg",  // message namespace
  "VioFilterState",  // message name
  9,  // number of fields
  sizeof(snapstack_msgs2__msg__VioFilterState),
  snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__VioFilterState_message_member_array,  // message members
  snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__VioFilterState_init_function,  // function to initialize message memory (memory has to be allocated)
  snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__VioFilterState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__VioFilterState_message_type_support_handle = {
  0,
  &snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__VioFilterState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_snapstack_msgs2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snapstack_msgs2, msg, VioFilterState)() {
  snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__VioFilterState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__VioFilterState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__VioFilterState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__VioFilterState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__VioFilterState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__VioFilterState_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__VioFilterState_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__VioFilterState_message_type_support_handle.typesupport_identifier) {
    snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__VioFilterState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &snapstack_msgs2__msg__VioFilterState__rosidl_typesupport_introspection_c__VioFilterState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
