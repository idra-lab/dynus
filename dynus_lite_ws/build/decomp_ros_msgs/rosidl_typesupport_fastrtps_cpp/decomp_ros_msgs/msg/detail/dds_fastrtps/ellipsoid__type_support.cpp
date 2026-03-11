// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from decomp_ros_msgs:msg/Ellipsoid.idl
// generated code does not contain a copyright notice
#include "decomp_ros_msgs/msg/detail/ellipsoid__rosidl_typesupport_fastrtps_cpp.hpp"
#include "decomp_ros_msgs/msg/detail/ellipsoid__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace decomp_ros_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_decomp_ros_msgs
cdr_serialize(
  const decomp_ros_msgs::msg::Ellipsoid & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: d
  {
    cdr << ros_message.d;
  }
  // Member: e
  {
    cdr << ros_message.e;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_decomp_ros_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  decomp_ros_msgs::msg::Ellipsoid & ros_message)
{
  // Member: d
  {
    cdr >> ros_message.d;
  }

  // Member: e
  {
    cdr >> ros_message.e;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_decomp_ros_msgs
get_serialized_size(
  const decomp_ros_msgs::msg::Ellipsoid & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: d
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.d[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: e
  {
    size_t array_size = 9;
    size_t item_size = sizeof(ros_message.e[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_decomp_ros_msgs
max_serialized_size_Ellipsoid(
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


  // Member: d
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: e
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = decomp_ros_msgs::msg::Ellipsoid;
    is_plain =
      (
      offsetof(DataType, e) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Ellipsoid__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const decomp_ros_msgs::msg::Ellipsoid *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Ellipsoid__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<decomp_ros_msgs::msg::Ellipsoid *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Ellipsoid__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const decomp_ros_msgs::msg::Ellipsoid *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Ellipsoid__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Ellipsoid(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Ellipsoid__callbacks = {
  "decomp_ros_msgs::msg",
  "Ellipsoid",
  _Ellipsoid__cdr_serialize,
  _Ellipsoid__cdr_deserialize,
  _Ellipsoid__get_serialized_size,
  _Ellipsoid__max_serialized_size
};

static rosidl_message_type_support_t _Ellipsoid__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Ellipsoid__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace decomp_ros_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_decomp_ros_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<decomp_ros_msgs::msg::Ellipsoid>()
{
  return &decomp_ros_msgs::msg::typesupport_fastrtps_cpp::_Ellipsoid__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, decomp_ros_msgs, msg, Ellipsoid)() {
  return &decomp_ros_msgs::msg::typesupport_fastrtps_cpp::_Ellipsoid__handle;
}

#ifdef __cplusplus
}
#endif
