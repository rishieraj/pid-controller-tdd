/**
 * @file main.cpp
 * @author Rishie Raj (rraj27@umd.edu)
 * @brief Driver program for the PID Controller implementation
 * @version 0.1
 * @date 2024-10-03
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <cstdio>

#include "pid.hpp"

int main() {
  PID pid = PID(0.1, 100, -100, 0.1, 0.01, 0.5);

  double val = 20;
  for (int i = 0; i < 100; i++) {
    double inc = pid.calculate(0, val);
    printf("val:% 7.3f inc:% 7.3f\n", val, inc);
    val += inc;
  }

  return 0;
}
