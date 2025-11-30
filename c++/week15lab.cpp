//author@ Chandler Taylor
//date@ 11/29/2025
//purpose@ You should use the existing code provided in TinkerCad and properly build a 2-D array that represents the keypad. You should use the "keys" character array to store the keypad---this variable is already represented in the code for you. You should determine which key is pressed(e.g. 1,2,3, A,B,C etc.) and print it to the TinkerCad console, so that you can visualize the keypress event. You should create a passcode variable at least 5 characters in length and determine if the passcode you entered is valid. Note: the pound/hash(#) key should represent the "Enter Key", meaning that when you press #, that is the end of the passcode and it should be validated after the # key is pressed. If the passcode is correct, then you should turn on the green LED for 3 seconds. If the passcode is invalid, you should turn on the red LED for 3 seconds. You should use conditional logic and any other logic constructs(e.g. for-loops) to accomplish this simple security system.

#include <iostream>
using namespace std;
const int ROWS = 4;
const int COLS = 4;
char keys[ROWS][COLS] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}
};
void validatePasscode(const string& enteredCode, const string& correctCode) {
    if (enteredCode == correctCode) {
        cout << "Access Granted: Green LED ON for 3 seconds." << endl;
        // Simulate LED on for 3 seconds
    } else {
        cout << "Access Denied: Red LED ON for 3 seconds." << endl;
        // Simulate LED on for 3 seconds
    }
}
int main() {
    string correctPasscode = "12345"; // Predefined correct passcode
    string enteredPasscode = "";
    char keyPressed;
    cout << "Enter passcode followed by '#' to submit:" << endl;
    while (true) {
        cout << "Press a key: ";
        cin >> keyPressed; // Simulate key press input
        cout << "Key Pressed: " << keyPressed << endl; // Print the key
        if (keyPressed == '#') {
            break; // End of passcode entry
        }
        enteredPasscode += keyPressed; // Append pressed key to passcode
    }
    validatePasscode(enteredPasscode, correctPasscode); // Validate the entered passcode
    return 0;
}   
