/*
      Immanuel Braxton
      9/25/2024
      Project 1. Calculator
      Description: This program mimics a calculator. The program takes an input of two
      integers and the operation to be performed. It should then output the numbers, the
      operator, and the result. For division, if the denominator is zero, an ouput of undefined 
      will be displayed. It is limited to the supported operations to + - / * and writes an error
      message if the operator is not one of the supported operations. This program will ask the user if
	  they want to continue calculations or exit program. The program uses nested if statements.

 */

#include <iostream>

#include <iomanip>

#include <cmath>

using namespace std;

int main()
{
    double FirstP; // First Product
    double SecondP;
    double Answer;
    char Operand;


    cout << "This program will calculate two products and a operand of your choosing.\n" << endl;
    cout << "Please enter first product.\n" << endl;
    cin >> FirstP;
    cout << "Please enter operand.\n" << endl;
    if (Operand != ("+")) || ("-") || ("*") || ("/"))
    cin >> Operand;
    
    cout << "Please enter second product.\n" << endl;
    cin >> SecondP;
    
    Answer = FirstP, Operand, SecondP;

    cout << "Your answer is " << Answer << "." << endl;
}

/*
* talk about program
* ask for first number
* ask for operand
* figure out how to make error message for wrong operand
* ask for last number
* 
* calculate don't for get about the remander in division
* show final
*/