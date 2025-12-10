#include <iostream>
using namespace std;

void esercizioFor26_02()
{
	int arr[8], i, j, divCount = 0, numCount = 0;

	for (i = 0; i < 8; i++)
	{
		cout << "Inserisci un numero: ";
		cin >> arr[i];
	}

	cout << "Verifica...\n";

	for (i = 0; i < 8; i++)
	{
		divCount = 0;
		for (j = 1; j <= arr[i]; j++)
		{
			if (arr[i] % j == 0) { divCount++; }
		}

		if (divCount == 2) { numCount++; cout << "Numero corretto: " << arr[i] << endl; }
	}

	cout << "I numeri primi sono: " << numCount << endl;
}

int main()
{
	int choice;

	do
	{
		system("cls");

		cout << "26-02-2025\nInserisci una scelta:\n    1 - Esercizio For 26-02-2025\n    2 - Uscita.\n";

		do
		{
			cout << "Scegli >> ";
			cin >> choice;

			if (!(choice >= 1 && choice <= 2)) { cout << "Scelta non valida.\n"; }
		} while (!(choice >= 1 && choice <= 2));

		switch (choice)
		{
		case 1:
			esercizioFor26_02();
			break;
		case 2:
			cout << "Uscita...\n";
			break;	
		}

		system("pause");
	} while (choice != 2);

	return 0;
}

