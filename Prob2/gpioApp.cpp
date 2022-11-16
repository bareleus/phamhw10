// gpioApp.cpp takes no argument
// Example: ./gpioApp

#include "AnalogIn.h"
#include "makeLEDs.h"
#include "GPIO.h"
#include <iostream>

using namespace std;
using namespace exploringBB;

int main(int argc, char* argv[]){
	// Create objects
	// LEDs
	LED led1(1);
	LED led2(2);
	LED led3(3);
	// Temperature
	AnalogIn analog(0);
	analog.getNumber();
	// Button
	GPIO button(46);
	// LED on P.912
	GPIO light(60);

	// Turn on user LEDs number 1 and 3.
	led1.turnOn();
	led3.turnOn();
	// Flash user LED 2 three times.
	led2.blink(3);
	// Read the temperature sensor and display its value.
	cout << "The value for temperature sensor is: " << analog.readAdcSample() << endl;
	// Read the push button on P8.16
	cout << "The value for the push button is: " << button.getValue() << endl;
	// If the push button in item 4 was pushed, turn on the LED on P9.12
	if(button.getValue() == 0){
		cout << "Turning on the LED on P9.12" << endl;
		light.setValue(HIGH);
	}
	else if(button.getValue() ==1){
		light.setValue(LOW);
	}
}
