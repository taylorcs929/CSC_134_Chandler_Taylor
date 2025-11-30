//author@ Chandler Taylor
//date@ 10/20/2025
//purpose@ Design and write a C++ program that prompts the user for the number of days and loops over the days and prompts the user the enter sales for each day. 

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("week9_lab1.txt"); // Open the file named "week9_lab1.txt" for writing
    // Check if the file opened successfully
    if (!outFile) {
        cout << "Error opening file for writing!" << endl; // Output error message if file cannot be opened
        return 1; // Return with error code
    }   
    
    int numDays;
    cout << "Enter the number of days: ";
    cin >> numDays; // Prompt user for the number of days

    // Loop over the number of days to capture sales for each day
    for (int day = 1; day <= numDays; ++day) {
        double sales;
        cout << "Enter sales for day " << day << ": ";
        cin >> sales; // Prompt user to enter sales for the current day
        outFile << sales << endl; // Write the sales amount to the file
    }

    outFile.close(); // Close the file to free resources
    cout << "Sales data has been written to week9_lab1.txt" << endl; // Inform user of successful write
    return 0; // Indicate successful completion
}