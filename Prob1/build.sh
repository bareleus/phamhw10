#!/bin/bash

echo "Building the AnalogIn application"
g++ -Wall test_analog.cpp AnalogIn.cpp -o test_analog
echo "Finished"
