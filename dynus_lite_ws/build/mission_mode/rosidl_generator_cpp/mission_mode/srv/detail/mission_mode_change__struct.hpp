// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mission_mode:srv/MissionModeChange.idl
// generated code does not contain a copyright notice

#ifndef MISSION_MODE__SRV__DETAIL__MISSION_MODE_CHANGE__STRUCT_HPP_
#define MISSION_MODE__SRV__DETAIL__MISSION_MODE_CHANGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mission_mode__srv__MissionModeChange_Request __attribute__((deprecated))
#else
# define DEPRECATED__mission_mode__srv__MissionModeChange_Request __declspec(deprecated)
#endif

namespace mission_mode
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MissionModeChange_Request_
{
  using Type = MissionModeChange_Request_<ContainerAllocator>;

  explicit MissionModeChange_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  explicit MissionModeChange_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  // field types and members
  using _mode_type =
    uint8_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t START =
    1u;
  static constexpr uint8_t END =
    2u;
  static constexpr uint8_t KILL =
    3u;

  // pointer types
  using RawPtr =
    mission_mode::srv::MissionModeChange_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_mode::srv::MissionModeChange_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_mode::srv::MissionModeChange_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_mode::srv::MissionModeChange_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_mode::srv::MissionModeChange_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_mode::srv::MissionModeChange_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_mode::srv::MissionModeChange_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_mode::srv::MissionModeChange_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_mode::srv::MissionModeChange_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_mode::srv::MissionModeChange_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_mode__srv__MissionModeChange_Request
    std::shared_ptr<mission_mode::srv::MissionModeChange_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_mode__srv__MissionModeChange_Request
    std::shared_ptr<mission_mode::srv::MissionModeChange_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionModeChange_Request_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionModeChange_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionModeChange_Request_

// alias to use template instance with default allocator
using MissionModeChange_Request =
  mission_mode::srv::MissionModeChange_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionModeChange_Request_<ContainerAllocator>::START;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionModeChange_Request_<ContainerAllocator>::END;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionModeChange_Request_<ContainerAllocator>::KILL;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace mission_mode


#ifndef _WIN32
# define DEPRECATED__mission_mode__srv__MissionModeChange_Response __attribute__((deprecated))
#else
# define DEPRECATED__mission_mode__srv__MissionModeChange_Response __declspec(deprecated)
#endif

namespace mission_mode
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MissionModeChange_Response_
{
  using Type = MissionModeChange_Response_<ContainerAllocator>;

  explicit MissionModeChange_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->received = false;
    }
  }

  explicit MissionModeChange_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->received = false;
    }
  }

  // field types and members
  using _received_type =
    bool;
  _received_type received;

  // setters for named parameter idiom
  Type & set__received(
    const bool & _arg)
  {
    this->received = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_mode::srv::MissionModeChange_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_mode::srv::MissionModeChange_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_mode::srv::MissionModeChange_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_mode::srv::MissionModeChange_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_mode::srv::MissionModeChange_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_mode::srv::MissionModeChange_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_mode::srv::MissionModeChange_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_mode::srv::MissionModeChange_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_mode::srv::MissionModeChange_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_mode::srv::MissionModeChange_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_mode__srv__MissionModeChange_Response
    std::shared_ptr<mission_mode::srv::MissionModeChange_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_mode__srv__MissionModeChange_Response
    std::shared_ptr<mission_mode::srv::MissionModeChange_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionModeChange_Response_ & other) const
  {
    if (this->received != other.received) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionModeChange_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionModeChange_Response_

// alias to use template instance with default allocator
using MissionModeChange_Response =
  mission_mode::srv::MissionModeChange_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mission_mode

namespace mission_mode
{

namespace srv
{

struct MissionModeChange
{
  using Request = mission_mode::srv::MissionModeChange_Request;
  using Response = mission_mode::srv::MissionModeChange_Response;
};

}  // namespace srv

}  // namespace mission_mode

#endif  // MISSION_MODE__SRV__DETAIL__MISSION_MODE_CHANGE__STRUCT_HPP_
