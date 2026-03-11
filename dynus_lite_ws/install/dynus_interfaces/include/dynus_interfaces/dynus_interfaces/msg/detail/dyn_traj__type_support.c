// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dynus_interfaces:msg/DynTraj.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dynus_interfaces/msg/detail/dyn_traj__rosidl_typesupport_introspection_c.h"
#include "dynus_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dynus_interfaces/msg/detail/dyn_traj__functions.h"
#include "dynus_interfaces/msg/detail/dyn_traj__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `bbox`
// Member `ekf_cov_p`
// Member `ekf_cov_q`
// Member `ekf_cov_r`
// Member `poly_cov`
// Member `poly_coeffs_x`
// Member `poly_coeffs_y`
// Member `poly_coeffs_z`
// Member `goal`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `pwp`
#include "dynus_interfaces/msg/pwp_traj.h"
// Member `pwp`
#include "dynus_interfaces/msg/detail/pwp_traj__rosidl_typesupport_introspection_c.h"
// Member `quintic_pwp`
#include "dynus_interfaces/msg/quintic_pwp_traj.h"
// Member `quintic_pwp`
#include "dynus_interfaces/msg/detail/quintic_pwp_traj__rosidl_typesupport_introspection_c.h"
// Member `function`
// Member `velocity`
// Member `mode`
#include "rosidl_runtime_c/string_functions.h"
// Member `pos`
#include "geometry_msgs/msg/vector3.h"
// Member `pos`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__DynTraj_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dynus_interfaces__msg__DynTraj__init(message_memory);
}

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__DynTraj_fini_function(void * message_memory)
{
  dynus_interfaces__msg__DynTraj__fini(message_memory);
}

