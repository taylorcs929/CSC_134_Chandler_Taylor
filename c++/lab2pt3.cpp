//@author: Chandler Taylor
//@ 09/03/2025
//@purpose: This program calculates the voltage

//include the iostream directive
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
//declare current and resistance    
    current = 10.0; //in amps
    resistance = 2.0; //in ohms
    voltage = current * resistance; //in voltage
    std::cout << "Voltage " << voltage << " volts." << endl;

    return 0;
}   