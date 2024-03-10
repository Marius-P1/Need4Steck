# Need for Stek (N4S)

N4S is a project developed as part of the Epitech curriculum. The goal of this project is to develop an algorithm that controls a virtual car on a given track.

## Usage

To compile the program, run the following command:

    make

This will generate an executable named `ai`.

To run the program, you will need to launch CoppeliaSim, which is a platform for simulating robots. Load one of the available tracks and then run the following bash script:

    ./pipes.sh

This script will bind the `ai` executable with the `n4s` interpreter (provided by Epitech). 
The `ai` executable sends commands to the standard output, which are then interpreted by the `n4s` executable, which sends commands to the car in the simulator.

## Features

The program supports the following features:

- Allows the user to control a virtual car on a given track.
- Uses a custom algorithm to control the car.
- Connects to CoppeliaSim to simulate the car.

The program is implemented in C.

## Contributors

This project was developed by Alban Peralta, Thomas Boué and Marius Pain, as part of the Epitech curriculum.
