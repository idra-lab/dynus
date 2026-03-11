// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dynus_interfaces:msg/PWPTraj.idl
// generated code does not contain a copyright notice
#include "dynus_interfaces/msg/detail/pwp_traj__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dynus_interfaces/msg/detail/pwp_traj__struct.hpp"

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
namespace dynus_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const dynus_interfaces::msg::CoeffPoly3 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  dynus_interfaces::msg::CoeffPoly3 &);
size_t get_serialized_size(
  const dynus_interfaces::msg::CoeffPoly3 &,
  size_t current_alignment);
size_t
max_serialized_size_CoeffPoly3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace dynus_interfaces

// functions for dynus_interfaces::msg::CoeffPoly3 already declared above

// functions for dynus_interfaces::msg::CoeffPoly3 already declared above


namespace dynus_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynus_interfaces
cdr_serialize(
  const dynus_interfaces::msg::PWPTraj & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: times
  {
    cdr << ros_message.times;
  }
  // Member: coeff_x
  {
    size_t size = ros_message.coeff_x.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      dynus_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.coeff_x[i],
        cdr);
    }
  }
  // Member: coeff_y
  {
    size_t size = ros_message.coeff_y.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      dynus_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.coeff_y[i],
        cdr);
    }
  }
  // Member: coeff_z
  {
    size_t size = ros_message.coeff_z.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      dynus_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.coeff_z[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynus_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dynus_interfaces::msg::PWPTraj & ros_message)
{
  // Member: times
  {
    cdr >> ros_message.times;
  }

  // Member: coeff_x
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

    ros_message.coeff_x.resize(size);
    for (size_t i = 0; i < size; i++) {
      dynus_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.coeff_x[i]);
    }
  }

  // Member: coeff_y
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

    ros_message.coeff_y.resize(size);
    for (size_t i = 0; i < size; i++) {
      dynus_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.coeff_y[i]);
    }
  }

  // Member: coeff_z
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

    ros_message.coeff_z.resize(size);
    for (size_t i = 0; i < size; i++) {
      dynus_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.coeff_z[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynus_interfaces
get_serialized_size(
  const dynus_interfaces::msg::PWPTraj & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: times
  {
    size_t array_size = ros_message.times.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.times[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: coeff_x
  {
    size_t array_size = ros_message.coeff_x.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        dynus_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.coeff_x[index], current_alignment);
    }
  }
  // Member: coeff_y
  {
    size_t array_size = ros_message.coeff_y.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        dynus_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.coeff_y[index], current_alignment);
    }
  }
  // Member: coeff_z
  {
    size_t array_size = ros_message.coeff_z.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        dynus_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.coeff_z[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynus_interfaces
max_serialized_size_PWPTraj(
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


  // Member: times
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

  // Member: coeff_x
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
      size_t inner_size =
        dynus_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_CoeffPoly3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: coeff_y
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
      size_t inner_size =
        dynus_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_CoeffPoly3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: coeff_z
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
      size_t inner_size =
        dynus_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_CoeffPoly3(
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
    using DataType = dynus_interfaces::msg::PWPTraj;
    is_plain =
      (
      offsetof(DataType, coeff_z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PWPTraj__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dynus_interfaces::msg::PWPTraj *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PWPTraj__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dynus_interfaces::msg::PWPTraj *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PWPTraj__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dynus_interfaces::msg::PWPTraj *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PWPTraj__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PWPTraj(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PWPTraj__callbacks = {
  "dynus_interfaces::msg",
  "PWPTraj",
  _PWPTraj__cdr_serialize,
  _PWPTraj__cdr_deserialize,
  _PWPTraj__get_serialized_size,
  _PWPTraj__max_serialized_size
};

static rosidl_message_type_support_t _PWPTraj__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PWPTraj__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace dynus_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dynus_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<dynus_interfaces::msg::PWPTraj>()
{
  return &dynus_interfaces::msg::typesupport_fastrtps_cpp::_PWPTraj__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynus_interfaces, msg, PWPTraj)() {
  return &dynus_interfaces::msg::typesupport_fastrtps_cpp::_PWPTraj__handle;
}

#ifdef __cplusplus
}
#endif
