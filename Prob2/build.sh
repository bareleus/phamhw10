#!/bin/bash

config-pin p9.12 gpio
echo out > /sys/class/gpio/gpio60/direction
config-pin p8.16 gpio_pu

echo "Building the gpioApp application"
g++ gpioApp.cpp makeLEDs.cpp AnalogIn.cpp GPIO.cpp -o gpioApp -pthread
echo "Finished"
