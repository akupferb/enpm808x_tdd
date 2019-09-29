# C++ Boilerplate
[![Build Status](https://travis-ci.org/akupferb/enpm808x_tdd.svg?branch=master)](https://travis-ci.org/akupferb/enpm808x_tdd)
[![Coverage Status](https://coveralls.io/repos/github/akupferb/enpm808x_tdd/badge.svg?branch=master)](https://coveralls.io/github/akupferb/enpm808x_tdd?branch=master)
---
## Authors

Part 1
* **Ari Kupferberg**  (akupferb) - Driver
* **Zuyang Cao**  (nuclearczy) - Navigator

Part 2

* **Ashwin Varghese Kuruttukulam**  (ashwinvk94) - Driver
* **Arpit Aggarwal**  (arp95) - Navigator


## Overview
Team Driven Development Project to create a PID Controller, with a focus on the compute() function for google testing.

## Notes:
Current unit tests check the functionality of the proportional control, further tests can be written in order to check all functionalities of the PID controller.

dt is not used for PID control. Further improvement can be made to include dt in the equation.

## To Run:
```
git clone https://github.com/akupferb/enpm808x_tdd.git
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run test: ./test/cpp-test
Run program: ./app/shell-app
```

## Building for code coverage (for assignments beginning in Week 4)
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.
