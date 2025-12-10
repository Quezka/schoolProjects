#include <iostream>
#include "code.h"
using namespace std;

void forLoop()
{
	int number, sum = 0;

	system("cls");

	cout << "SOMMA DEI 10 NUMERI INSERITI\nDOMASHENKO ARSENII\n3B INFORMATICA\n16-10-2024\nby Quezka" << endl << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "Inserisci un numero: ";
		cin >> number;
		sum = sum + number;
		system("cls");
	}

	cout << "La soma dei 10 numeri inseriti e': " << sum << endl;
	system("pause");
}

void stampaNumeriNaturaliFinoA100()
{
	system("cls");

	cout << "STAMPA DEI PRIMI 100 NUMERI NATURALI (0 compreso)\nDOMASHENKO ARSENII\n3B INF\n16-10-2024\nby Quezka" << endl;
	system("pause");

	for (int i = 0; i < 100; i++)
	{
		cout << i << endl;
	}

	system("pause");
}

void stampaNumeriNaturaliFinoAdN()
{
	int finalNumber;

	system("cls");

	cout << "STAMPA DEI NUMERI NATURALI FINO AL NUMERO INSERITO (0 compreso)\nDOMASHENKO ARSENII\n3B INF\n16-10-2024\nby Quezka" << endl << endl;
	cout << "Inserisci il numero finale: ";
	cin >> finalNumber;
	cout << endl;
	cout << "Numero finale: " << finalNumber << endl;

	system("pause");

	for (int i = 0; i < finalNumber + 1; i++)
	{
		cout << i << endl;
	}

	system("pause");
}

void mediaDi7Numeri()
{
	int number;
	float result = 0;

	system("cls");

	cout << "MEDIA DI 7 NUMERI INSERITI\nDOMASHENKO ARSENII\n3B INF\n16-10-2024\nby Quezka" << endl << endl;

	for (int i = 0; i < 7; i++)
	{
		cout << "Inserire un numero: ";
		cin >> number;
		result = result + number;

		cout << endl;
	}

	result = result / 7;

	cout << "La media calcolata e': " << result << endl;
	system("pause");
}

void multipliDelNumeroInserito()
{
	int number;

	system("cls");

	cout << "I PRIMI 11 MULTIPLI DI UN NUMERO INSERITO\nDOMASHENKO ARSENII\n3B INF\n16-10-2024\nby Quezka." << endl << endl;

	cout << "Inserisci il numero da moltiplicare: ";
	cin >> number;

	cout << "I primi 11 multipli del numero " << number << " sono:" << endl;

	for (int i = 1; i < 12; i++)
	{
		cout << "  " << number * i << endl;
	}

	cout << "Eseguito!" << endl; 
	system("pause");
}