# PID App - Test Driven Development

![CICD Workflow status](https://github.com/rishieraj/pid-controller-tdd/actions/workflows/test.yml/badge.svg) [![codecov](https://codecov.io/gh/rishieraj/pid-controller-tdd/branch/main/graph/badge.svg)](https://codecov.io/gh/rishieraj/pid-controller-tdd) [![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)
| Part 1 |
| Team 1 |
|---|
| **Rishie Raj - 120425554** (Driver & Navigator)|
| Part 2 |
| Team 2 |
|---|
| **Abhey Sharma - 120110306** (Driver)|
| **Navdeep Singh - ** (Navigator)|

## Setup via command line
```bash
# Download the code:
  git clone https://github.com/rishieraj/pid-controller-tdd.git
  cd pid-controller-tdd
# Build the project
  cmake -S ./ -B build/
  cmake --build build/
# Run program:
  ./build/app/pid-app
# Run tests:
  ctest --test-dir build/
# Build docs for Doxygen format:
  cmake --build build/ --target docs
  # open a web browser to browse the doc
  open docs/html/index.html
```

## Building for test coverage

```bash
# if you don't have gcovr or lcov installed, do:
  sudo apt install gcovr lcov
# Set the build type to Debug and WANT_COVERAGE=ON
  cmake -D WANT_COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug -S ./ -B build/
# Now, do a clean compile, run unit test, and generate the covereage report
  cmake --build build/ --clean-first --target all test_coverage
# open a web browser to browse the test coverage report
  open build/test_coverage/index.html
```

## UML Class Diagram

![Class Diagram](https://github.com/rishieraj/pid-controller-tdd/blob/7561a1454b045f27e641648c434a33155e314d2f/images/tdd_uml_class.png)

## UML Activity Diagram

![Activity Diagram](https://github.com/rishieraj/pid-controller-tdd/blob/7561a1454b045f27e641648c434a33155e314d2f/images/tdd_uml_activity.png)
