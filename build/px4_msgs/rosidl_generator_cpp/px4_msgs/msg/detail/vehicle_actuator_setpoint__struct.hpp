// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleActuatorSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_ACTUATOR_SETPOINT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_ACTUATOR_SETPOINT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VehicleActuatorSetpoint __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleActuatorSetpoint __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleActuatorSetpoint_
{
  using Type = VehicleActuatorSetpoint_<ContainerAllocator>;

  explicit VehicleActuatorSetpoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      std::fill<typename std::array<float, 16>::iterator, float>(this->actuator.begin(), this->actuator.end(), 0.0f);
    }
  }

  explicit VehicleActuatorSetpoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : actuator(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      std::fill<typename std::array<float, 16>::iterator, float>(this->actuator.begin(), this->actuator.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _actuator_type =
    std::array<float, 16>;
  _actuator_type actuator;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__timestamp_sample(
    const uint64_t & _arg)
  {
    this->timestamp_sample = _arg;
    return *this;
  }
  Type & set__actuator(
    const std::array<float, 16> & _arg)
  {
    this->actuator = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NUM_ACTUATOR_SETPOINT =
    16u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleActuatorSetpoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleActuatorSetpoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleActuatorSetpoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleActuatorSetpoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleActuatorSetpoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleActuatorSetpoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleActuatorSetpoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleActuatorSetpoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleActuatorSetpoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleActuatorSetpoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleActuatorSetpoint
    std::shared_ptr<px4_msgs::msg::VehicleActuatorSetpoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleActuatorSetpoint
    std::shared_ptr<px4_msgs::msg::VehicleActuatorSetpoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleActuatorSetpoint_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->actuator != other.actuator) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleActuatorSetpoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleActuatorSetpoint_

// alias to use template instance with default allocator
using VehicleActuatorSetpoint =
  px4_msgs::msg::VehicleActuatorSetpoint_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t VehicleActuatorSetpoint_<ContainerAllocator>::NUM_ACTUATOR_SETPOINT;

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_ACTUATOR_SETPOINT__STRUCT_HPP_
