//author@ Chandler Taylor
//date@ 11/20/2025
//purpose@ Write a C++ program named squareNum.cpp that prompts the user for an integer value.

#include <iostream>
using namespace std;

int squareNumber(int num) {
    return num * num; // Return the squared value
}
int main() {
    int number;
    cout << "Enter an integer value: ";
    cin >> number; // Get user input

    int squaredValue = squareNumber(number); // Call the function to square the number
    cout << "The squared value of " << number << " is: " << squaredValue << endl; // Print the result

    return 0;
}