// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/Px4IoStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/px4_io_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/px4_io_status__struct.h"
#include "px4_msgs/msg/detail/px4_io_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Px4IoStatus__ros_msg_type = px4_msgs__msg__Px4IoStatus;

static bool _Px4IoStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Px4IoStatus__ros_msg_type * ros_message = static_cast<const _Px4IoStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: free_memory_bytes
  {
    cdr << ros_message->free_memory_bytes;
  }

  // Field name: voltage_v
  {
    cdr << ros_message->voltage_v;
  }

  // Field name: rssi_v
  {
    cdr << ros_message->rssi_v;
  }

  // Field name: status_outputs_armed
  {
    cdr << (ros_message->status_outputs_armed ? true : false);
  }

  // Field name: status_override
  {
    cdr << (ros_message->status_override ? true : false);
  }

  // Field name: status_rc_ok
  {
    cdr << (ros_message->status_rc_ok ? true : false);
  }

  // Field name: status_rc_ppm
  {
    cdr << (ros_message->status_rc_ppm ? true : false);
  }

  // Field name: status_rc_dsm
  {
    cdr << (ros_message->status_rc_dsm ? true : false);
  }

  // Field name: status_rc_sbus
  {
    cdr << (ros_message->status_rc_sbus ? true : false);
  }

  // Field name: status_fmu_ok
  {
    cdr << (ros_message->status_fmu_ok ? true : false);
  }

  // Field name: status_raw_pwm
  {
    cdr << (ros_message->status_raw_pwm ? true : false);
  }

  // Field name: status_mixer_ok
  {
    cdr << (ros_message->status_mixer_ok ? true : false);
  }

  // Field name: status_arm_sync
  {
    cdr << (ros_message->status_arm_sync ? true : false);
  }

  // Field name: status_init_ok
  {
    cdr << (ros_message->status_init_ok ? true : false);
  }

  // Field name: status_failsafe
  {
    cdr << (ros_message->status_failsafe ? true : false);
  }

  // Field name: status_safety_off
  {
    cdr << (ros_message->status_safety_off ? true : false);
  }

  // Field name: status_fmu_initialized
  {
    cdr << (ros_message->status_fmu_initialized ? true : false);
  }

  // Field name: status_rc_st24
  {
    cdr << (ros_message->status_rc_st24 ? true : false);
  }

  // Field name: status_rc_sumd
  {
    cdr << (ros_message->status_rc_sumd ? true : false);
  }

  // Field name: alarm_vbatt_low
  {
    cdr << (ros_message->alarm_vbatt_low ? true : false);
  }

  // Field name: alarm_temperature
  {
    cdr << (ros_message->alarm_temperature ? true : false);
  }

  // Field name: alarm_servo_current
  {
    cdr << (ros_message->alarm_servo_current ? true : false);
  }

  // Field name: alarm_acc_current
  {
    cdr << (ros_message->alarm_acc_current ? true : false);
  }

  // Field name: alarm_fmu_lost
  {
    cdr << (ros_message->alarm_fmu_lost ? true : false);
  }

  // Field name: alarm_rc_lost
  {
    cdr << (ros_message->alarm_rc_lost ? true : false);
  }

  // Field name: alarm_pwm_error
  {
    cdr << (ros_message->alarm_pwm_error ? true : false);
  }

  // Field name: alarm_vservo_fault
  {
    cdr << (ros_message->alarm_vservo_fault ? true : false);
  }

  // Field name: arming_io_arm_ok
  {
    cdr << (ros_message->arming_io_arm_ok ? true : false);
  }

  // Field name: arming_fmu_armed
  {
    cdr << (ros_message->arming_fmu_armed ? true : false);
  }

  // Field name: arming_fmu_prearmed
  {
    cdr << (ros_message->arming_fmu_prearmed ? true : false);
  }

  // Field name: arming_manual_override_ok
  {
    cdr << (ros_message->arming_manual_override_ok ? true : false);
  }

  // Field name: arming_failsafe_custom
  {
    cdr << (ros_message->arming_failsafe_custom ? true : false);
  }

  // Field name: arming_inair_restart_ok
  {
    cdr << (ros_message->arming_inair_restart_ok ? true : false);
  }

  // Field name: arming_always_pwm_enable
  {
    cdr << (ros_message->arming_always_pwm_enable ? true : false);
  }

  // Field name: arming_rc_handling_disabled
  {
    cdr << (ros_message->arming_rc_handling_disabled ? true : false);
  }

  // Field name: arming_lockdown
  {
    cdr << (ros_message->arming_lockdown ? true : false);
  }

  // Field name: arming_force_failsafe
  {
    cdr << (ros_message->arming_force_failsafe ? true : false);
  }

  // Field name: arming_termination_failsafe
  {
    cdr << (ros_message->arming_termination_failsafe ? true : false);
  }

  // Field name: arming_override_immediate
  {
    cdr << (ros_message->arming_override_immediate ? true : false);
  }

  // Field name: actuators
  {
    size_t size = 8;
    auto array_ptr = ros_message->actuators;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: servos
  {
    size_t size = 8;
    auto array_ptr = ros_message->servos;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: raw_inputs
  {
    size_t size = 18;
    auto array_ptr = ros_message->raw_inputs;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Px4IoStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Px4IoStatus__ros_msg_type * ros_message = static_cast<_Px4IoStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: free_memory_bytes
  {
    cdr >> ros_message->free_memory_bytes;
  }

  // Field name: voltage_v
  {
    cdr >> ros_message->voltage_v;
  }

  // Field name: rssi_v
  {
    cdr >> ros_message->rssi_v;
  }

  // Field name: status_outputs_armed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_outputs_armed = tmp ? true : false;
  }

  // Field name: status_override
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_override = tmp ? true : false;
  }

  // Field name: status_rc_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_rc_ok = tmp ? true : false;
  }

  // Field name: status_rc_ppm
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_rc_ppm = tmp ? true : false;
  }

  // Field name: status_rc_dsm
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_rc_dsm = tmp ? true : false;
  }

  // Field name: status_rc_sbus
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_rc_sbus = tmp ? true : false;
  }

  // Field name: status_fmu_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_fmu_ok = tmp ? true : false;
  }

  // Field name: status_raw_pwm
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_raw_pwm = tmp ? true : false;
  }

  // Field name: status_mixer_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_mixer_ok = tmp ? true : false;
  }

  // Field name: status_arm_sync
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_arm_sync = tmp ? true : false;
  }

  // Field name: status_init_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_init_ok = tmp ? true : false;
  }

  // Field name: status_failsafe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_failsafe = tmp ? true : false;
  }

  // Field name: status_safety_off
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_safety_off = tmp ? true : false;
  }

  // Field name: status_fmu_initialized
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_fmu_initialized = tmp ? true : false;
  }

  // Field name: status_rc_st24
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_rc_st24 = tmp ? true : false;
  }

  // Field name: status_rc_sumd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_rc_sumd = tmp ? true : false;
  }

  // Field name: alarm_vbatt_low
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->alarm_vbatt_low = tmp ? true : false;
  }

  // Field name: alarm_temperature
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->alarm_temperature = tmp ? true : false;
  }

  // Field name: alarm_servo_current
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->alarm_servo_current = tmp ? true : false;
  }

  // Field name: alarm_acc_current
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->alarm_acc_current = tmp ? true : false;
  }

  // Field name: alarm_fmu_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->alarm_fmu_lost = tmp ? true : false;
  }

  // Field name: alarm_rc_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->alarm_rc_lost = tmp ? true : false;
  }

  // Field name: alarm_pwm_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->alarm_pwm_error = tmp ? true : false;
  }

  // Field name: alarm_vservo_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->alarm_vservo_fault = tmp ? true : false;
  }

  // Field name: arming_io_arm_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arming_io_arm_ok = tmp ? true : false;
  }

  // Field name: arming_fmu_armed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arming_fmu_armed = tmp ? true : false;
  }

  // Field name: arming_fmu_prearmed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arming_fmu_prearmed = tmp ? true : false;
  }

  // Field name: arming_manual_override_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arming_manual_override_ok = tmp ? true : false;
  }

  // Field name: arming_failsafe_custom
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arming_failsafe_custom = tmp ? true : false;
  }

  // Field name: arming_inair_restart_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arming_inair_restart_ok = tmp ? true : false;
  }

  // Field name: arming_always_pwm_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arming_always_pwm_enable = tmp ? true : false;
  }

  // Field name: arming_rc_handling_disabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arming_rc_handling_disabled = tmp ? true : false;
  }

  // Field name: arming_lockdown
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arming_lockdown = tmp ? true : false;
  }

  // Field name: arming_force_failsafe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arming_force_failsafe = tmp ? true : false;
  }

  // Field name: arming_termination_failsafe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arming_termination_failsafe = tmp ? true : false;
  }

  // Field name: arming_override_immediate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arming_override_immediate = tmp ? true : false;
  }

  // Field name: actuators
  {
    size_t size = 8;
    auto array_ptr = ros_message->actuators;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: servos
  {
    size_t size = 8;
    auto array_ptr = ros_message->servos;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: raw_inputs
  {
    size_t size = 18;
    auto array_ptr = ros_message->raw_inputs;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__Px4IoStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Px4IoStatus__ros_msg_type * ros_message = static_cast<const _Px4IoStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name free_memory_bytes
  {
    size_t item_size = sizeof(ros_message->free_memory_bytes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name voltage_v
  {
    size_t item_size = sizeof(ros_message->voltage_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rssi_v
  {
    size_t item_size = sizeof(ros_message->rssi_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_outputs_armed
  {
    size_t item_size = sizeof(ros_message->status_outputs_armed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_override
  {
    size_t item_size = sizeof(ros_message->status_override);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_rc_ok
  {
    size_t item_size = sizeof(ros_message->status_rc_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_rc_ppm
  {
    size_t item_size = sizeof(ros_message->status_rc_ppm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_rc_dsm
  {
    size_t item_size = sizeof(ros_message->status_rc_dsm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_rc_sbus
  {
    size_t item_size = sizeof(ros_message->status_rc_sbus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_fmu_ok
  {
    size_t item_size = sizeof(ros_message->status_fmu_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_raw_pwm
  {
    size_t item_size = sizeof(ros_message->status_raw_pwm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_mixer_ok
  {
    size_t item_size = sizeof(ros_message->status_mixer_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_arm_sync
  {
    size_t item_size = sizeof(ros_message->status_arm_sync);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_init_ok
  {
    size_t item_size = sizeof(ros_message->status_init_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_failsafe
  {
    size_t item_size = sizeof(ros_message->status_failsafe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_safety_off
  {
    size_t item_size = sizeof(ros_message->status_safety_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_fmu_initialized
  {
    size_t item_size = sizeof(ros_message->status_fmu_initialized);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_rc_st24
  {
    size_t item_size = sizeof(ros_message->status_rc_st24);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_rc_sumd
  {
    size_t item_size = sizeof(ros_message->status_rc_sumd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alarm_vbatt_low
  {
    size_t item_size = sizeof(ros_message->alarm_vbatt_low);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alarm_temperature
  {
    size_t item_size = sizeof(ros_message->alarm_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alarm_servo_current
  {
    size_t item_size = sizeof(ros_message->alarm_servo_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alarm_acc_current
  {
    size_t item_size = sizeof(ros_message->alarm_acc_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alarm_fmu_lost
  {
    size_t item_size = sizeof(ros_message->alarm_fmu_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alarm_rc_lost
  {
    size_t item_size = sizeof(ros_message->alarm_rc_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alarm_pwm_error
  {
    size_t item_size = sizeof(ros_message->alarm_pwm_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alarm_vservo_fault
  {
    size_t item_size = sizeof(ros_message->alarm_vservo_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arming_io_arm_ok
  {
    size_t item_size = sizeof(ros_message->arming_io_arm_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arming_fmu_armed
  {
    size_t item_size = sizeof(ros_message->arming_fmu_armed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arming_fmu_prearmed
  {
    size_t item_size = sizeof(ros_message->arming_fmu_prearmed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arming_manual_override_ok
  {
    size_t item_size = sizeof(ros_message->arming_manual_override_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arming_failsafe_custom
  {
    size_t item_size = sizeof(ros_message->arming_failsafe_custom);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arming_inair_restart_ok
  {
    size_t item_size = sizeof(ros_message->arming_inair_restart_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arming_always_pwm_enable
  {
    size_t item_size = sizeof(ros_message->arming_always_pwm_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arming_rc_handling_disabled
  {
    size_t item_size = sizeof(ros_message->arming_rc_handling_disabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arming_lockdown
  {
    size_t item_size = sizeof(ros_message->arming_lockdown);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arming_force_failsafe
  {
    size_t item_size = sizeof(ros_message->arming_force_failsafe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arming_termination_failsafe
  {
    size_t item_size = sizeof(ros_message->arming_termination_failsafe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arming_override_immediate
  {
    size_t item_size = sizeof(ros_message->arming_override_immediate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name actuators
  {
    size_t array_size = 8;
    auto array_ptr = ros_message->actuators;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name servos
  {
    size_t array_size = 8;
    auto array_ptr = ros_message->servos;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name raw_inputs
  {
    size_t array_size = 18;
    auto array_ptr = ros_message->raw_inputs;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Px4IoStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__Px4IoStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__Px4IoStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: free_memory_bytes
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: voltage_v
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rssi_v
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_outputs_armed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_override
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_rc_ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_rc_ppm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_rc_dsm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_rc_sbus
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_fmu_ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_raw_pwm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_mixer_ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_arm_sync
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_init_ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_failsafe
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_safety_off
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_fmu_initialized
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_rc_st24
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_rc_sumd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: alarm_vbatt_low
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: alarm_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: alarm_servo_current
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: alarm_acc_current
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: alarm_fmu_lost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: alarm_rc_lost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: alarm_pwm_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: alarm_vservo_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arming_io_arm_ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arming_fmu_armed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arming_fmu_prearmed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arming_manual_override_ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arming_failsafe_custom
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arming_inair_restart_ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arming_always_pwm_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arming_rc_handling_disabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arming_lockdown
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arming_force_failsafe
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arming_termination_failsafe
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arming_override_immediate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: actuators
  {
    size_t array_size = 8;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: servos
  {
    size_t array_size = 8;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: raw_inputs
  {
    size_t array_size = 18;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Px4IoStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__Px4IoStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Px4IoStatus = {
  "px4_msgs::msg",
  "Px4IoStatus",
  _Px4IoStatus__cdr_serialize,
  _Px4IoStatus__cdr_deserialize,
  _Px4IoStatus__get_serialized_size,
  _Px4IoStatus__max_serialized_size
};

static rosidl_message_type_support_t _Px4IoStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Px4IoStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, Px4IoStatus)() {
  return &_Px4IoStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
