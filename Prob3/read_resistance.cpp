// read_resistance.cpp takes no argument
// Example: ./read_resistance

#include "AnalogIn.h"
#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the value of resistance
double converter(double adc){
	double result = -(adc * 10000) / (adc - 4095);
	return round(result);
}


int main(int argc, char* argv[]){
	// Create object for ADC value
	AnalogIn analog(0);
	analog.getNumber();
	// Get ADC value
	double adc_value = analog.readAdcSample();
	cout << "Using AIN0 to read analog value." << endl;
	cout << "Measuring resistance ..." << endl;
	cout << "ADC value is: " << adc_value << endl;
	cout << endl;
	// ADC Value
	double result = converter(adc_value);
	// Convert 1000 to 1K
	if (result >= 1000){
		double answer = result / 1000;
		float thousand = floor(answer * 100.0) / 100.0;
		cout << "Resistance: " << thousand << "K" << " Ohms" << endl;
	}
	if (result < 1000){
		cout << "Resistance: " << result << " Ohms" << endl;
	}
}
