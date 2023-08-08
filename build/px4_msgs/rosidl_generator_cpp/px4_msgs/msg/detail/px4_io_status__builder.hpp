// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/Px4IoStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PX4_IO_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__PX4_IO_STATUS__BUILDER_HPP_

#include "px4_msgs/msg/detail/px4_io_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_Px4IoStatus_raw_inputs
{
public:
  explicit Init_Px4IoStatus_raw_inputs(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::Px4IoStatus raw_inputs(::px4_msgs::msg::Px4IoStatus::_raw_inputs_type arg)
  {
    msg_.raw_inputs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_servos
{
public:
  explicit Init_Px4IoStatus_servos(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_raw_inputs servos(::px4_msgs::msg::Px4IoStatus::_servos_type arg)
  {
    msg_.servos = std::move(arg);
    return Init_Px4IoStatus_raw_inputs(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_actuators
{
public:
  explicit Init_Px4IoStatus_actuators(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_servos actuators(::px4_msgs::msg::Px4IoStatus::_actuators_type arg)
  {
    msg_.actuators = std::move(arg);
    return Init_Px4IoStatus_servos(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_arming_override_immediate
{
public:
  explicit Init_Px4IoStatus_arming_override_immediate(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_actuators arming_override_immediate(::px4_msgs::msg::Px4IoStatus::_arming_override_immediate_type arg)
  {
    msg_.arming_override_immediate = std::move(arg);
    return Init_Px4IoStatus_actuators(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_arming_termination_failsafe
{
public:
  explicit Init_Px4IoStatus_arming_termination_failsafe(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_arming_override_immediate arming_termination_failsafe(::px4_msgs::msg::Px4IoStatus::_arming_termination_failsafe_type arg)
  {
    msg_.arming_termination_failsafe = std::move(arg);
    return Init_Px4IoStatus_arming_override_immediate(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_arming_force_failsafe
{
public:
  explicit Init_Px4IoStatus_arming_force_failsafe(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_arming_termination_failsafe arming_force_failsafe(::px4_msgs::msg::Px4IoStatus::_arming_force_failsafe_type arg)
  {
    msg_.arming_force_failsafe = std::move(arg);
    return Init_Px4IoStatus_arming_termination_failsafe(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_arming_lockdown
{
public:
  explicit Init_Px4IoStatus_arming_lockdown(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_arming_force_failsafe arming_lockdown(::px4_msgs::msg::Px4IoStatus::_arming_lockdown_type arg)
  {
    msg_.arming_lockdown = std::move(arg);
    return Init_Px4IoStatus_arming_force_failsafe(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_arming_rc_handling_disabled
{
public:
  explicit Init_Px4IoStatus_arming_rc_handling_disabled(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_arming_lockdown arming_rc_handling_disabled(::px4_msgs::msg::Px4IoStatus::_arming_rc_handling_disabled_type arg)
  {
    msg_.arming_rc_handling_disabled = std::move(arg);
    return Init_Px4IoStatus_arming_lockdown(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_arming_always_pwm_enable
{
public:
  explicit Init_Px4IoStatus_arming_always_pwm_enable(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_arming_rc_handling_disabled arming_always_pwm_enable(::px4_msgs::msg::Px4IoStatus::_arming_always_pwm_enable_type arg)
  {
    msg_.arming_always_pwm_enable = std::move(arg);
    return Init_Px4IoStatus_arming_rc_handling_disabled(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_arming_inair_restart_ok
{
public:
  explicit Init_Px4IoStatus_arming_inair_restart_ok(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_arming_always_pwm_enable arming_inair_restart_ok(::px4_msgs::msg::Px4IoStatus::_arming_inair_restart_ok_type arg)
  {
    msg_.arming_inair_restart_ok = std::move(arg);
    return Init_Px4IoStatus_arming_always_pwm_enable(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_arming_failsafe_custom
{
public:
  explicit Init_Px4IoStatus_arming_failsafe_custom(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_arming_inair_restart_ok arming_failsafe_custom(::px4_msgs::msg::Px4IoStatus::_arming_failsafe_custom_type arg)
  {
    msg_.arming_failsafe_custom = std::move(arg);
    return Init_Px4IoStatus_arming_inair_restart_ok(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_arming_manual_override_ok
{
public:
  explicit Init_Px4IoStatus_arming_manual_override_ok(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_arming_failsafe_custom arming_manual_override_ok(::px4_msgs::msg::Px4IoStatus::_arming_manual_override_ok_type arg)
  {
    msg_.arming_manual_override_ok = std::move(arg);
    return Init_Px4IoStatus_arming_failsafe_custom(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_arming_fmu_prearmed
{
public:
  explicit Init_Px4IoStatus_arming_fmu_prearmed(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_arming_manual_override_ok arming_fmu_prearmed(::px4_msgs::msg::Px4IoStatus::_arming_fmu_prearmed_type arg)
  {
    msg_.arming_fmu_prearmed = std::move(arg);
    return Init_Px4IoStatus_arming_manual_override_ok(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_arming_fmu_armed
{
public:
  explicit Init_Px4IoStatus_arming_fmu_armed(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_arming_fmu_prearmed arming_fmu_armed(::px4_msgs::msg::Px4IoStatus::_arming_fmu_armed_type arg)
  {
    msg_.arming_fmu_armed = std::move(arg);
    return Init_Px4IoStatus_arming_fmu_prearmed(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_arming_io_arm_ok
{
public:
  explicit Init_Px4IoStatus_arming_io_arm_ok(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_arming_fmu_armed arming_io_arm_ok(::px4_msgs::msg::Px4IoStatus::_arming_io_arm_ok_type arg)
  {
    msg_.arming_io_arm_ok = std::move(arg);
    return Init_Px4IoStatus_arming_fmu_armed(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_alarm_vservo_fault
{
public:
  explicit Init_Px4IoStatus_alarm_vservo_fault(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_arming_io_arm_ok alarm_vservo_fault(::px4_msgs::msg::Px4IoStatus::_alarm_vservo_fault_type arg)
  {
    msg_.alarm_vservo_fault = std::move(arg);
    return Init_Px4IoStatus_arming_io_arm_ok(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_alarm_pwm_error
{
public:
  explicit Init_Px4IoStatus_alarm_pwm_error(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_alarm_vservo_fault alarm_pwm_error(::px4_msgs::msg::Px4IoStatus::_alarm_pwm_error_type arg)
  {
    msg_.alarm_pwm_error = std::move(arg);
    return Init_Px4IoStatus_alarm_vservo_fault(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_alarm_rc_lost
{
public:
  explicit Init_Px4IoStatus_alarm_rc_lost(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_alarm_pwm_error alarm_rc_lost(::px4_msgs::msg::Px4IoStatus::_alarm_rc_lost_type arg)
  {
    msg_.alarm_rc_lost = std::move(arg);
    return Init_Px4IoStatus_alarm_pwm_error(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_alarm_fmu_lost
{
public:
  explicit Init_Px4IoStatus_alarm_fmu_lost(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_alarm_rc_lost alarm_fmu_lost(::px4_msgs::msg::Px4IoStatus::_alarm_fmu_lost_type arg)
  {
    msg_.alarm_fmu_lost = std::move(arg);
    return Init_Px4IoStatus_alarm_rc_lost(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_alarm_acc_current
{
public:
  explicit Init_Px4IoStatus_alarm_acc_current(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_alarm_fmu_lost alarm_acc_current(::px4_msgs::msg::Px4IoStatus::_alarm_acc_current_type arg)
  {
    msg_.alarm_acc_current = std::move(arg);
    return Init_Px4IoStatus_alarm_fmu_lost(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_alarm_servo_current
{
public:
  explicit Init_Px4IoStatus_alarm_servo_current(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_alarm_acc_current alarm_servo_current(::px4_msgs::msg::Px4IoStatus::_alarm_servo_current_type arg)
  {
    msg_.alarm_servo_current = std::move(arg);
    return Init_Px4IoStatus_alarm_acc_current(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_alarm_temperature
{
public:
  explicit Init_Px4IoStatus_alarm_temperature(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_alarm_servo_current alarm_temperature(::px4_msgs::msg::Px4IoStatus::_alarm_temperature_type arg)
  {
    msg_.alarm_temperature = std::move(arg);
    return Init_Px4IoStatus_alarm_servo_current(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_alarm_vbatt_low
{
public:
  explicit Init_Px4IoStatus_alarm_vbatt_low(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_alarm_temperature alarm_vbatt_low(::px4_msgs::msg::Px4IoStatus::_alarm_vbatt_low_type arg)
  {
    msg_.alarm_vbatt_low = std::move(arg);
    return Init_Px4IoStatus_alarm_temperature(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_status_rc_sumd
{
public:
  explicit Init_Px4IoStatus_status_rc_sumd(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_alarm_vbatt_low status_rc_sumd(::px4_msgs::msg::Px4IoStatus::_status_rc_sumd_type arg)
  {
    msg_.status_rc_sumd = std::move(arg);
    return Init_Px4IoStatus_alarm_vbatt_low(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_status_rc_st24
{
public:
  explicit Init_Px4IoStatus_status_rc_st24(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_status_rc_sumd status_rc_st24(::px4_msgs::msg::Px4IoStatus::_status_rc_st24_type arg)
  {
    msg_.status_rc_st24 = std::move(arg);
    return Init_Px4IoStatus_status_rc_sumd(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_status_fmu_initialized
{
public:
  explicit Init_Px4IoStatus_status_fmu_initialized(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_status_rc_st24 status_fmu_initialized(::px4_msgs::msg::Px4IoStatus::_status_fmu_initialized_type arg)
  {
    msg_.status_fmu_initialized = std::move(arg);
    return Init_Px4IoStatus_status_rc_st24(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_status_safety_off
{
public:
  explicit Init_Px4IoStatus_status_safety_off(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_status_fmu_initialized status_safety_off(::px4_msgs::msg::Px4IoStatus::_status_safety_off_type arg)
  {
    msg_.status_safety_off = std::move(arg);
    return Init_Px4IoStatus_status_fmu_initialized(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_status_failsafe
{
public:
  explicit Init_Px4IoStatus_status_failsafe(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_status_safety_off status_failsafe(::px4_msgs::msg::Px4IoStatus::_status_failsafe_type arg)
  {
    msg_.status_failsafe = std::move(arg);
    return Init_Px4IoStatus_status_safety_off(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_status_init_ok
{
public:
  explicit Init_Px4IoStatus_status_init_ok(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_status_failsafe status_init_ok(::px4_msgs::msg::Px4IoStatus::_status_init_ok_type arg)
  {
    msg_.status_init_ok = std::move(arg);
    return Init_Px4IoStatus_status_failsafe(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_status_arm_sync
{
public:
  explicit Init_Px4IoStatus_status_arm_sync(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_status_init_ok status_arm_sync(::px4_msgs::msg::Px4IoStatus::_status_arm_sync_type arg)
  {
    msg_.status_arm_sync = std::move(arg);
    return Init_Px4IoStatus_status_init_ok(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_status_mixer_ok
{
public:
  explicit Init_Px4IoStatus_status_mixer_ok(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_status_arm_sync status_mixer_ok(::px4_msgs::msg::Px4IoStatus::_status_mixer_ok_type arg)
  {
    msg_.status_mixer_ok = std::move(arg);
    return Init_Px4IoStatus_status_arm_sync(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_status_raw_pwm
{
public:
  explicit Init_Px4IoStatus_status_raw_pwm(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_status_mixer_ok status_raw_pwm(::px4_msgs::msg::Px4IoStatus::_status_raw_pwm_type arg)
  {
    msg_.status_raw_pwm = std::move(arg);
    return Init_Px4IoStatus_status_mixer_ok(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_status_fmu_ok
{
public:
  explicit Init_Px4IoStatus_status_fmu_ok(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_status_raw_pwm status_fmu_ok(::px4_msgs::msg::Px4IoStatus::_status_fmu_ok_type arg)
  {
    msg_.status_fmu_ok = std::move(arg);
    return Init_Px4IoStatus_status_raw_pwm(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_status_rc_sbus
{
public:
  explicit Init_Px4IoStatus_status_rc_sbus(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_status_fmu_ok status_rc_sbus(::px4_msgs::msg::Px4IoStatus::_status_rc_sbus_type arg)
  {
    msg_.status_rc_sbus = std::move(arg);
    return Init_Px4IoStatus_status_fmu_ok(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_status_rc_dsm
{
public:
  explicit Init_Px4IoStatus_status_rc_dsm(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_status_rc_sbus status_rc_dsm(::px4_msgs::msg::Px4IoStatus::_status_rc_dsm_type arg)
  {
    msg_.status_rc_dsm = std::move(arg);
    return Init_Px4IoStatus_status_rc_sbus(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_status_rc_ppm
{
public:
  explicit Init_Px4IoStatus_status_rc_ppm(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_status_rc_dsm status_rc_ppm(::px4_msgs::msg::Px4IoStatus::_status_rc_ppm_type arg)
  {
    msg_.status_rc_ppm = std::move(arg);
    return Init_Px4IoStatus_status_rc_dsm(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_status_rc_ok
{
public:
  explicit Init_Px4IoStatus_status_rc_ok(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_status_rc_ppm status_rc_ok(::px4_msgs::msg::Px4IoStatus::_status_rc_ok_type arg)
  {
    msg_.status_rc_ok = std::move(arg);
    return Init_Px4IoStatus_status_rc_ppm(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_status_override
{
public:
  explicit Init_Px4IoStatus_status_override(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_status_rc_ok status_override(::px4_msgs::msg::Px4IoStatus::_status_override_type arg)
  {
    msg_.status_override = std::move(arg);
    return Init_Px4IoStatus_status_rc_ok(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_status_outputs_armed
{
public:
  explicit Init_Px4IoStatus_status_outputs_armed(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_status_override status_outputs_armed(::px4_msgs::msg::Px4IoStatus::_status_outputs_armed_type arg)
  {
    msg_.status_outputs_armed = std::move(arg);
    return Init_Px4IoStatus_status_override(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_rssi_v
{
public:
  explicit Init_Px4IoStatus_rssi_v(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_status_outputs_armed rssi_v(::px4_msgs::msg::Px4IoStatus::_rssi_v_type arg)
  {
    msg_.rssi_v = std::move(arg);
    return Init_Px4IoStatus_status_outputs_armed(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_voltage_v
{
public:
  explicit Init_Px4IoStatus_voltage_v(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_rssi_v voltage_v(::px4_msgs::msg::Px4IoStatus::_voltage_v_type arg)
  {
    msg_.voltage_v = std::move(arg);
    return Init_Px4IoStatus_rssi_v(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_free_memory_bytes
{
public:
  explicit Init_Px4IoStatus_free_memory_bytes(::px4_msgs::msg::Px4IoStatus & msg)
  : msg_(msg)
  {}
  Init_Px4IoStatus_voltage_v free_memory_bytes(::px4_msgs::msg::Px4IoStatus::_free_memory_bytes_type arg)
  {
    msg_.free_memory_bytes = std::move(arg);
    return Init_Px4IoStatus_voltage_v(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

class Init_Px4IoStatus_timestamp
{
public:
  Init_Px4IoStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Px4IoStatus_free_memory_bytes timestamp(::px4_msgs::msg::Px4IoStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Px4IoStatus_free_memory_bytes(msg_);
  }

private:
  ::px4_msgs::msg::Px4IoStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::Px4IoStatus>()
{
  return px4_msgs::msg::builder::Init_Px4IoStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__PX4_IO_STATUS__BUILDER_HPP_
