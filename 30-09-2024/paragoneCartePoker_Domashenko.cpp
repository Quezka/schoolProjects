#include <iostream>
#include <string>
#include <map>
using namespace std;

void main()
{
	char suit1, suit2;
	int val1, val2;
	string choice;
	map<char, int> suits;
	suits['p'] = 1;
	suits['f'] = 2;
	suits['q'] = 3;
	suits['c'] = 4;

	bool run = true;

	while (run)
	{
		system("cls");
		cout << "PARAGONE TRA 2 CARTE DA POKER\nDOMASHENKO ARSENII\n3B INFORMATICA\n30-09-2024\nby Quezka" << endl << endl;

		cout << "Semi:\n	PICCHI - p;\n	FIORI - f;\n	QUADRI - q;\n	CUORI - c." << endl << endl;

		cout << "Inserire la prima carta: \n	Valore: ";
		cin >> val1;
		cout << "	Seme: ";
		cin >> suit1;
		cout << "Inserire la seconda carta: \n	Valore: ";
		cin >> val2;
		cout << "	Seme: ";
		cin >> suit2;

		if (val1 == val2)
		{
			if (suits[suit1] == suits[suit2])
			{
				cout << "Le due carte inserite sono uguali (" << val1 << ", " << suit1 << " = " << val2 << ", " << suit2 << ")." << endl;
			}
			else
			{
				if (suits[suit1] > suits[suit2])
				{
					cout << "La prima carta inserita e' la piu' grande (" << val1 << ", " << suit1 << " > " << val2 << ", " << suit2 << ")." << endl;
				}
				else
				{
					cout << "La seconda carta inserita e' la piu' grande (" << val1 << ", " << suit1 << " < " << val2 << ", " << suit2 << ")." << endl;
				}
			}
		}
		else
		{
			if (val1 > val2)
			{
				cout << "La prima carta inserita e' la piu' grande (" << val1 << ", " << suit1 << " > " << val2 << ", " << suit2 << ")." << endl;
			}
			else
			{
				cout << "La seconda carta inserita e' la piu' grande (" << val1 << ", " << suit1 << " < " << val2 << ", " << suit2 << ")." << endl;
			}
		}

		cout << "Continuare? y/n" << endl;
		cin >> choice;

		if (choice == "y" || choice == "Y")
		{
			cout << "Continuo..." << endl;
		}
		else
		{
			cout << "Uscita..." << endl;
			system("pause");
			run = false;
		}
	}

}