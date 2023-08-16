// largestOfThree.cpp
//
// Programmer's name: Dennis Mohle
// Date: Aug 16, 2023
//
// Description of program:
//
// TODO: Describe your program in terms of input, processing, and output
//
// This program will input...
//
//
// References:
//
// Getting started:
// https://www.w3schools.com/cpp/cpp_getstarted.asp
// User Input:
// https://www.w3schools.com/cpp/cpp_user_input.asp
// Strings:
// https://www.w3schools.com/cpp/cpp_strings.asp

#include <iostream>
using namespace std;

int num1 = 0;
int num2 = 0;
int num3 = 0;
int largest = 0;

int main(){
  cout << "\n\n Welcome to the largest of Three Program\n\n";

  // Get the user's name
  string userName = "";
  cout << "\n Please enter your name: ";
  cin >> userName;

  // Get all three ints from the user
  cout << "\n Please enter the first integer: ";
  cin >> num1;
  cout << "\n\n Thank you for entering " << num1 << " as your first int!\n";

  cout << "\n Please enter the second integer: ";
  cin >> num2;
  cout << "\n Thank you for entering " <<num2 << " as your second int! \n";

  cout << "\n Please enter the third and final integer: ";
  cin >> num3;
  cout << "\n\n Thank you for entering " << num3 << " as your third int!\n";


  // Processing Section
  if (num1 > num2)
  {
      if (num1 > num3)
      {
          largest = num1;
      }
      else
      {
          largest = num3;
      }
  }

  else
  {
      if (num2 > num3)
      {
          largest = num2;
      }
      else
      {
          largest = num3;
      }
  }

  // Final
  cout << " the largest number is " << largest << " !";

  return 0;

}
