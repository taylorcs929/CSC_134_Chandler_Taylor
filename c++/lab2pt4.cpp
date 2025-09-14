//@author: Chandler Taylor
//@ 09/03/2025
//@purpose: This program calculates force

//include the iostream directive
#include <iostream> 

//use the standard namespace
using namespace std;    

//define the main() function/method
int main()
{
    //declare mass and acceleration
    mass = 10.0; //in kilograms
    acceleration = 9.81; //in meters per second squared
    force = mass * acceleration; //in newtons
     std::cout << "Force " << force << " newtons." << endl;

    return 0;
}