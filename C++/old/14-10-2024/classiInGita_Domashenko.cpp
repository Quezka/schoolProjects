#include <iostream>
using namespace std;

void main()
{
	int classNumber;
	char classLetter, choice;
	bool run = true;
	while (run)
	{
		system("cls");
		cout << "CLASSI IN GITA\nDOMASHENKO ARSENII\n3B INFORMATICA\n14-10-2024\nby Quezka" << endl;

		cout << endl << "Inserisci la classe (1-5): ";
		cin >> classNumber;
		cout << endl << "	Inserisci la sezione (una lettera): ";
		cin >> classLetter;
		cout << endl << "Elaborazione..." << endl;

		if (classNumber > 5 || classNumber < 1) { cout << "La classe inserita non e' valida! (" << classNumber << ")." << endl; }
		else
		{
			if (classNumber == 1) { cout << "La classe " << classNumber << classLetter << " visitera' il Museo Egizio di Torino." << endl; }
			else
			{
				if (classNumber == 2)
				{
					if (classLetter == 'A' || classLetter == 'a') { cout << "La classe " << classNumber << classLetter << " visitera' il Duomo di Milano. " << endl; }
					else
					{
						cout << "La classe " << classNumber << classLetter << " visitera' il Castello Sforzesco di Milano." << endl;
					}
				}
				else
				{
					if (classNumber == 3) { cout << "La classe " << classNumber << classLetter << " visitera' le Gallerie degli Uffizi di Firenze." << endl; }
					else
					{
						if (classNumber == 4)
						{
							if (classLetter == 'B' || classLetter == 'b') { cout << "La classe " << classNumber << classLetter << " visitera' il Colosseo di Roma." << endl; }
							else
							{
								if (classLetter == 'C' || classLetter == 'c') { cout << "La classe " << classNumber << classLetter << " visitera' il Pantheon di Roma." << endl; }
								else { cout << "La classe " << classNumber << classLetter << " visitera' i Musei Vaticani." << endl; }
							}
						}
						else
						{
							cout << "La classe " << classNumber << classLetter << " visitera' il CERN di Ginevra." << endl;
						}
					}
				}
			}
		}

		cout << "Continuare? (y/n): ";
		cin >> choice;
		if (choice == 'y' || choice == 'Y') { cout << endl << "Continuo...";  }
		else
		{
			cout << endl << "Uscita..." << endl;
			system("pause");
			run = false;
		}
	}
}