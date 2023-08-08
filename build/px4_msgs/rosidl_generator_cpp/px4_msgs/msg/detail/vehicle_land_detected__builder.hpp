// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleLandDetected.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_LAND_DETECTED__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_LAND_DETECTED__BUILDER_HPP_

#include "px4_msgs/msg/detail/vehicle_land_detected__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleLandDetected_in_ground_effect
{
public:
  explicit Init_VehicleLandDetected_in_ground_effect(::px4_msgs::msg::VehicleLandDetected & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleLandDetected in_ground_effect(::px4_msgs::msg::VehicleLandDetected::_in_ground_effect_type arg)
  {
    msg_.in_ground_effect = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLandDetected msg_;
};

class Init_VehicleLandDetected_landed
{
public:
  explicit Init_VehicleLandDetected_landed(::px4_msgs::msg::VehicleLandDetected & msg)
  : msg_(msg)
  {}
  Init_VehicleLandDetected_in_ground_effect landed(::px4_msgs::msg::VehicleLandDetected::_landed_type arg)
  {
    msg_.landed = std::move(arg);
    return Init_VehicleLandDetected_in_ground_effect(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLandDetected msg_;
};

class Init_VehicleLandDetected_maybe_landed
{
public:
  explicit Init_VehicleLandDetected_maybe_landed(::px4_msgs::msg::VehicleLandDetected & msg)
  : msg_(msg)
  {}
  Init_VehicleLandDetected_landed maybe_landed(::px4_msgs::msg::VehicleLandDetected::_maybe_landed_type arg)
  {
    msg_.maybe_landed = std::move(arg);
    return Init_VehicleLandDetected_landed(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLandDetected msg_;
};

class Init_VehicleLandDetected_ground_contact
{
public:
  explicit Init_VehicleLandDetected_ground_contact(::px4_msgs::msg::VehicleLandDetected & msg)
  : msg_(msg)
  {}
  Init_VehicleLandDetected_maybe_landed ground_contact(::px4_msgs::msg::VehicleLandDetected::_ground_contact_type arg)
  {
    msg_.ground_contact = std::move(arg);
    return Init_VehicleLandDetected_maybe_landed(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLandDetected msg_;
};

class Init_VehicleLandDetected_freefall
{
public:
  explicit Init_VehicleLandDetected_freefall(::px4_msgs::msg::VehicleLandDetected & msg)
  : msg_(msg)
  {}
  Init_VehicleLandDetected_ground_contact freefall(::px4_msgs::msg::VehicleLandDetected::_freefall_type arg)
  {
    msg_.freefall = std::move(arg);
    return Init_VehicleLandDetected_ground_contact(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLandDetected msg_;
};

class Init_VehicleLandDetected_alt_max
{
public:
  explicit Init_VehicleLandDetected_alt_max(::px4_msgs::msg::VehicleLandDetected & msg)
  : msg_(msg)
  {}
  Init_VehicleLandDetected_freefall alt_max(::px4_msgs::msg::VehicleLandDetected::_alt_max_type arg)
  {
    msg_.alt_max = std::move(arg);
    return Init_VehicleLandDetected_freefall(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLandDetected msg_;
};

class Init_VehicleLandDetected_timestamp
{
public:
  Init_VehicleLandDetected_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleLandDetected_alt_max timestamp(::px4_msgs::msg::VehicleLandDetected::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleLandDetected_alt_max(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLandDetected msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleLandDetected>()
{
  return px4_msgs::msg::builder::Init_VehicleLandDetected_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_LAND_DETECTED__BUILDER_HPP_
