//author@: Chandler Taylor
//date@: 09/10/25
//purpose@: To take the three intergers, and prints the letter grade based on the number grade

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
    //print the average
    std::cout << "The average is: " << average << std::endl;    
    //determine the letter grade based on the average
    if (average >= 90 && average <= 100)
    {
        std::cout << "The letter grade is: A" << std::endl;
    }
    else if (average >= 80 && average < 90)
    {
        std::cout << "The letter grade is: B" << std::endl;
    }
    else if (average >= 70 && average < 80)
    {
        std::cout << "The letter grade is: C" << std::endl;
    }
    else if (average >= 60 && average < 70) 
    {
        std::cout << "The letter grade is: D" << std::endl;
    }
    else
    {
        std::cout << "The letter grade is: F" << std::endl;
    }     
    //return 0 to indicate successful completion
    return 0;
}