// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dynus_interfaces:msg/QuinticPWPTraj.idl
// generated code does not contain a copyright notice
#include "dynus_interfaces/msg/detail/quintic_pwp_traj__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dynus_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dynus_interfaces/msg/detail/quintic_pwp_traj__struct.h"
#include "dynus_interfaces/msg/detail/quintic_pwp_traj__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "dynus_interfaces/msg/detail/quintic_coeff_poly3__functions.h"  // coeff_x, coeff_y, coeff_z
#include "rosidl_runtime_c/primitives_sequence.h"  // times
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // times

// forward declare type support functions
size_t get_serialized_size_dynus_interfaces__msg__QuinticCoeffPoly3(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dynus_interfaces__msg__QuinticCoeffPoly3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynus_interfaces, msg, QuinticCoeffPoly3)();


using _QuinticPWPTraj__ros_msg_type = dynus_interfaces__msg__QuinticPWPTraj;

static bool _QuinticPWPTraj__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _QuinticPWPTraj__ros_msg_type * ros_message = static_cast<const _QuinticPWPTraj__ros_msg_type *>(untyped_ros_message);
  // Field name: times
  {
    size_t size = ros_message->times.size;
    auto array_ptr = ros_message->times.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: coeff_x
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dynus_interfaces, msg, QuinticCoeffPoly3
      )()->data);
    size_t size = ros_message->coeff_x.size;
    auto array_ptr = ros_message->coeff_x.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: coeff_y
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dynus_interfaces, msg, QuinticCoeffPoly3
      )()->data);
    size_t size = ros_message->coeff_y.size;
    auto array_ptr = ros_message->coeff_y.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: coeff_z
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dynus_interfaces, msg, QuinticCoeffPoly3
      )()->data);
    size_t size = ros_message->coeff_z.size;
    auto array_ptr = ros_message->coeff_z.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _QuinticPWPTraj__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _QuinticPWPTraj__ros_msg_type * ros_message = static_cast<_QuinticPWPTraj__ros_msg_type *>(untyped_ros_message);
  // Field name: times
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->times.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->times);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->times, size)) {
      fprintf(stderr, "failed to create array for field 'times'");
      return false;
    }
    auto array_ptr = ros_message->times.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: coeff_x
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dynus_interfaces, msg, QuinticCoeffPoly3
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->coeff_x.data) {
      dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__fini(&ros_message->coeff_x);
    }
    if (!dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__init(&ros_message->coeff_x, size)) {
      fprintf(stderr, "failed to create array for field 'coeff_x'");
      return false;
    }
    auto array_ptr = ros_message->coeff_x.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: coeff_y
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dynus_interfaces, msg, QuinticCoeffPoly3
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->coeff_y.data) {
      dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__fini(&ros_message->coeff_y);
    }
    if (!dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__init(&ros_message->coeff_y, size)) {
      fprintf(stderr, "failed to create array for field 'coeff_y'");
      return false;
    }
    auto array_ptr = ros_message->coeff_y.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: coeff_z
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dynus_interfaces, msg, QuinticCoeffPoly3
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->coeff_z.data) {
      dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__fini(&ros_message->coeff_z);
    }
    if (!dynus_interfaces__msg__QuinticCoeffPoly3__Sequence__init(&ros_message->coeff_z, size)) {
      fprintf(stderr, "failed to create array for field 'coeff_z'");
      return false;
    }
    auto array_ptr = ros_message->coeff_z.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynus_interfaces
size_t get_serialized_size_dynus_interfaces__msg__QuinticPWPTraj(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _QuinticPWPTraj__ros_msg_type * ros_message = static_cast<const _QuinticPWPTraj__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name times
  {
    size_t array_size = ros_message->times.size;
    auto array_ptr = ros_message->times.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name coeff_x
  {
    size_t array_size = ros_message->coeff_x.size;
    auto array_ptr = ros_message->coeff_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_dynus_interfaces__msg__QuinticCoeffPoly3(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name coeff_y
  {
    size_t array_size = ros_message->coeff_y.size;
    auto array_ptr = ros_message->coeff_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_dynus_interfaces__msg__QuinticCoeffPoly3(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name coeff_z
  {
    size_t array_size = ros_message->coeff_z.size;
    auto array_ptr = ros_message->coeff_z.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_dynus_interfaces__msg__QuinticCoeffPoly3(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _QuinticPWPTraj__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dynus_interfaces__msg__QuinticPWPTraj(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynus_interfaces
size_t max_serialized_size_dynus_interfaces__msg__QuinticPWPTraj(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: times
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: coeff_x
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dynus_interfaces__msg__QuinticCoeffPoly3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: coeff_y
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dynus_interfaces__msg__QuinticCoeffPoly3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: coeff_z
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dynus_interfaces__msg__QuinticCoeffPoly3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dynus_interfaces__msg__QuinticPWPTraj;
    is_plain =
      (
      offsetof(DataType, coeff_z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _QuinticPWPTraj__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dynus_interfaces__msg__QuinticPWPTraj(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_QuinticPWPTraj = {
  "dynus_interfaces::msg",
  "QuinticPWPTraj",
  _QuinticPWPTraj__cdr_serialize,
  _QuinticPWPTraj__cdr_deserialize,
  _QuinticPWPTraj__get_serialized_size,
  _QuinticPWPTraj__max_serialized_size
};

static rosidl_message_type_support_t _QuinticPWPTraj__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_QuinticPWPTraj,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynus_interfaces, msg, QuinticPWPTraj)() {
  return &_QuinticPWPTraj__type_support;
}

#if defined(__cplusplus)
}
#endif
