// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/VehicleAttitudeSetpoint.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_attitude_setpoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__VehicleAttitudeSetpoint__init(px4_msgs__msg__VehicleAttitudeSetpoint * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // roll_body
  // pitch_body
  // yaw_body
  // yaw_sp_move_rate
  // q_d
  // thrust_body
  // roll_reset_integral
  // pitch_reset_integral
  // yaw_reset_integral
  // fw_control_yaw
  // apply_flaps
  return true;
}

void
px4_msgs__msg__VehicleAttitudeSetpoint__fini(px4_msgs__msg__VehicleAttitudeSetpoint * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // roll_body
  // pitch_body
  // yaw_body
  // yaw_sp_move_rate
  // q_d
  // thrust_body
  // roll_reset_integral
  // pitch_reset_integral
  // yaw_reset_integral
  // fw_control_yaw
  // apply_flaps
}

px4_msgs__msg__VehicleAttitudeSetpoint *
px4_msgs__msg__VehicleAttitudeSetpoint__create()
{
  px4_msgs__msg__VehicleAttitudeSetpoint * msg = (px4_msgs__msg__VehicleAttitudeSetpoint *)malloc(sizeof(px4_msgs__msg__VehicleAttitudeSetpoint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__VehicleAttitudeSetpoint));
  bool success = px4_msgs__msg__VehicleAttitudeSetpoint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__VehicleAttitudeSetpoint__destroy(px4_msgs__msg__VehicleAttitudeSetpoint * msg)
{
  if (msg) {
    px4_msgs__msg__VehicleAttitudeSetpoint__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__VehicleAttitudeSetpoint__Sequence__init(px4_msgs__msg__VehicleAttitudeSetpoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__VehicleAttitudeSetpoint * data = NULL;
  if (size) {
    data = (px4_msgs__msg__VehicleAttitudeSetpoint *)calloc(size, sizeof(px4_msgs__msg__VehicleAttitudeSetpoint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__VehicleAttitudeSetpoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__VehicleAttitudeSetpoint__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
px4_msgs__msg__VehicleAttitudeSetpoint__Sequence__fini(px4_msgs__msg__VehicleAttitudeSetpoint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__VehicleAttitudeSetpoint__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

px4_msgs__msg__VehicleAttitudeSetpoint__Sequence *
px4_msgs__msg__VehicleAttitudeSetpoint__Sequence__create(size_t size)
{
  px4_msgs__msg__VehicleAttitudeSetpoint__Sequence * array = (px4_msgs__msg__VehicleAttitudeSetpoint__Sequence *)malloc(sizeof(px4_msgs__msg__VehicleAttitudeSetpoint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__VehicleAttitudeSetpoint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__VehicleAttitudeSetpoint__Sequence__destroy(px4_msgs__msg__VehicleAttitudeSetpoint__Sequence * array)
{
  if (array) {
    px4_msgs__msg__VehicleAttitudeSetpoint__Sequence__fini(array);
  }
  free(array);
}
