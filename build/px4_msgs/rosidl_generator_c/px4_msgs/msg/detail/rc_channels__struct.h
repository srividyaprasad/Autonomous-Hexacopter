// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RcChannels.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RC_CHANNELS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__RC_CHANNELS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FUNCTION_THROTTLE'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_THROTTLE = 0
};

/// Constant 'FUNCTION_ROLL'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_ROLL = 1
};

/// Constant 'FUNCTION_PITCH'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_PITCH = 2
};

/// Constant 'FUNCTION_YAW'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_YAW = 3
};

/// Constant 'FUNCTION_MODE'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_MODE = 4
};

/// Constant 'FUNCTION_RETURN'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_RETURN = 5
};

/// Constant 'FUNCTION_POSCTL'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_POSCTL = 6
};

/// Constant 'FUNCTION_LOITER'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_LOITER = 7
};

/// Constant 'FUNCTION_OFFBOARD'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_OFFBOARD = 8
};

/// Constant 'FUNCTION_ACRO'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_ACRO = 9
};

/// Constant 'FUNCTION_FLAPS'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_FLAPS = 10
};

/// Constant 'FUNCTION_AUX_1'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_AUX_1 = 11
};

/// Constant 'FUNCTION_AUX_2'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_AUX_2 = 12
};

/// Constant 'FUNCTION_AUX_3'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_AUX_3 = 13
};

/// Constant 'FUNCTION_AUX_4'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_AUX_4 = 14
};

/// Constant 'FUNCTION_AUX_5'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_AUX_5 = 15
};

/// Constant 'FUNCTION_PARAM_1'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_PARAM_1 = 16
};

/// Constant 'FUNCTION_PARAM_2'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_PARAM_2 = 17
};

/// Constant 'FUNCTION_PARAM_3_5'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_PARAM_3_5 = 18
};

/// Constant 'FUNCTION_KILLSWITCH'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_KILLSWITCH = 19
};

/// Constant 'FUNCTION_TRANSITION'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_TRANSITION = 20
};

/// Constant 'FUNCTION_GEAR'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_GEAR = 21
};

/// Constant 'FUNCTION_ARMSWITCH'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_ARMSWITCH = 22
};

/// Constant 'FUNCTION_STAB'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_STAB = 23
};

/// Constant 'FUNCTION_AUX_6'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_AUX_6 = 24
};

/// Constant 'FUNCTION_MAN'.
enum
{
  px4_msgs__msg__RcChannels__FUNCTION_MAN = 25
};

// Struct defined in msg/RcChannels in the package px4_msgs.
typedef struct px4_msgs__msg__RcChannels
{
  uint64_t timestamp;
  uint64_t timestamp_last_valid;
  float channels[18];
  uint8_t channel_count;
  int8_t function[26];
  uint8_t rssi;
  bool signal_lost;
  uint32_t frame_drop_count;
} px4_msgs__msg__RcChannels;

// Struct for a sequence of px4_msgs__msg__RcChannels.
typedef struct px4_msgs__msg__RcChannels__Sequence
{
  px4_msgs__msg__RcChannels * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RcChannels__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__RC_CHANNELS__STRUCT_H_
