#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void main()
{
	int day, month, year;
	char choice;
	bool run = true;

	set<int> thirtyDayMonths = {4, 6, 9, 11};
	set<int> normalMonths = {1, 3, 5, 7, 8, 10, 12};

	while (run)
	{
		system("cls");

		cout << "CONTROLLO DATA\nDOMASHENKO ARSENII\n3B INFORMATICA\n25/09/2024\nby Quezka" << endl << endl;

		cout << "Inserisci il giorno (1-31): " << endl;
		cin >> day;
		cout << "Inserisci il mese (1-12): " << endl;
		cin >> month;
		cout << "Inserisci l'anno (> 0): " << endl;
		cin >> year;

		if (year >= 0 && month <= 12 && month >= 1 && day >= 1)
		{
			if (thirtyDayMonths.find(month) != thirtyDayMonths.end() && day <= 30)
			{
				cout << "La data inserita e' corretta! " << day << "/" << month << "/" << year << endl;
			}
			else if (normalMonths.find(month) != normalMonths.end() && day <= 31)
			{
				cout << "La data inserita e' corretta! " << day << "/" << month << "/" << year << endl;
			}
			else if (month == 2 && day <= 28)
			{
				cout << "La data inserita e' corretta! " << day << "/" << month << "/" << year << endl;
			}
			else
			{
				cout << "La data inserita non e' corretta! " << day << "/" << month << "/" << year << endl;
			}
		}
		else { cout << "La data inserita non e' corretta! " << day << "/" << month << "/" << year << endl; }
		
		cout << "Continuare? y/n" << endl;
		cin >> choice;

		if (choice == 'y' || choice == 'Y')
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
