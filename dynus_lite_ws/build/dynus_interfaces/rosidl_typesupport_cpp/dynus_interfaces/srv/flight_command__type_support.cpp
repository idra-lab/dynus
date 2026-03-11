// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from dynus_interfaces:srv/FlightCommand.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "dynus_interfaces/srv/detail/flight_command__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace dynus_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _FlightCommand_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FlightCommand_Request_type_support_ids_t;

static const _FlightCommand_Request_type_support_ids_t _FlightCommand_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FlightCommand_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FlightCommand_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FlightCommand_Request_type_support_symbol_names_t _FlightCommand_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynus_interfaces, srv, FlightCommand_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynus_interfaces, srv, FlightCommand_Request)),
  }
};

typedef struct _FlightCommand_Request_type_support_data_t
{
  void * data[2];
} _FlightCommand_Request_type_support_data_t;

static _FlightCommand_Request_type_support_data_t _FlightCommand_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FlightCommand_Request_message_typesupport_map = {
  2,
  "dynus_interfaces",
  &_FlightCommand_Request_message_typesupport_ids.typesupport_identifier[0],
  &_FlightCommand_Request_message_typesupport_symbol_names.symbol_name[0],
  &_FlightCommand_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FlightCommand_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FlightCommand_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dynus_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynus_interfaces::srv::FlightCommand_Request>()
{
  return &::dynus_interfaces::srv::rosidl_typesupport_cpp::FlightCommand_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dynus_interfaces, srv, FlightCommand_Request)() {
  return get_message_type_support_handle<dynus_interfaces::srv::FlightCommand_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dynus_interfaces/srv/detail/flight_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dynus_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _FlightCommand_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FlightCommand_Response_type_support_ids_t;

static const _FlightCommand_Response_type_support_ids_t _FlightCommand_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FlightCommand_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FlightCommand_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FlightCommand_Response_type_support_symbol_names_t _FlightCommand_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynus_interfaces, srv, FlightCommand_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynus_interfaces, srv, FlightCommand_Response)),
  }
};

typedef struct _FlightCommand_Response_type_support_data_t
{
  void * data[2];
} _FlightCommand_Response_type_support_data_t;

static _FlightCommand_Response_type_support_data_t _FlightCommand_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FlightCommand_Response_message_typesupport_map = {
  2,
  "dynus_interfaces",
  &_FlightCommand_Response_message_typesupport_ids.typesupport_identifier[0],
  &_FlightCommand_Response_message_typesupport_symbol_names.symbol_name[0],
  &_FlightCommand_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FlightCommand_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FlightCommand_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dynus_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynus_interfaces::srv::FlightCommand_Response>()
{
  return &::dynus_interfaces::srv::rosidl_typesupport_cpp::FlightCommand_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dynus_interfaces, srv, FlightCommand_Response)() {
  return get_message_type_support_handle<dynus_interfaces::srv::FlightCommand_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dynus_interfaces/srv/detail/flight_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dynus_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _FlightCommand_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FlightCommand_type_support_ids_t;

static const _FlightCommand_type_support_ids_t _FlightCommand_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FlightCommand_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FlightCommand_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FlightCommand_type_support_symbol_names_t _FlightCommand_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynus_interfaces, srv, FlightCommand)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynus_interfaces, srv, FlightCommand)),
  }
};

typedef struct _FlightCommand_type_support_data_t
{
  void * data[2];
} _FlightCommand_type_support_data_t;

static _FlightCommand_type_support_data_t _FlightCommand_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FlightCommand_service_typesupport_map = {
  2,
  "dynus_interfaces",
  &_FlightCommand_service_typesupport_ids.typesupport_identifier[0],
  &_FlightCommand_service_typesupport_symbol_names.symbol_name[0],
  &_FlightCommand_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t FlightCommand_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FlightCommand_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dynus_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<dynus_interfaces::srv::FlightCommand>()
{
  return &::dynus_interfaces::srv::rosidl_typesupport_cpp::FlightCommand_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, dynus_interfaces, srv, FlightCommand)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<dynus_interfaces::srv::FlightCommand>();
}

#ifdef __cplusplus
}
#endif
