// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/AirspeedWind.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__AIRSPEED_WIND__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__AIRSPEED_WIND__BUILDER_HPP_

#include "px4_msgs/msg/detail/airspeed_wind__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_AirspeedWind_source
{
public:
  explicit Init_AirspeedWind_source(::px4_msgs::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::AirspeedWind source(::px4_msgs::msg::AirspeedWind::_source_type arg)
  {
    msg_.source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_beta_innov_var
{
public:
  explicit Init_AirspeedWind_beta_innov_var(::px4_msgs::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  Init_AirspeedWind_source beta_innov_var(::px4_msgs::msg::AirspeedWind::_beta_innov_var_type arg)
  {
    msg_.beta_innov_var = std::move(arg);
    return Init_AirspeedWind_source(msg_);
  }

private:
  ::px4_msgs::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_beta_innov
{
public:
  explicit Init_AirspeedWind_beta_innov(::px4_msgs::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  Init_AirspeedWind_beta_innov_var beta_innov(::px4_msgs::msg::AirspeedWind::_beta_innov_type arg)
  {
    msg_.beta_innov = std::move(arg);
    return Init_AirspeedWind_beta_innov_var(msg_);
  }

private:
  ::px4_msgs::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_tas_scale
{
public:
  explicit Init_AirspeedWind_tas_scale(::px4_msgs::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  Init_AirspeedWind_beta_innov tas_scale(::px4_msgs::msg::AirspeedWind::_tas_scale_type arg)
  {
    msg_.tas_scale = std::move(arg);
    return Init_AirspeedWind_beta_innov(msg_);
  }

private:
  ::px4_msgs::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_tas_innov_var
{
public:
  explicit Init_AirspeedWind_tas_innov_var(::px4_msgs::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  Init_AirspeedWind_tas_scale tas_innov_var(::px4_msgs::msg::AirspeedWind::_tas_innov_var_type arg)
  {
    msg_.tas_innov_var = std::move(arg);
    return Init_AirspeedWind_tas_scale(msg_);
  }

private:
  ::px4_msgs::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_tas_innov
{
public:
  explicit Init_AirspeedWind_tas_innov(::px4_msgs::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  Init_AirspeedWind_tas_innov_var tas_innov(::px4_msgs::msg::AirspeedWind::_tas_innov_type arg)
  {
    msg_.tas_innov = std::move(arg);
    return Init_AirspeedWind_tas_innov_var(msg_);
  }

private:
  ::px4_msgs::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_variance_east
{
public:
  explicit Init_AirspeedWind_variance_east(::px4_msgs::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  Init_AirspeedWind_tas_innov variance_east(::px4_msgs::msg::AirspeedWind::_variance_east_type arg)
  {
    msg_.variance_east = std::move(arg);
    return Init_AirspeedWind_tas_innov(msg_);
  }

private:
  ::px4_msgs::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_variance_north
{
public:
  explicit Init_AirspeedWind_variance_north(::px4_msgs::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  Init_AirspeedWind_variance_east variance_north(::px4_msgs::msg::AirspeedWind::_variance_north_type arg)
  {
    msg_.variance_north = std::move(arg);
    return Init_AirspeedWind_variance_east(msg_);
  }

private:
  ::px4_msgs::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_windspeed_east
{
public:
  explicit Init_AirspeedWind_windspeed_east(::px4_msgs::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  Init_AirspeedWind_variance_north windspeed_east(::px4_msgs::msg::AirspeedWind::_windspeed_east_type arg)
  {
    msg_.windspeed_east = std::move(arg);
    return Init_AirspeedWind_variance_north(msg_);
  }

private:
  ::px4_msgs::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_windspeed_north
{
public:
  explicit Init_AirspeedWind_windspeed_north(::px4_msgs::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  Init_AirspeedWind_windspeed_east windspeed_north(::px4_msgs::msg::AirspeedWind::_windspeed_north_type arg)
  {
    msg_.windspeed_north = std::move(arg);
    return Init_AirspeedWind_windspeed_east(msg_);
  }

private:
  ::px4_msgs::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_timestamp_sample
{
public:
  explicit Init_AirspeedWind_timestamp_sample(::px4_msgs::msg::AirspeedWind & msg)
  : msg_(msg)
  {}
  Init_AirspeedWind_windspeed_north timestamp_sample(::px4_msgs::msg::AirspeedWind::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_AirspeedWind_windspeed_north(msg_);
  }

private:
  ::px4_msgs::msg::AirspeedWind msg_;
};

class Init_AirspeedWind_timestamp
{
public:
  Init_AirspeedWind_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AirspeedWind_timestamp_sample timestamp(::px4_msgs::msg::AirspeedWind::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_AirspeedWind_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::AirspeedWind msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::AirspeedWind>()
{
  return px4_msgs::msg::builder::Init_AirspeedWind_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__AIRSPEED_WIND__BUILDER_HPP_
