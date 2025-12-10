#include <iostream>
#include <string>
using namespace std;

bool run = true;

void main()
{

	while (run) 
	{
		// Tipi di triangolo possibili: Scaleno - tutti i lati diversi, Isoscele - 2 lati uguali, Equilatero - tutti i lati ugual;

		int side1, side2, side3;
		string choice;

		system("cls");

		cout << "DETERMINAZIONE DEL TIPO DI TRIANGOLO\nDOMASHENKO ARSENII 3B INFORMATICA\nby Quezka" << endl;

		cout << "Inserisci il primo lato: " << endl;
		cin >> side1;
		cout << "Inserisci il secondo lato: " << endl;
		cin >> side2;
		cout << "Inserisci il terzo lato: " << endl;
		cin >> side3;

		if (side1 == side2 && side2 == side3)
		{
			cout << "Il triangolo inserito e' di tipo: Equilatero" << endl;
		}
		else
		{
			if (side1 == side2 || side1 == side3 || side2 == side3)
			{
				cout << "Il triangolo inserito e' di tipo: Isoscele" << endl;
			}
			else
			{
				cout << "Il triangolo inserito e' di tipo: Scaleno" << endl;
			}
		}

		cout << "Continua? y/n" << endl;
		cin >> choice;
		if (choice == "Y" || choice == "y")
		{
			cout << "Continuo...";
		}
		else
		{
			cout << "Uscita..." << endl;

			system("pause");
			run = false;
		}
	}
}