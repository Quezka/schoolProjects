/*
Scrivere un programma in C++ con il
Main che dopo aver generato
una matrice A di dimensione MxM
con numeri
interi casuali da -10
a 200
(compresi)

chiama
una funzione, passandole
la matrice come parametro, che
restituisce la somma di tutti gli elementi della matrice posizionati
sopra la diagonale principale (triangolare superiore)
*/

#include <iostream>
#include <time.h>
#define rows 3
#define cols 3
using namespace std;

int triangolareSuperiore(int matrix[rows][cols])
{
    int diff = 0, sum = 0, j, i;
    for (i = 0; i < rows; i++)
    {
        for (j = 0 + diff; j < cols; j++)
        {
            cout << matrix[i][j] << "\n";
            sum += matrix[i][j];
        }
        diff++;
    }

    return sum;
}

int main()
{
    srand(time(NULL));
    system("cls");
    int a[rows][cols];

    cout << "Inserisci la matrice:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Inserisci elemento: ";
            cin >> a[i][j];
        }
    }

    cout << "Matrice inserita:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n\n";
    }

    cout << "Elaborazione...\n";

    cout << "Somma triangolare superiore: " << triangolareSuperiore(a) << "!\nFine!\n";
    system("pause");
    system("cls");
    return 0;
}