/*
Scrivere un programma in C++ che chiama una funzione passandogli un vector intero, una matrice di interi mxm e un intero x.
La funzione restituisce vero o falso in base al controllo che effettua sulla matrice verificando cioè che la colonna della matrice
di posizione x contenga gli stessi valori del vector, naturalmente dopo aver controllato che la dimensione sia la stessa.

N.B. Utilizzare numeri random tra -10 e +20 nella creazione del vector e della matrice da passare come parametro alla funzione.
*/

#include <iostream>
#include <vector>
#include <time.h>

#define rows 5
#define cols 5

using namespace std;

bool func(vector<int> vect, int mat[rows][cols], int x)
{
    if (vect.size() == rows)
    {
        for (int i = 0; i < vect.size(); i++)
        {
            if (vect.at(i) != mat[i][x - 1])
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        cout << "LA GRANDEZZA DEL VECTOR NON COINCIDE CON LA QUANTITA' DELLE RIGHE DELLA MATRICE\n";
        return false;
    }
}

int main()
{
    srand(time(NULL));

    int x, mat[rows][cols];
    vector<int> nums;

    cout << "Inserimento del vettore\n";
    for (int i = 0; i < rows; i++)
    {
        nums.push_back(rand() % (20 - 1 + 1));
        cout << nums.at(i) << "\t";
    }

    cout << "\nInserimento della matrice\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            mat[i][j] = rand() % (20 - 1 + 1);
            cout << mat[i][j] << "\t";
        }
        cout << "\n\n";
    }

    cout << "Inserisci la colonna in cui cercare: ";
    cin >> x;

    cout << "Elaborazione...\n";

    if (func(nums, mat, x))
    {
        cout << "La colonna richiesta della matrice coincide con il vector!\n";
    }
    else
    {
        cout << "La colonna richiesta della matrice non coincide con il vector!\n";
    }

    system("pause");
    system("cls");
    return 0;
}
