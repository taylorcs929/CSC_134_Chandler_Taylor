//author@ Chandler Taylor
//date@ 09/10/2025
//purpose@ write a program that a single character and determine if the character is a vowel or consonant

//include the iostream directive and establish the standard namespace
#include <iostream>
using namespace std;

//define the main function
int main()
{
    //declare the variable 
    char letter;
    //prompt the user to enter a single character
    std::cout << "Enter a single character: ";
    std::cin >> letter;
    //determine if the character is a vowel or consonant
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
        letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
    {
        std::cout << letter << " is a vowel." << std::endl;
    }
    else
    {
        std::cout << letter << " is a consonant." << std::endl;
    }
    return 0;
}