//author@ Chandler Taylor
//date@ 10/28/2025
//purpose@ write a C++ program that has an array of 10 integer elements. 
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int SIZE = 10; // Define the size of the array
    int grades[SIZE]; // Declare an array to hold 10 integer grades
    int sum = 0; // Variable to hold the sum of the grades

    // Prompt the user to enter grades
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter grade " << (i + 1) << ": ";
        cin >> grades[i]; // Read each grade into the array
        sum += grades[i]; // Add the grade to the sum
    }

    // Calculate the average
    double average = static_cast<double>(sum) / SIZE;

    // Output the average to the console with two decimal places
    cout << fixed << setprecision(2);
    cout << "====================" << endl;
    cout << "Average Grade: " << average << endl;
    cout << "====================" << endl;

    return 0; // Indicate successful completion
}