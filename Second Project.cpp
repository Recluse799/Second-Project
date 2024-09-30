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
-
#include <cmath>

using namespace std;

int main()
{
	char op, choice, N, Y;
	double num1, num2;
	choice = 'Y';  // Initialize the choice variable


	while (choice == 'Y') // loop while Y is equal to continue
	{


		cout << "Enter first integer, an operator (+, -, * or /), then last integer, include space between each item:"; // ask for operator, loop while i is equal to 1
		cin >> num1 >> op >> num2;

		//cout << "Enter two integers, include a space between integers: "; // ask for the two numbers, in while loop
		//cin >> num1 >> num2;

		if (op == '+')
		{
			cout << "total: " << num1 << "+" << num2 << "=" << (num1 + num2) << endl;
		}
		else if (op == '-')
		{
			cout << "total: " << num1 << "-" << num2 << "=" << (num1 - num2) << endl;
		}
		else if (op == '*')
		{
			cout << "total: " << num1 << "*" << num2 << "=" << (num1 * num2) << endl;
		}
		else if (op == '/')
		{
			if (num2 != 0)
			{
				cout << "total: " << num1 << "/" << num2 << "=" << (num1 / num2) << endl;
			}
			else
			{
				cout << "total: " << num1 << "/" << num2 << "=" << "Undefined" << endl;
			}
		}

		else
		{
			cout << "Invalid operator " << endl;
		}


		cout << "Would you like to continue operating? Enter 'Y' or 'N' (case sensitive): " << endl;
		cin >> choice;

		while (choice != 'Y' && choice != 'N')
		{
			cout << "Invalid input! Please enter Y to continue or N to stop: " << endl;
			cin >> choice;
		}
		if (choice == 'N')
		{
			break; //exit the loop if th user enters 'N'
		}
	}



	return 0;

}

/*
* 
* 
* 
* 
* 
* 
* 
* 
*/