#include <iostream>
using namespace std;

/* operatori aritmetici: +, -, /, *, % -- il resto della divisione.
   esempio: C = A % B - nella variabile C ci va il resto della division A / B
   A = 5
   B = 2
   C = 1 -- RESTO */


//	Inserire 4 numeri in input, visualizzare la somma dei numeri pari e quella dei numeri dispari
/* 5, 6, 10, 11
   somma pari = 16 (6 + 10)
   somma dispari = 16 (5 + 11) */

// cout << "Somma dei numeri dispari: " << somma_dis
// cout << "Somma dei numeri pari: " << somma_par

void main() {
	system("cls");
	int num1, num2, num3, num4, sumEven = 0, sumUneven = 0;

	cout << "Inserire il primo numero: " << endl;
	cin >> num1;
	cout << "Inserire il secondo numero: " << endl;
	cin >> num2;
	cout << "Inserire il terzo numero: " << endl;
	cin >> num3;
	cout << "Inserire il quarto numero: " << endl;
	cin >> num4;
	// Это можно очень хорошо поменять при помощи цикла... если бы я понимал хорошо, как работает фор в с++...
	if (num1 % 2 == 0) 
	{
		sumEven = num1;
	}
	else 
	{
		sumUneven = num1;
	}

	if (num2 % 2 == 0)
	{
		sumEven = sumEven + num2;
	}
	else
	{
		sumUneven = sumUneven + num2;
	}

	if (num3 % 2 == 0)
	{
		sumEven = sumEven + num3;
	}
	else
	{
		sumUneven = sumUneven + num3;
	}

	if (num4 % 2 == 0)
	{
		sumEven = sumEven + num4;
	}
	else
	{
		sumUneven = sumUneven + num4;
	}

	cout << "La somma dei numeri pari è: " << sumEven << endl;
	cout << "La somma dei numeri Dispari è: " << sumUneven << endl;

	system("pause");
}