/**
 * @file src.cpp
 * @author Rishie Raj (rraj27@umd.edu)
 * @brief Source file for PID Controller implementation
 * @version 0.1
 * @date 2024-10-03
 *
 * @copyright Copyright (c) 2024
 *
 */
#include "pid.hpp"

// Defining the Constructor for initializing class atttributes
PID::PID(double dt, double max, double min, double Kp, double Kd, double Ki)
    : _dt(dt),
      _max(max),
      _min(min),
      _Kp(Kp),
      _Kd(Kd),
      _Ki(Ki),
      _pre_error(0),
      _integral(0) {}

// Defining the stub implementation of calculate method
double PID::calculate(double setpoint, double pv) {

  
  // calculate error
  double error = setpoint - pv;

  // Proportional error
  double prop_error  = _Kp * error;

  // Differential error
  double diff_error = _Kd * ((error - _pre_error)/_dt);

  // integeral error
  // total error uptill now
  _integral = _integral + (error*_dt);
  double int_error = _Ki * (_integral);

  double output = prop_error + diff_error + int_error;

  // storing updated error
  _pre_error = error;

  // Restrict to max/min limits
    if (output > _max)
        output = _max;
    else if (output < _min)
        output = _min;

  
  return output;
}
