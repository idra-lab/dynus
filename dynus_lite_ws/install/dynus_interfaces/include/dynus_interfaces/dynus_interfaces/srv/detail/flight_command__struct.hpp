// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynus_interfaces:srv/FlightCommand.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__SRV__DETAIL__FLIGHT_COMMAND__STRUCT_HPP_
#define DYNUS_INTERFACES__SRV__DETAIL__FLIGHT_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynus_interfaces__srv__FlightCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__dynus_interfaces__srv__FlightCommand_Request __declspec(deprecated)
#endif

namespace dynus_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FlightCommand_Request_
{
  using Type = FlightCommand_Request_<ContainerAllocator>;

  explicit FlightCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  explicit FlightCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynus_interfaces::srv::FlightCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynus_interfaces::srv::FlightCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynus_interfaces::srv::FlightCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynus_interfaces::srv::FlightCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynus_interfaces::srv::FlightCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynus_interfaces::srv::FlightCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynus_interfaces::srv::FlightCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynus_interfaces::srv::FlightCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynus_interfaces::srv::FlightCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynus_interfaces::srv::FlightCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynus_interfaces__srv__FlightCommand_Request
    std::shared_ptr<dynus_interfaces::srv::FlightCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynus_interfaces__srv__FlightCommand_Request
    std::shared_ptr<dynus_interfaces::srv::FlightCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FlightCommand_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const FlightCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FlightCommand_Request_

// alias to use template instance with default allocator
using FlightCommand_Request =
  dynus_interfaces::srv::FlightCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynus_interfaces


#ifndef _WIN32
# define DEPRECATED__dynus_interfaces__srv__FlightCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__dynus_interfaces__srv__FlightCommand_Response __declspec(deprecated)
#endif

namespace dynus_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FlightCommand_Response_
{
  using Type = FlightCommand_Response_<ContainerAllocator>;

  explicit FlightCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit FlightCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynus_interfaces::srv::FlightCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynus_interfaces::srv::FlightCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynus_interfaces::srv::FlightCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynus_interfaces::srv::FlightCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynus_interfaces::srv::FlightCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynus_interfaces::srv::FlightCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynus_interfaces::srv::FlightCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynus_interfaces::srv::FlightCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynus_interfaces::srv::FlightCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynus_interfaces::srv::FlightCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynus_interfaces__srv__FlightCommand_Response
    std::shared_ptr<dynus_interfaces::srv::FlightCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynus_interfaces__srv__FlightCommand_Response
    std::shared_ptr<dynus_interfaces::srv::FlightCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FlightCommand_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const FlightCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FlightCommand_Response_

// alias to use template instance with default allocator
using FlightCommand_Response =
  dynus_interfaces::srv::FlightCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynus_interfaces

namespace dynus_interfaces
{

namespace srv
{

struct FlightCommand
{
  using Request = dynus_interfaces::srv::FlightCommand_Request;
  using Response = dynus_interfaces::srv::FlightCommand_Response;
};

}  // namespace srv

}  // namespace dynus_interfaces

#endif  // DYNUS_INTERFACES__SRV__DETAIL__FLIGHT_COMMAND__STRUCT_HPP_
