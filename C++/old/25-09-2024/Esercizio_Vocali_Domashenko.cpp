#include <iostream>
#include <set>
#include <algorithm>
#include <string>
using namespace std;
void main()
{
	bool run = true;
	string choice;
	char input;
	set<char> vocali = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

	while (run)
	{
		system("cls");

		cout << "DETERMINAZIONE DEL TIPO DI CARATTERE\nDOMASHENKO ARSENII\n3B INFORMATICA\nby Quezka\n25/09/2024" << endl << endl;

		cout << "Inserisci un carattere: " << endl;
		cin >> input;

		if (vocali.find(input) != vocali.end())
		{
			cout << "Il carattere inserito (" << input << ") e' una vocale." << endl;
		}
		else
		{
			cout << "Il carattere inserito (" << input << ") non e' una vocale." << endl;
		}

		cout << "Continuare? y/n" << endl;
		cin >> choice;

		if (choice == "Y" || choice == "y")
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