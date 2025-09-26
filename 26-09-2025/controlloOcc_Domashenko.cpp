#include <iostream>
#include <string>
using namespace std;

/*
Scrivere un programma che utilizza una funzione per calcolare e restituire il numero delle occorrenze (quante volte compare)
di un carattere x inserito in input e passato come parametro per valore in una matrice A con MxN elementi di tipo stringa inseriti in input
nel main e passata come parametro alla funzione.
*/

#define rows 4
#define cols 3

string matrix[rows][cols];

int countOccs(string matrix[rows][cols], char control)
{
}

int main()
{
    char x;
    system("cls");

    cout << "Inserimento matrice...\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Inserisci una parola: ";
            cin >> matrix[i][j];
        }
    }

    cout << "Matrice inserita:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n\n";
    }

    cout << "Inserisci il carattere controllo: ";
    cin >> x;

    cout << "Elaborazione...\n";
    countOccs(matrix, x);
    system("pause");
    return 0;
}