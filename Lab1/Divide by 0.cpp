//@author: Chandler Taylor
//@ 09/03/2025
//@purpose This program divides a number by zero

//include the iostream directive
#include <iostream>

//use standard namespace
using namespace std;

//define the main() function/method
int main()
{
 int num1 = 1;
 int product = num1 / 0;

 // this prints out the product from the two numbers above.
 std::cout << product << std:: endl;

   return 0;

}