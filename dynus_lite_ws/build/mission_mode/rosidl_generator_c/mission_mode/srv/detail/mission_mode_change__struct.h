// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_mode:srv/MissionModeChange.idl
// generated code does not contain a copyright notice

#ifndef MISSION_MODE__SRV__DETAIL__MISSION_MODE_CHANGE__STRUCT_H_
#define MISSION_MODE__SRV__DETAIL__MISSION_MODE_CHANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'START'.
enum
{
  mission_mode__srv__MissionModeChange_Request__START = 1
};

/// Constant 'END'.
enum
{
  mission_mode__srv__MissionModeChange_Request__END = 2
};

/// Constant 'KILL'.
enum
{
  mission_mode__srv__MissionModeChange_Request__KILL = 3
};

/// Struct defined in srv/MissionModeChange in the package mission_mode.
typedef struct mission_mode__srv__MissionModeChange_Request
{
  uint8_t mode;
} mission_mode__srv__MissionModeChange_Request;

// Struct for a sequence of mission_mode__srv__MissionModeChange_Request.
typedef struct mission_mode__srv__MissionModeChange_Request__Sequence
{
  mission_mode__srv__MissionModeChange_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_mode__srv__MissionModeChange_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/MissionModeChange in the package mission_mode.
typedef struct mission_mode__srv__MissionModeChange_Response
{
  bool received;
} mission_mode__srv__MissionModeChange_Response;

// Struct for a sequence of mission_mode__srv__MissionModeChange_Response.
typedef struct mission_mode__srv__MissionModeChange_Response__Sequence
{
  mission_mode__srv__MissionModeChange_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_mode__srv__MissionModeChange_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_MODE__SRV__DETAIL__MISSION_MODE_CHANGE__STRUCT_H_
