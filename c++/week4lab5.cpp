//author@ Chandler Taylor
//date@ 09/14/2025
//purpose@ write a program that accepts a year from the user and determines if the year is a leap year or not

//include the iostream directive and establish the standard namespace
#include <iostream>
using namespace std;   

//define the main function
int main()
{
    //declare the variable
    int year;
    //prompt the user to enter a year 
    std::cout << "Enter a year: ";
    std::cin >> year;
    //determine if the year is a leap year or not
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        std::cout << year << " is a leap year." << std::endl;
    }
    else
    {
        std::cout << year << " is not a leap year." << std::endl;
    }
    return 0;
}    