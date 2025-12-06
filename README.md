# lane-keep-steering-controller

EPS module for lane keeping and steering corrections.

## Overview
This repository contains a sample C implementation of a simple lane-keeping steering controller. The program calculates cross-track errors relative to a lane center and applies a proportional control law to generate steering corrections.

## Features
- Calculates cross-track error relative to the lane center.
- Uses a proportional controller to compute steering corrections.
- Demonstrates how a lane-keeping controller can be implemented for electric power steering (EPS) systems.
- Provides a baseline for more advanced lane-keeping algorithms.

## Getting Started
1. Compile the `main.c` file with a C compiler such as gcc:
   ```bash
   gcc -o lane_keep_controller main.c
   ```
2. Run the compiled program:
   ```bash
   ./lane_keep_controller
   ```

The program will output cross-track errors and the calculated steering corrections for each sample input.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
