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
  return 0.0;
}
