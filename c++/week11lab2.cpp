//author@ Chandler Taylor 
//date@ 10/28/2025
//purpose@ write a C++ program to initialize a 1-D array with 5 integer values and sum those values and print the total to the console.
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5; // Define the size of the array
    int numbers[SIZE] = {10, 20, 30, 40, 50}; // Initialize the array with 5 integer values
    int sum = 0; // Variable to hold the sum of the array elements

    // Loop through the array to calculate the sum
    for (int i = 0; i < SIZE; ++i) {
        sum += numbers[i]; // Add each element to the sum
    }

    // Output the total sum to the console
    cout << "====================" << endl;
    cout << "Total Sum: " << sum << endl;
    cout << "====================" << endl;

    return 0; // Indicate successful completion
}