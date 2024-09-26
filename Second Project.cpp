/*
      Immanuel Braxton
      9/25/2024
      Project 1. Calculator
      Description: Write a program that mimics a calculator. The program should take as input two
      integers and the operation to be performed. It should then output the numbers, the
      operator, and the result. For division, if the denominator is zero, output an
      appropriate message. Limit the supported operations to + - / * and write an error
      message if the operator is not one of the supported operations. Here is some
      example output: 3 + 4 = 7, 13 * 5 = 65

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