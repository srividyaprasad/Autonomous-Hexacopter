// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/BatteryStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/battery_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/battery_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace px4_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_serialize(
  const px4_msgs::msg::BatteryStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: voltage_v
  cdr << ros_message.voltage_v;
  // Member: voltage_filtered_v
  cdr << ros_message.voltage_filtered_v;
  // Member: current_a
  cdr << ros_message.current_a;
  // Member: current_filtered_a
  cdr << ros_message.current_filtered_a;
  // Member: average_current_a
  cdr << ros_message.average_current_a;
  // Member: discharged_mah
  cdr << ros_message.discharged_mah;
  // Member: remaining
  cdr << ros_message.remaining;
  // Member: scale
  cdr << ros_message.scale;
  // Member: temperature
  cdr << ros_message.temperature;
  // Member: cell_count
  cdr << ros_message.cell_count;
  // Member: connected
  cdr << (ros_message.connected ? true : false);
  // Member: source
  cdr << ros_message.source;
  // Member: priority
  cdr << ros_message.priority;
  // Member: capacity
  cdr << ros_message.capacity;
  // Member: cycle_count
  cdr << ros_message.cycle_count;
  // Member: run_time_to_empty
  cdr << ros_message.run_time_to_empty;
  // Member: average_time_to_empty
  cdr << ros_message.average_time_to_empty;
  // Member: serial_number
  cdr << ros_message.serial_number;
  // Member: manufacture_date
  cdr << ros_message.manufacture_date;
  // Member: state_of_health
  cdr << ros_message.state_of_health;
  // Member: max_error
  cdr << ros_message.max_error;
  // Member: id
  cdr << ros_message.id;
  // Member: interface_error
  cdr << ros_message.interface_error;
  // Member: voltage_cell_v
  {
    cdr << ros_message.voltage_cell_v;
  }
  // Member: max_cell_voltage_delta
  cdr << ros_message.max_cell_voltage_delta;
  // Member: is_powering_off
  cdr << (ros_message.is_powering_off ? true : false);
  // Member: warning
  cdr << ros_message.warning;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::BatteryStatus & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: voltage_v
  cdr >> ros_message.voltage_v;

  // Member: voltage_filtered_v
  cdr >> ros_message.voltage_filtered_v;

  // Member: current_a
  cdr >> ros_message.current_a;

  // Member: current_filtered_a
  cdr >> ros_message.current_filtered_a;

  // Member: average_current_a
  cdr >> ros_message.average_current_a;

  // Member: discharged_mah
  cdr >> ros_message.discharged_mah;

  // Member: remaining
  cdr >> ros_message.remaining;

  // Member: scale
  cdr >> ros_message.scale;

  // Member: temperature
  cdr >> ros_message.temperature;

  // Member: cell_count
  cdr >> ros_message.cell_count;

  // Member: connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.connected = tmp ? true : false;
  }

  // Member: source
  cdr >> ros_message.source;

  // Member: priority
  cdr >> ros_message.priority;

  // Member: capacity
  cdr >> ros_message.capacity;

  // Member: cycle_count
  cdr >> ros_message.cycle_count;

  // Member: run_time_to_empty
  cdr >> ros_message.run_time_to_empty;

  // Member: average_time_to_empty
  cdr >> ros_message.average_time_to_empty;

  // Member: serial_number
  cdr >> ros_message.serial_number;

  // Member: manufacture_date
  cdr >> ros_message.manufacture_date;

  // Member: state_of_health
  cdr >> ros_message.state_of_health;

  // Member: max_error
  cdr >> ros_message.max_error;

  // Member: id
  cdr >> ros_message.id;

  // Member: interface_error
  cdr >> ros_message.interface_error;

  // Member: voltage_cell_v
  {
    cdr >> ros_message.voltage_cell_v;
  }

  // Member: max_cell_voltage_delta
  cdr >> ros_message.max_cell_voltage_delta;

  // Member: is_powering_off
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_powering_off = tmp ? true : false;
  }

  // Member: warning
  cdr >> ros_message.warning;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::BatteryStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: voltage_v
  {
    size_t item_size = sizeof(ros_message.voltage_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: voltage_filtered_v
  {
    size_t item_size = sizeof(ros_message.voltage_filtered_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_a
  {
    size_t item_size = sizeof(ros_message.current_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_filtered_a
  {
    size_t item_size = sizeof(ros_message.current_filtered_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: average_current_a
  {
    size_t item_size = sizeof(ros_message.average_current_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: discharged_mah
  {
    size_t item_size = sizeof(ros_message.discharged_mah);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: remaining
  {
    size_t item_size = sizeof(ros_message.remaining);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scale
  {
    size_t item_size = sizeof(ros_message.scale);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature
  {
    size_t item_size = sizeof(ros_message.temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cell_count
  {
    size_t item_size = sizeof(ros_message.cell_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: connected
  {
    size_t item_size = sizeof(ros_message.connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: source
  {
    size_t item_size = sizeof(ros_message.source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: priority
  {
    size_t item_size = sizeof(ros_message.priority);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: capacity
  {
    size_t item_size = sizeof(ros_message.capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cycle_count
  {
    size_t item_size = sizeof(ros_message.cycle_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: run_time_to_empty
  {
    size_t item_size = sizeof(ros_message.run_time_to_empty);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: average_time_to_empty
  {
    size_t item_size = sizeof(ros_message.average_time_to_empty);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: serial_number
  {
    size_t item_size = sizeof(ros_message.serial_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: manufacture_date
  {
    size_t item_size = sizeof(ros_message.manufacture_date);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: state_of_health
  {
    size_t item_size = sizeof(ros_message.state_of_health);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_error
  {
    size_t item_size = sizeof(ros_message.max_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: id
  {
    size_t item_size = sizeof(ros_message.id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: interface_error
  {
    size_t item_size = sizeof(ros_message.interface_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: voltage_cell_v
  {
    size_t array_size = 10;
    size_t item_size = sizeof(ros_message.voltage_cell_v[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_cell_voltage_delta
  {
    size_t item_size = sizeof(ros_message.max_cell_voltage_delta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_powering_off
  {
    size_t item_size = sizeof(ros_message.is_powering_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: warning
  {
    size_t item_size = sizeof(ros_message.warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_BatteryStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: voltage_v
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: voltage_filtered_v
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: current_a
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: current_filtered_a
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: average_current_a
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: discharged_mah
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: remaining
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: scale
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cell_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: connected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: source
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: priority
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: capacity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: cycle_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: run_time_to_empty
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: average_time_to_empty
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: serial_number
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: manufacture_date
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: state_of_health
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: max_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: interface_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: voltage_cell_v
  {
    size_t array_size = 10;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_cell_voltage_delta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_powering_off
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: warning
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _BatteryStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::BatteryStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BatteryStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::BatteryStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BatteryStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::BatteryStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BatteryStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_BatteryStatus(full_bounded, 0);
}

static message_type_support_callbacks_t _BatteryStatus__callbacks = {
  "px4_msgs::msg",
  "BatteryStatus",
  _BatteryStatus__cdr_serialize,
  _BatteryStatus__cdr_deserialize,
  _BatteryStatus__get_serialized_size,
  _BatteryStatus__max_serialized_size
};

static rosidl_message_type_support_t _BatteryStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BatteryStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_px4_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::BatteryStatus>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_BatteryStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, BatteryStatus)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_BatteryStatus__handle;
}

#ifdef __cplusplus
}
#endif