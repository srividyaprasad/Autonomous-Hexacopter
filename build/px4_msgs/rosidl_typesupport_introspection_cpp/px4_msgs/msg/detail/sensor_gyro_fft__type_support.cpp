// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/SensorGyroFft.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/sensor_gyro_fft__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace px4_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SensorGyroFft_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::SensorGyroFft(_init);
}

void SensorGyroFft_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::SensorGyroFft *>(message_memory);
  typed_message->~SensorGyroFft();
}

size_t size_function__SensorGyroFft__peak_frequencies_x(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__SensorGyroFft__peak_frequencies_x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorGyroFft__peak_frequencies_x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 6> *>(untyped_member);
  return &member[index];
}

size_t size_function__SensorGyroFft__peak_frequencies_y(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__SensorGyroFft__peak_frequencies_y(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorGyroFft__peak_frequencies_y(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 6> *>(untyped_member);
  return &member[index];
}

size_t size_function__SensorGyroFft__peak_frequencies_z(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__SensorGyroFft__peak_frequencies_z(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorGyroFft__peak_frequencies_z(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 6> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SensorGyroFft_message_member_array[8] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorGyroFft, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp_sample",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorGyroFft, timestamp_sample),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "device_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorGyroFft, device_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sensor_sample_rate_hz",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorGyroFft, sensor_sample_rate_hz),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "resolution_hz",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorGyroFft, resolution_hz),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "peak_frequencies_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorGyroFft, peak_frequencies_x),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorGyroFft__peak_frequencies_x,  // size() function pointer
    get_const_function__SensorGyroFft__peak_frequencies_x,  // get_const(index) function pointer
    get_function__SensorGyroFft__peak_frequencies_x,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "peak_frequencies_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorGyroFft, peak_frequencies_y),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorGyroFft__peak_frequencies_y,  // size() function pointer
    get_const_function__SensorGyroFft__peak_frequencies_y,  // get_const(index) function pointer
    get_function__SensorGyroFft__peak_frequencies_y,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "peak_frequencies_z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorGyroFft, peak_frequencies_z),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorGyroFft__peak_frequencies_z,  // size() function pointer
    get_const_function__SensorGyroFft__peak_frequencies_z,  // get_const(index) function pointer
    get_function__SensorGyroFft__peak_frequencies_z,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SensorGyroFft_message_members = {
  "px4_msgs::msg",  // message namespace
  "SensorGyroFft",  // message name
  8,  // number of fields
  sizeof(px4_msgs::msg::SensorGyroFft),
  SensorGyroFft_message_member_array,  // message members
  SensorGyroFft_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorGyroFft_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SensorGyroFft_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SensorGyroFft_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace px4_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::SensorGyroFft>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::SensorGyroFft_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, SensorGyroFft)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::SensorGyroFft_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
