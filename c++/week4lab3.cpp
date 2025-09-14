//author@ Chandler Taylor
//date@ 09/10/2025
//purpose@ Design a program that accepts an interger value from a user using the modulo operator to determine if the number is even or odd

//include the iostream directive and establish the standard namespace
#include <iostream>
using namespace std;

//define the main function
int main()
{
    //declare the variable
    int num;
    //prompt the user to enter an integer
    std::cout << "Enter an integer: ";
    std::cin >> num;
    //determine if the number is even or odd using the modulo operator
    if (num % 2 == 0)
    {
        std::cout << num << " is an even number." << std::endl;
    }
    else
    {
        std::cout << num << " is an odd number." << std::endl;
    }
    return 0;
}