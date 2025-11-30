//author@ Chandler Taylor
//date@ 10/06/2025
//purpose@ Design and write a program that prompts the user to enter the name of three friends. 

#include <iostream>
#include <fstream>

using namespace std;
int main() 
{
    ofstream lab5File("lab5.txt");

    if (!lab5File) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    string friendName;

    for (int i = 1; i <= 3; ++i) {
        cout << "Enter the name of friend " << i << ": ";
        getline(cin, friendName); // Capture the friend's name
        lab5File << friendName << endl; // Write the friend's name to the file
    }

    lab5File.close();
    cout << "Data written to lab5.txt successfully." << endl;

    return 0;
}