size_t dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__size_function__DynTraj__bbox(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__bbox(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__bbox(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__fetch_function__DynTraj__bbox(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__bbox(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__assign_function__DynTraj__bbox(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__bbox(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__resize_function__DynTraj__bbox(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__size_function__DynTraj__ekf_cov_p(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__ekf_cov_p(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__ekf_cov_p(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__fetch_function__DynTraj__ekf_cov_p(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__ekf_cov_p(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__assign_function__DynTraj__ekf_cov_p(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__ekf_cov_p(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__resize_function__DynTraj__ekf_cov_p(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__size_function__DynTraj__ekf_cov_q(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__ekf_cov_q(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__ekf_cov_q(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__fetch_function__DynTraj__ekf_cov_q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__ekf_cov_q(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__assign_function__DynTraj__ekf_cov_q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__ekf_cov_q(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__resize_function__DynTraj__ekf_cov_q(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__size_function__DynTraj__ekf_cov_r(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__ekf_cov_r(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__ekf_cov_r(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__fetch_function__DynTraj__ekf_cov_r(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__ekf_cov_r(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__assign_function__DynTraj__ekf_cov_r(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__ekf_cov_r(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__resize_function__DynTraj__ekf_cov_r(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__size_function__DynTraj__poly_cov(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__poly_cov(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__poly_cov(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__fetch_function__DynTraj__poly_cov(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__poly_cov(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__assign_function__DynTraj__poly_cov(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__poly_cov(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__resize_function__DynTraj__poly_cov(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__size_function__DynTraj__poly_coeffs_x(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__poly_coeffs_x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__poly_coeffs_x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__fetch_function__DynTraj__poly_coeffs_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__poly_coeffs_x(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__assign_function__DynTraj__poly_coeffs_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__poly_coeffs_x(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__resize_function__DynTraj__poly_coeffs_x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__size_function__DynTraj__poly_coeffs_y(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__poly_coeffs_y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__poly_coeffs_y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__fetch_function__DynTraj__poly_coeffs_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__poly_coeffs_y(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__assign_function__DynTraj__poly_coeffs_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__poly_coeffs_y(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__resize_function__DynTraj__poly_coeffs_y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__size_function__DynTraj__poly_coeffs_z(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__poly_coeffs_z(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__poly_coeffs_z(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__fetch_function__DynTraj__poly_coeffs_z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__poly_coeffs_z(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__assign_function__DynTraj__poly_coeffs_z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__poly_coeffs_z(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__resize_function__DynTraj__poly_coeffs_z(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__size_function__DynTraj__function(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__function(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__function(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__fetch_function__DynTraj__function(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__function(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__assign_function__DynTraj__function(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__function(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__resize_function__DynTraj__function(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__size_function__DynTraj__velocity(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__velocity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__velocity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__fetch_function__DynTraj__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__velocity(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__assign_function__DynTraj__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__velocity(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__resize_function__DynTraj__velocity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__size_function__DynTraj__goal(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__goal(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__goal(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__fetch_function__DynTraj__goal(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__goal(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__assign_function__DynTraj__goal(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__goal(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__resize_function__DynTraj__goal(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__DynTraj_message_member_array[20] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__DynTraj, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bbox",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__DynTraj, bbox),  // bytes offset in struct
    NULL,  // default value
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__size_function__DynTraj__bbox,  // size() function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__bbox,  // get_const(index) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__bbox,  // get(index) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__fetch_function__DynTraj__bbox,  // fetch(index, &value) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__assign_function__DynTraj__bbox,  // assign(index, value) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__resize_function__DynTraj__bbox  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__DynTraj, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pwp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__DynTraj, pwp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quintic_pwp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__DynTraj, quintic_pwp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ekf_cov_p",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__DynTraj, ekf_cov_p),  // bytes offset in struct
    NULL,  // default value
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__size_function__DynTraj__ekf_cov_p,  // size() function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__ekf_cov_p,  // get_const(index) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__ekf_cov_p,  // get(index) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__fetch_function__DynTraj__ekf_cov_p,  // fetch(index, &value) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__assign_function__DynTraj__ekf_cov_p,  // assign(index, value) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__resize_function__DynTraj__ekf_cov_p  // resize(index) function pointer
  },
  {
    "ekf_cov_q",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__DynTraj, ekf_cov_q),  // bytes offset in struct
    NULL,  // default value
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__size_function__DynTraj__ekf_cov_q,  // size() function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__ekf_cov_q,  // get_const(index) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__ekf_cov_q,  // get(index) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__fetch_function__DynTraj__ekf_cov_q,  // fetch(index, &value) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__assign_function__DynTraj__ekf_cov_q,  // assign(index, value) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__resize_function__DynTraj__ekf_cov_q  // resize(index) function pointer
  },
  {
    "ekf_cov_r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__DynTraj, ekf_cov_r),  // bytes offset in struct
    NULL,  // default value
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__size_function__DynTraj__ekf_cov_r,  // size() function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__ekf_cov_r,  // get_const(index) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__ekf_cov_r,  // get(index) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__fetch_function__DynTraj__ekf_cov_r,  // fetch(index, &value) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__assign_function__DynTraj__ekf_cov_r,  // assign(index, value) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__resize_function__DynTraj__ekf_cov_r  // resize(index) function pointer
  },
  {
    "poly_cov",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__DynTraj, poly_cov),  // bytes offset in struct
    NULL,  // default value
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__size_function__DynTraj__poly_cov,  // size() function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__poly_cov,  // get_const(index) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__poly_cov,  // get(index) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__fetch_function__DynTraj__poly_cov,  // fetch(index, &value) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__assign_function__DynTraj__poly_cov,  // assign(index, value) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__resize_function__DynTraj__poly_cov  // resize(index) function pointer
  },
  {
    "poly_coeffs_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__DynTraj, poly_coeffs_x),  // bytes offset in struct
    NULL,  // default value
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__size_function__DynTraj__poly_coeffs_x,  // size() function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__poly_coeffs_x,  // get_const(index) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__poly_coeffs_x,  // get(index) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__fetch_function__DynTraj__poly_coeffs_x,  // fetch(index, &value) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__assign_function__DynTraj__poly_coeffs_x,  // assign(index, value) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__resize_function__DynTraj__poly_coeffs_x  // resize(index) function pointer
  },
  {
    "poly_coeffs_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__DynTraj, poly_coeffs_y),  // bytes offset in struct
    NULL,  // default value
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__size_function__DynTraj__poly_coeffs_y,  // size() function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__poly_coeffs_y,  // get_const(index) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__poly_coeffs_y,  // get(index) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__fetch_function__DynTraj__poly_coeffs_y,  // fetch(index, &value) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__assign_function__DynTraj__poly_coeffs_y,  // assign(index, value) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__resize_function__DynTraj__poly_coeffs_y  // resize(index) function pointer
  },
  {
    "poly_coeffs_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__DynTraj, poly_coeffs_z),  // bytes offset in struct
    NULL,  // default value
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__size_function__DynTraj__poly_coeffs_z,  // size() function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__poly_coeffs_z,  // get_const(index) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__poly_coeffs_z,  // get(index) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__fetch_function__DynTraj__poly_coeffs_z,  // fetch(index, &value) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__assign_function__DynTraj__poly_coeffs_z,  // assign(index, value) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__resize_function__DynTraj__poly_coeffs_z  // resize(index) function pointer
  },
  {
    "poly_start_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__DynTraj, poly_start_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "poly_end_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__DynTraj, poly_end_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "function",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__DynTraj, function),  // bytes offset in struct
    NULL,  // default value
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__size_function__DynTraj__function,  // size() function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__function,  // get_const(index) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__function,  // get(index) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__fetch_function__DynTraj__function,  // fetch(index, &value) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__assign_function__DynTraj__function,  // assign(index, value) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__resize_function__DynTraj__function  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__DynTraj, velocity),  // bytes offset in struct
    NULL,  // default value
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__size_function__DynTraj__velocity,  // size() function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__velocity,  // get_const(index) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__velocity,  // get(index) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__fetch_function__DynTraj__velocity,  // fetch(index, &value) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__assign_function__DynTraj__velocity,  // assign(index, value) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__resize_function__DynTraj__velocity  // resize(index) function pointer
  },
  {
    "pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__DynTraj, pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_agent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__DynTraj, is_agent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__DynTraj, goal),  // bytes offset in struct
    NULL,  // default value
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__size_function__DynTraj__goal,  // size() function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_const_function__DynTraj__goal,  // get_const(index) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__get_function__DynTraj__goal,  // get(index) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__fetch_function__DynTraj__goal,  // fetch(index, &value) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__assign_function__DynTraj__goal,  // assign(index, value) function pointer
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__resize_function__DynTraj__goal  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynus_interfaces__msg__DynTraj, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__DynTraj_message_members = {
  "dynus_interfaces__msg",  // message namespace
  "DynTraj",  // message name
  20,  // number of fields
  sizeof(dynus_interfaces__msg__DynTraj),
  dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__DynTraj_message_member_array,  // message members
  dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__DynTraj_init_function,  // function to initialize message memory (memory has to be allocated)
  dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__DynTraj_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__DynTraj_message_type_support_handle = {
  0,
  &dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__DynTraj_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dynus_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynus_interfaces, msg, DynTraj)() {
  dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__DynTraj_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__DynTraj_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynus_interfaces, msg, PWPTraj)();
  dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__DynTraj_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynus_interfaces, msg, QuinticPWPTraj)();
  dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__DynTraj_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__DynTraj_message_type_support_handle.typesupport_identifier) {
    dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__DynTraj_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dynus_interfaces__msg__DynTraj__rosidl_typesupport_introspection_c__DynTraj_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
