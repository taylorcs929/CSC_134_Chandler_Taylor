//author@ Chandler Taylor
//date@ 10/28/2025
//purpose@ Find the maximum value in an array. 

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

    // Find the maximum value in the array
    int maxValue = numbers[0]; // Assume the first element is the maximum

    for (int i = 1; i < SIZE; ++i) {
        if (numbers[i] > maxValue) {
            maxValue = numbers[i]; // Update maxValue if current element is greater
        }
    }

    // Output the maximum value to the console
    cout << "====================" << endl;
    cout << "Maximum Value: " << maxValue << endl;
    cout << "====================" << endl;

    return 0; // Indicate successful completion
}