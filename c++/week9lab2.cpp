//author@ Chandler Taylor
//date@ 10/20/2025
//purpose@ Modify your lab 1 program to write a new file week9_lab2.txt.

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {
    ofstream outFile("week9_lab2.txt"); // Open the file named "week9_lab2.txt" for writing
    // Check if the file opened successfully
    if (!outFile) {
        cout << "Error opening file for writing!" << endl; // Output error message if file cannot be opened
        return 1; // Return with error code
    }   
    
    int numDays;
    cout << "Enter the number of days: ";
    cin >> numDays; // Prompt user for the number of days

    double totalSales = 0.0;

    // Loop over the number of days to capture sales for each day
    for (int day = 1; day <= numDays; ++day) {
        double sales;
        cout << "Enter sales for day " << day << ": ";
        cin >> sales; // Prompt user to enter sales for the current day
        outFile << sales << endl; // Write the sales amount to the file
        totalSales += sales;
    }

    outFile.close(); // Close the file to free resources
    cout << "Sales data has been written to week9_lab2.txt" << endl; // Inform user of successful write
  // Use stringstream to format the total sales output
    ostringstream formattedTotal;
    formattedTotal << fixed << setprecision(2) << totalSales;
    // Output the formatted total sales to the console
    cout << "====================" << endl;
    cout << "Total Sales: $" << formattedTotal.str() << endl;
    cout << "====================" << endl;
   
    return 0; // Indicate successful completion
}