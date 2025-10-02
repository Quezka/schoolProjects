/*
Scrivere un programma che carica una matrice numerica in modo random
e la passa ad una funzione che calcola la differenza tra la diagonale principale e quella secondaria.
*/

#include <iostream>
#include <time.h>
using namespace std;

#define rows 4
#define cols 4

int matrix[rows][cols];

int diff(int matrix[rows][cols])
{
    int princ = 0, sec = 0;

    for (int i = 0; i < rows; i++)
    {
        princ += matrix[i][i];
        sec += matrix[i][cols - 1 - i];
    }

    return princ - sec;
}

int main()
{
    srand(time(NULL));

    system("cls");

    cout << "Inserimento matrice...\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = rand() % 10;
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

    cout << "Elaborazione...\n";
    cout << "Risultato: " << diff(matrix) << "\n";

    system("pause");
    system("cls");
    return 0;
}