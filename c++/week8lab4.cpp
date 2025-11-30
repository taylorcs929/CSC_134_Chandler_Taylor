//author@ Chandler Taylor
//date@ 10/06/2025
//purpose@ Design and write a program that accepts an integer input from the user and use the ofstream object to create a new file named lab4.txt.

#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream outFile; // Create an ofstream object to handle file output
    outFile.open("lab4.txt"); // Open (or create) the file named "lab4.txt"

    // Check if the file opened successfully
    if (!outFile) {
        cout << "Error opening file!" << endl; // Output error message if file cannot be opened
        return 1; // Return with error code
    }

    int n;
    cout << "Enter an integer: "; // Prompt user for input
    cin >> n; // Read integer input from user

    // Loop from 0 to n-1 and write each value to the file on a new line
    for (int i = 0; i < n; ++i) {
        outFile << i << endl; // Write the current iteration value to the file
    }

    outFile.close(); // Close the file to ensure all data is written and resources are freed
    cout << "Done Writing...." << endl; // Indicate completion to the user
    return 0; // Indicate successful completion
}