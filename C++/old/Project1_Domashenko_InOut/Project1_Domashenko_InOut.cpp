#include <iostream>
using namespace std;
int firstNumber, secondNumber, summ;

void main()
{
	/* Вроде бы даже как легко
	   Если понимать, как все работает */

	cout << "Simple Calculator 1.0 (addition)";
	cout << endl;
	cout << "By Quezka";
	cout << endl;
	cout << "Enter the first number: ";
	cin >> firstNumber;
	cout << endl;
	cout << "Enter the second number: ";
	cin >> secondNumber;
	cout << endl;

	system("cls");
	summ = firstNumber + secondNumber;
	cout << "Summ of the two numbers: " << summ;
	cout << endl;
	cout << "Yayyy! My first C++ programme!";
	cout << endl;

	system("pause");

	
}

