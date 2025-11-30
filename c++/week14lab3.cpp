//author@ Chandler Taylor
//date@ 11/20/2025
//purpose@ Write a C++ program named average.cpp that averages three integer values. 

#include <iostream>
using namespace std;

double averageValues(int num1, int num2, int num3) {
    return (num1 + num2 + num3) / 3.0; // Calculate and return the average
}
int main() {
    int value1, value2, value3;
    cout << "Enter three integer values: ";
    cin >> value1 >> value2 >> value3; // Get user input

    double average = averageValues(value1, value2, value3); // Call the function to calculate the average
    cout << "The average of " << value1 << ", " << value2 << ","
            " and " << value3 << " is: " << average << endl; // Print the result

    return 0;
}   