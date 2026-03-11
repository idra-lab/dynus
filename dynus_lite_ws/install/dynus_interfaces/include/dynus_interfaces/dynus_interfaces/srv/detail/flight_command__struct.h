// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynus_interfaces:srv/FlightCommand.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__SRV__DETAIL__FLIGHT_COMMAND__STRUCT_H_
#define DYNUS_INTERFACES__SRV__DETAIL__FLIGHT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FlightCommand in the package dynus_interfaces.
typedef struct dynus_interfaces__srv__FlightCommand_Request
{
  rosidl_runtime_c__String command;
} dynus_interfaces__srv__FlightCommand_Request;

// Struct for a sequence of dynus_interfaces__srv__FlightCommand_Request.
typedef struct dynus_interfaces__srv__FlightCommand_Request__Sequence
{
  dynus_interfaces__srv__FlightCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynus_interfaces__srv__FlightCommand_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/FlightCommand in the package dynus_interfaces.
typedef struct dynus_interfaces__srv__FlightCommand_Response
{
  bool success;
} dynus_interfaces__srv__FlightCommand_Response;

// Struct for a sequence of dynus_interfaces__srv__FlightCommand_Response.
typedef struct dynus_interfaces__srv__FlightCommand_Response__Sequence
{
  dynus_interfaces__srv__FlightCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynus_interfaces__srv__FlightCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNUS_INTERFACES__SRV__DETAIL__FLIGHT_COMMAND__STRUCT_H_
