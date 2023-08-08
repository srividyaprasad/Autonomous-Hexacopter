// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/CameraTriggerSecondary.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/camera_trigger_secondary__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/camera_trigger_secondary__struct.hpp"

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
  const px4_msgs::msg::CameraTriggerSecondary & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: timestamp_utc
  cdr << ros_message.timestamp_utc;
  // Member: seq
  cdr << ros_message.seq;
  // Member: feedback
  cdr << (ros_message.feedback ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::CameraTriggerSecondary & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: timestamp_utc
  cdr >> ros_message.timestamp_utc;

  // Member: seq
  cdr >> ros_message.seq;

  // Member: feedback
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.feedback = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::CameraTriggerSecondary & ros_message,
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
  // Member: timestamp_utc
  {
    size_t item_size = sizeof(ros_message.timestamp_utc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: seq
  {
    size_t item_size = sizeof(ros_message.seq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: feedback
  {
    size_t item_size = sizeof(ros_message.feedback);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_CameraTriggerSecondary(
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

  // Member: timestamp_utc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: seq
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: feedback
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _CameraTriggerSecondary__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::CameraTriggerSecondary *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CameraTriggerSecondary__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::CameraTriggerSecondary *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CameraTriggerSecondary__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::CameraTriggerSecondary *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CameraTriggerSecondary__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CameraTriggerSecondary(full_bounded, 0);
}

static message_type_support_callbacks_t _CameraTriggerSecondary__callbacks = {
  "px4_msgs::msg",
  "CameraTriggerSecondary",
  _CameraTriggerSecondary__cdr_serialize,
  _CameraTriggerSecondary__cdr_deserialize,
  _CameraTriggerSecondary__get_serialized_size,
  _CameraTriggerSecondary__max_serialized_size
};

static rosidl_message_type_support_t _CameraTriggerSecondary__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CameraTriggerSecondary__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::CameraTriggerSecondary>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_CameraTriggerSecondary__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, CameraTriggerSecondary)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_CameraTriggerSecondary__handle;
}

#ifdef __cplusplus
}
#endif
