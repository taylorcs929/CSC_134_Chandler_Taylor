//author@ Chandler Taylor
//date@ 11/20/2025
//purpose@ Write a C++ program named loop.cpp that implements a function named loop(). 
#include <iostream>
using namespace std;

void loop(int limit) {
    if (limit >= 1000) {
        cout << "Please enter a value less than 1000." << endl;
        return; // Exit the function if the limit is invalid
    }
    cout << "Looping from 0 to " << limit << ":" << endl;
    for (int i = 0; i <= limit; ++i) {
        cout << i << " "; // Print the current number
    }
    cout << endl; // Print a newline after the loop
}
int main() {
    int userInput;
    cout << "Enter an integer value less than 1000: ";
    cin >> userInput; // Get user input

    loop(userInput); // Call the loop function with the user input

    return 0;
}