#!/bin/bash

# Create build directory if not exists
mkdir -p build

# Change to build directory
cd build

# Run CMake to generate build files
cmake ..

# Build the project using make
make

# Run the executable
./BlueWifiMonitor

