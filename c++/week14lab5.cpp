//author@ Chandler Taylor
//date@ 11/20/2025
//purpose@ Write a C++ program named multipleFunctions.cpp that use the squareNumber() and averageValues() functions.

#include <iostream>
using namespace std;

int squareNumber(int num) {
    return num * num; // Return the squared value
}
double averageValues(int num1, int num2, int num3) {
    return (num1 + num2 + num3) / 3.0; // Calculate and return the average
}
void multipleFuncs() {
    int num1, num2, num3;
    cout << "Enter three integer values: ";
    cin >> num1 >> num2 >> num3; // Get user input

    int squaredValue = squareNumber(num1); // Call the function to square the first number
    double average = averageValues(num1, num2, num3); // Call the function to calculate the average

    cout << "The squared value of " << num1 << " is: " << squaredValue << endl; // Print the squared value
    cout << "The average of " << num1 << ", " << num2 << ","
            " and " << num3 << " is: " << average << endl; // Print the average
}
int main() {
    multipleFuncs(); // Call the function to execute the multiple functions
    return 0;
}