#include <iostream>
#include <string>
#include "code.h"
using namespace std;

void main()
{
	string choice;
	bool run = true;
	char runChoice;

	while (run)
	{
		system("cls");

		cout << "16-10-2024\nby Quezka\nMain Menu" << endl << endl;
		cout << "Seleziona:\n  forLoop - f;\n  stampaDeiPrimi100NumeriNaturali - s1;\n  stampaDeiNumeriNaturaliFinoAdN - s2;\n  mediaDi7Numeri - med;\n  multpliDelNumeroInserito - mul;\n  uscita - u." << endl << endl;
		cout << "Seleziona: ";
		cin >> choice;

		if (choice == "f")
		{
			forLoop();
		}

		else if (choice == "s1")
		{
			stampaNumeriNaturaliFinoAdN();
		}

		else if (choice == "s2")
		{
			stampaNumeriNaturaliFinoA100();
		}

		else if (choice == "med")
		{
			mediaDi7Numeri();
		}

		else if (choice == "mul")
		{
			multipliDelNumeroInserito();
		}
		
		else if (choice == "u")
		{
			cout << "Uscita..." << endl;
			system("pause");
			run = false;
			break;
		}

		else
		{
			cout << "Selezione non valida! (" << choice << ")." << endl; 
		}

		cout << "Continuare? Y/N: ";
		cin >> runChoice;

		if (runChoice == 'y' || runChoice == 'Y')
		{
			cout << "Continuo...";
		}
		else
		{
			cout << "Uscita..." << endl;
			system("pause");
			run = false;
			break;
		}
	}

}