// Standard Libs
#include <iostream>
#include <cmath>
#include "Util.h"

// Namespaces
using namespace std;

int main()
{
	// Define vars
	double num1, num2;
	char operation, redo;

	// Program "watermark"
	cout << "Simple C++ Commandline Calculator by TherioJunior#3643";
	for (int i = 0; i < 3; i++)
	{
		cout << endl;
	}

	do
	{
		cout << "Available calculation options: +, -, *, /";
		cout << endl;
		cout << "Please enter the option you want to calculate 2 numbers with: ";
		cin >> operation;
		
		for (int i = 0; i < 2; i++)
		{
			cout << endl;
		}

		switch (operation)
		{
		case '+':
			cout << "Please enter the two numbers you want to add.";
			cout << endl;

			break;
		case '-':
			cout << "Please enter the two numbers you want to substract.";
			cout << endl;

			break;
		case '*':
			cout << "Please enter the two numbers you want to multiply.";
			cout << endl;

			break;
		case '/':
			cout << "Please enter the two numbers you want to divide.";
			cout << endl;

			break;
		default:
			cout << "Unknown command.";

			break;
		}

		cout << endl;
		cout << "First number: ";
		cin >> num1;
		cout << "Second number: ";
		cin >> num2;
		cout << endl;

		switch (operation)
		{
		case '+':
			Util::PrintTwoDoubles("Number", num1, num2);
			cout << "The addition of two numbers: ";
			cout << num1 + num2 << endl;

			break;
		case '-':
			Util::PrintTwoDoubles("Number", num1, num2);
			cout << "The substraction of two numbers: ";
			cout << num1 - num2 << endl;

			break;
		case '*':
			Util::PrintTwoDoubles("Number", num1, num2);
			cout << "The multiplication of two numbers: ";
			cout << num1 * num2 << endl;

			break;
		case '/':
			Util::PrintTwoDoubles("Number", num1, num2);
			cout << "The division of your two numbers: ";
			if (num2 == 0)
			{
				cout << "Input of number 2 is invalid.";
				cout << endl;
				return 0;
			}
			cout << (num1 / num2) << endl;

			break;
		default:
			cout << "Unknown command.";
			cout << endl;
			
			break;
		}

		for (int i = 0; i < 1; i++)
		{
			cout << endl;
		}

		cout << "Do you want to continue? (Y/N)";
		cout << endl;
		cin >> redo;
		
		for (int i = 0; i < 2; i++)
		{
			cout << endl;
		}
	} while (redo == 'y' || redo == 'Y');


	system("pause");
	return 0;
}