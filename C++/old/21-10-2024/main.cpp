#include <iostream> 
#include <string>
#include "header.h"
using namespace std;

void main()
{
	bool run = true;
	string choice;
	while (run)
	{
		system("cls");

		cout << "21-10-2024\nMain Menu\nDomashenko Arsenii\n3B Informatica\nby Quezka" << endl << endl << "Inserire una scelta:\n    num - Determinazione numero minimo;\n    div - Stampa dei divisori di un numero;\n    easteregg - Easter egg;\n    u - Uscita." << endl << endl << "Scegli: ";
		cin >> choice;

		if (choice == "num")
		{
			numeroMinimo();
		}
		else if (choice == "div")
		{
			divisori();
		}
		else if (choice == "u")
		{
			cout << "Uscita..." << endl;
			system("pause");

			run = false;
		}
		else if (choice == "easteregg")
		{

		}
		else 
		{ 
			cout << "Scelta non riconosciuta! (" << choice << ")." << endl;

			system("pause"); 
		}
	}

}