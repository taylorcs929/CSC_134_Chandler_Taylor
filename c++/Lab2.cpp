//@author: Chandler Taylor
//@ 09/03/2025
//@purpose: This program calculates the distance traveled

//include the iostream directive
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main() 
{
    //declare velociity and time
    velocity = 80.0; //in miles per hour    
    time = 2.0; //in hours
    distance = velocity * time; //in miles
    std::cout << "Distance traveled" << distance << " miles." << endl;
    
    return 0;
}