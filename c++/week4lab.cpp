//author@: Chandler Taylor
//date@: 09/08/2025
//purpose@: To enter 3 intergers and calculate the values entered.

//include the iostream directive and establish the standard namespace
#include <iostream>
using namespace std;

//define the main function
int main()
{
    //declare the variables
    int num1, num2, num3;
    double average;

    //prompt the user to enter 3 integers
    std::cout << "Enter 3 integers: ";
    std::cin >> num1 >> num2 >> num3;

    //calculate the average of the 3 integers
    average = (num1 + num2 + num3) / 3.0;
    
    //display the results
    std::cout<< "The average of your three integers is: " << average << std::endl; 
    return 0;
}

