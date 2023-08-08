// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_

#include "px4_msgs/msg/detail/battery_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_BatteryStatus_warning
{
public:
  explicit Init_BatteryStatus_warning(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::BatteryStatus warning(::px4_msgs::msg::BatteryStatus::_warning_type arg)
  {
    msg_.warning = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_is_powering_off
{
public:
  explicit Init_BatteryStatus_is_powering_off(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_warning is_powering_off(::px4_msgs::msg::BatteryStatus::_is_powering_off_type arg)
  {
    msg_.is_powering_off = std::move(arg);
    return Init_BatteryStatus_warning(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_max_cell_voltage_delta
{
public:
  explicit Init_BatteryStatus_max_cell_voltage_delta(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_is_powering_off max_cell_voltage_delta(::px4_msgs::msg::BatteryStatus::_max_cell_voltage_delta_type arg)
  {
    msg_.max_cell_voltage_delta = std::move(arg);
    return Init_BatteryStatus_is_powering_off(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_voltage_cell_v
{
public:
  explicit Init_BatteryStatus_voltage_cell_v(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_max_cell_voltage_delta voltage_cell_v(::px4_msgs::msg::BatteryStatus::_voltage_cell_v_type arg)
  {
    msg_.voltage_cell_v = std::move(arg);
    return Init_BatteryStatus_max_cell_voltage_delta(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_interface_error
{
public:
  explicit Init_BatteryStatus_interface_error(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_voltage_cell_v interface_error(::px4_msgs::msg::BatteryStatus::_interface_error_type arg)
  {
    msg_.interface_error = std::move(arg);
    return Init_BatteryStatus_voltage_cell_v(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_id
{
public:
  explicit Init_BatteryStatus_id(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_interface_error id(::px4_msgs::msg::BatteryStatus::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_BatteryStatus_interface_error(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_max_error
{
public:
  explicit Init_BatteryStatus_max_error(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_id max_error(::px4_msgs::msg::BatteryStatus::_max_error_type arg)
  {
    msg_.max_error = std::move(arg);
    return Init_BatteryStatus_id(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_state_of_health
{
public:
  explicit Init_BatteryStatus_state_of_health(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_max_error state_of_health(::px4_msgs::msg::BatteryStatus::_state_of_health_type arg)
  {
    msg_.state_of_health = std::move(arg);
    return Init_BatteryStatus_max_error(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_manufacture_date
{
public:
  explicit Init_BatteryStatus_manufacture_date(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_state_of_health manufacture_date(::px4_msgs::msg::BatteryStatus::_manufacture_date_type arg)
  {
    msg_.manufacture_date = std::move(arg);
    return Init_BatteryStatus_state_of_health(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_serial_number
{
public:
  explicit Init_BatteryStatus_serial_number(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_manufacture_date serial_number(::px4_msgs::msg::BatteryStatus::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return Init_BatteryStatus_manufacture_date(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_average_time_to_empty
{
public:
  explicit Init_BatteryStatus_average_time_to_empty(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_serial_number average_time_to_empty(::px4_msgs::msg::BatteryStatus::_average_time_to_empty_type arg)
  {
    msg_.average_time_to_empty = std::move(arg);
    return Init_BatteryStatus_serial_number(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_run_time_to_empty
{
public:
  explicit Init_BatteryStatus_run_time_to_empty(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_average_time_to_empty run_time_to_empty(::px4_msgs::msg::BatteryStatus::_run_time_to_empty_type arg)
  {
    msg_.run_time_to_empty = std::move(arg);
    return Init_BatteryStatus_average_time_to_empty(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_cycle_count
{
public:
  explicit Init_BatteryStatus_cycle_count(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_run_time_to_empty cycle_count(::px4_msgs::msg::BatteryStatus::_cycle_count_type arg)
  {
    msg_.cycle_count = std::move(arg);
    return Init_BatteryStatus_run_time_to_empty(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_capacity
{
public:
  explicit Init_BatteryStatus_capacity(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_cycle_count capacity(::px4_msgs::msg::BatteryStatus::_capacity_type arg)
  {
    msg_.capacity = std::move(arg);
    return Init_BatteryStatus_cycle_count(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_priority
{
public:
  explicit Init_BatteryStatus_priority(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_capacity priority(::px4_msgs::msg::BatteryStatus::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_BatteryStatus_capacity(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_source
{
public:
  explicit Init_BatteryStatus_source(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_priority source(::px4_msgs::msg::BatteryStatus::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_BatteryStatus_priority(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_connected
{
public:
  explicit Init_BatteryStatus_connected(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_source connected(::px4_msgs::msg::BatteryStatus::_connected_type arg)
  {
    msg_.connected = std::move(arg);
    return Init_BatteryStatus_source(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_cell_count
{
public:
  explicit Init_BatteryStatus_cell_count(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_connected cell_count(::px4_msgs::msg::BatteryStatus::_cell_count_type arg)
  {
    msg_.cell_count = std::move(arg);
    return Init_BatteryStatus_connected(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_temperature
{
public:
  explicit Init_BatteryStatus_temperature(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_cell_count temperature(::px4_msgs::msg::BatteryStatus::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_BatteryStatus_cell_count(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_scale
{
public:
  explicit Init_BatteryStatus_scale(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_temperature scale(::px4_msgs::msg::BatteryStatus::_scale_type arg)
  {
    msg_.scale = std::move(arg);
    return Init_BatteryStatus_temperature(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_remaining
{
public:
  explicit Init_BatteryStatus_remaining(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_scale remaining(::px4_msgs::msg::BatteryStatus::_remaining_type arg)
  {
    msg_.remaining = std::move(arg);
    return Init_BatteryStatus_scale(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_discharged_mah
{
public:
  explicit Init_BatteryStatus_discharged_mah(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_remaining discharged_mah(::px4_msgs::msg::BatteryStatus::_discharged_mah_type arg)
  {
    msg_.discharged_mah = std::move(arg);
    return Init_BatteryStatus_remaining(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_average_current_a
{
public:
  explicit Init_BatteryStatus_average_current_a(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_discharged_mah average_current_a(::px4_msgs::msg::BatteryStatus::_average_current_a_type arg)
  {
    msg_.average_current_a = std::move(arg);
    return Init_BatteryStatus_discharged_mah(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_current_filtered_a
{
public:
  explicit Init_BatteryStatus_current_filtered_a(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_average_current_a current_filtered_a(::px4_msgs::msg::BatteryStatus::_current_filtered_a_type arg)
  {
    msg_.current_filtered_a = std::move(arg);
    return Init_BatteryStatus_average_current_a(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_current_a
{
public:
  explicit Init_BatteryStatus_current_a(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_current_filtered_a current_a(::px4_msgs::msg::BatteryStatus::_current_a_type arg)
  {
    msg_.current_a = std::move(arg);
    return Init_BatteryStatus_current_filtered_a(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_voltage_filtered_v
{
public:
  explicit Init_BatteryStatus_voltage_filtered_v(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_current_a voltage_filtered_v(::px4_msgs::msg::BatteryStatus::_voltage_filtered_v_type arg)
  {
    msg_.voltage_filtered_v = std::move(arg);
    return Init_BatteryStatus_current_a(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_voltage_v
{
public:
  explicit Init_BatteryStatus_voltage_v(::px4_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_voltage_filtered_v voltage_v(::px4_msgs::msg::BatteryStatus::_voltage_v_type arg)
  {
    msg_.voltage_v = std::move(arg);
    return Init_BatteryStatus_voltage_filtered_v(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_timestamp
{
public:
  Init_BatteryStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryStatus_voltage_v timestamp(::px4_msgs::msg::BatteryStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_BatteryStatus_voltage_v(msg_);
  }

private:
  ::px4_msgs::msg::BatteryStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::BatteryStatus>()
{
  return px4_msgs::msg::builder::Init_BatteryStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_
