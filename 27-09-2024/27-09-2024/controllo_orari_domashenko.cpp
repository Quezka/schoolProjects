#include <iostream>
#include <string>
using namespace std;

void main() {
	int hrs1, min1, sec1, hrs2, min2, sec2;
	string choice;
	bool run = true;

	while (run) {
		system("cls");
		cout << "VERIFICA DEGLI ORARI\nDOMASHENKO ARSENII\n3B INFORMATICA\n27-09-2024\nby Quezka" << endl << endl;

		cout << "Inserisci il primo orario (hh-mm-ss): " << endl << "Ore: ";
		cin >> hrs1;
		cout << "Minuti: ";
		cin >> min1;
		cout << "Secondi: ";
		cin >> sec1;
		cout << endl << "Inserisci il secondo orario (hh-mm-ss): " << endl << "Ore: ";
		cin >> hrs2;
		cout << "Minuti: ";
		cin >> min2;
		cout << "Secondi: ";
		cin >> sec2;

		if (hrs1 == hrs2) {
			if (min1 == min2) {
				if (sec1 == sec2) {
					cout << "I due orari inseriti sono identici (" << hrs1 << "-" << min1 << "-" << sec1 << ", " << hrs2 << "-" << min2 << "-" << sec2 << ")." << endl;
				}
				else {
					if (sec1 < sec2) {
						cout << "Il primo orario viene prima (" << hrs1 << "-" << min1 << "-" << sec1 << ", " << hrs2 << "-" << min2 << "-" << sec2 << ")." << endl;
					}
					else {
						cout << "Il secondo orario viene prima (" << hrs1 << "-" << min1 << "-" << sec1 << ", " << hrs2 << "-" << min2 << "-" << sec2 << ")." << endl;
					}
				}
			}
			else {
				if (min1 < min2) {
					cout << "Il primo orario viene prima (" << hrs1 << "-" << min1 << "-" << sec1 << ", " << hrs2 << "-" << min2 << "-" << sec2 << ")." << endl;
				}
				else {
					cout << "Il secondo orario viene prima (" << hrs1 << "-" << min1 << "-" << sec1 << ", " << hrs2 << "-" << min2 << "-" << sec2 << ")." << endl;
				}
			}
		}
		else {
			if (hrs1 < hrs2) {
				cout << "Il primo orario viene prima (" << hrs1 << "-" << min1 << "-" << sec1 << ", " << hrs2 << "-" << min2 << "-" << sec2 << ")." << endl;
			}
			else {
				cout << "Il secondo orario viene prima (" << hrs1 << "-" << min1 << "-" << sec1 << ", " << hrs2 << "-" << min2 << "-" << sec2 << ")." << endl;
			}
		}

		cout << "Continuare? y/n" << endl;
		cin >> choice;
		
		if (choice == "y" || choice == "Y") {
			cout << "Continuo...";
		}
		else {
			cout << "Uscita..." << endl;
			system("pause");
			run = false;
		}
	}

}