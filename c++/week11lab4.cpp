//author@ Chandler Taylor
//date@ 10/28/2025
//purpose@ Design and write a C++ program that uses the Luhn algorithm to check the validity of a credit card. 

#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
using namespace std;

bool isValidCreditCard(const string& cardNumber) {
    string reversedNumber = cardNumber;
    reverse(reversedNumber.begin(), reversedNumber.end()); // Reverse the card number for processing

    int sum = 0;

    for (size_t i = 0; i < reversedNumber.length(); ++i) {
        int digit = reversedNumber[i] - '0'; // Convert char to int

        // Double every second digit
        if (i % 2 == 1) {
            digit *= 2;
            // If the result is greater than 9, subtract 9
            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += digit; // Add the digit to the sum
    }

    // A valid credit card number will have a sum that is a multiple of 10
    return (sum % 10 == 0);
}