/**
 * @file pid.hpp
 * @author Rishie Raj (rraj27@umd.edu)
 * @brief Header file for PID Controller
 * @version 0.1
 * @date 2024-10-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#pragma once

/**
 * @brief The PID class declared
 *
 */
class PID {
 public:
  /**
   * @brief Construct a new PID object
   * 
   * @param dt 
   * @param max 
   * @param min 
   * @param Kp 
   * @param Kd 
   * @param Ki 
   */
  PID(double dt, double max, double min, double Kp, double Kd, double Ki);
  /**
   * @brief method to return the manipulated variable given a setpoint and current process value
   * 
   * @param setpoint 
   * @param pv 
   * @return double 
   */
  double calculate(double setpoint, double pv);

 private:
  // Kp -  proportional gain
  // Ki -  Integral gain
  // Kd -  derivative gain
  // dt -  loop interval time
  // max - maximum value of manipulated variable
  // min - minimum value of manipulated variable
  double _dt;
  double _max;
  double _min;
  double _Kp;
  double _Kd;
  double _Ki;
  double _pre_error;
  double _integral;
};