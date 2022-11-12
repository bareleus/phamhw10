#include "AnalogIn.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
	// Create object
	AnalogIn Analog(0);
	Analog.getNumber();
	// Print result
	cout <<	"The result for readAdcSample is: " << Analog.readAdcSample() << endl;



}
