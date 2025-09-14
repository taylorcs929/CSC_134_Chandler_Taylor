//@author: Chandler Taylor
//@ 09/03/2025
//@purpose: This program calculates the velocity

//include the iostream directive
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    //declare distance and time
    distance = 160.0; //in miles    
    time = 2.0; //in hours
    velocity = distance / time; //in miles per hour
    std::cout << "Velocity " << velocity << " miles per hour." << endl;
    
    return 0;
}