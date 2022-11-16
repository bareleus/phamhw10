// test_analog.cpp takes no argument
// Example: ./test_analog


#include "AnalogIn.h"
#include <iostream>

using namespace std;

int main(int argc, char*argv[]){
	// Create object for analog
	AnalogIn analog(0);
	analog.getNumber();
	// Print
	cout << "ADC Value: " << analog.readAdcSample() << endl;

}
