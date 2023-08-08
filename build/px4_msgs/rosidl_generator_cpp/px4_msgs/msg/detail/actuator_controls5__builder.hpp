// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ActuatorControls5.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS5__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS5__BUILDER_HPP_

#include "px4_msgs/msg/detail/actuator_controls5__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ActuatorControls5_control
{
public:
  explicit Init_ActuatorControls5_control(::px4_msgs::msg::ActuatorControls5 & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ActuatorControls5 control(::px4_msgs::msg::ActuatorControls5::_control_type arg)
  {
    msg_.control = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorControls5 msg_;
};

class Init_ActuatorControls5_timestamp_sample
{
public:
  explicit Init_ActuatorControls5_timestamp_sample(::px4_msgs::msg::ActuatorControls5 & msg)
  : msg_(msg)
  {}
  Init_ActuatorControls5_control timestamp_sample(::px4_msgs::msg::ActuatorControls5::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_ActuatorControls5_control(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorControls5 msg_;
};

class Init_ActuatorControls5_timestamp
{
public:
  Init_ActuatorControls5_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorControls5_timestamp_sample timestamp(::px4_msgs::msg::ActuatorControls5::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ActuatorControls5_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorControls5 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ActuatorControls5>()
{
  return px4_msgs::msg::builder::Init_ActuatorControls5_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS5__BUILDER_HPP_
