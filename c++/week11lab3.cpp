//author@ Chandler Taylor
//date@ 10/28/2025
//purpose@ Using the attached sales.txt file, add each sale to an array.

#include <iostream>
#include <fstream>
using namespace std;
int main() {
    const int MAX_SALES = 100; // Define a maximum size for the sales array
    double sales[MAX_SALES]; // Declare an array to hold sales amounts
    int count = 0; // Variable to keep track of the number of sales read
    double totalSales = 0.0; // Variable to hold the total sales amount

    ifstream inFile("sales.txt"); // Open the file named "sales.txt" for reading
    // Check if the file opened successfully
    if (!inFile) {
        cout << "Error opening file for reading!" << endl; // Output error message if file cannot be opened
        return 1; // Return with error code
    }   

    // Read sales amounts from the file into the array
    while (inFile >> sales[count] && count < MAX_SALES) {
        count++; // Increment the count of sales read
    }

    inFile.close(); // Close the file to free resources

    // Loop through the array to calculate the total sales
    for (int i = 0; i < count; ++i) {
        totalSales += sales[i]; // Add each sale to the total
    }

    // Output the total sales to the console
    cout << "====================" << endl;
    cout << "Total Sales: $" << totalSales << endl;
    cout << "====================" << endl;

    return 0; // Indicate successful completion
}