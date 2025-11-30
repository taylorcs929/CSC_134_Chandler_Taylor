//author@ Chandler Taylor
//date@ 11/20/2025
//purpose@ Write a C++ program that uses a function named displayWelcome() that does not take any arguments and returns void. 

#include <iostream>
using namespace std;

void displayWelcome() {
    cout << "==============================" << endl;
    cout << "C++ Function Demonstration" << endl; 
    cout << "==============================" << endl;
    cout << "This program shows how to use a void returning function that does not take any arguments" << endl;
}
int main() {
    displayWelcome(); // Call the function to display the welcome message
    return 0;
}