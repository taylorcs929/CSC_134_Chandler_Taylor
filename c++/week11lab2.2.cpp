//author@ Chandler Taylor
//date@ 10/28/2025
//purpose@ Enable users to input a set of intergers and display them in reverse order.

#include <iostream>
#include <limits> // For numeric_limits
using namespace std;

int main() {
    const int SIZE = 10; // Define the size of the array
    int numbers[SIZE]; // Declare an array to hold the integers

    // Prompt the user to enter integers with input validation
    for (int i = 0; i < SIZE; ++i) {
        while (true) {
            cout << "Enter integer " << (i + 1) << ": ";
            cin >> numbers[i];

            // Check if the input is valid
            if (cin.fail()) {
                cin.clear(); // Clear the error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                cout << "Invalid input. Please enter an integer." << endl;
            } else {
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard any extra input
                break; // Exit the loop if input is valid
            }
        }
    }

    // Output the integers in reverse order
    cout << "====================" << endl;
    cout << "Integers in Reverse Order:" << endl;
    for (int i = SIZE - 1; i >= 0; --i) {
        cout << numbers[i] << endl; // Print each integer in reverse order
    }
    cout << "====================" << endl;

    return 0; // Indicate successful completion
}