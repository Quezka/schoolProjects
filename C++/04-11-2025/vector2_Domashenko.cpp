/*
Dopo aver inserito in una matrice M X M delle parole,
prendere le parole della matrice che hanno un numero di caratteri totali pari e metterle in un vettore.
Scrivere una funzione che restituisce la prima parola presente nel vettore,
l'ultima parola presente del vettore e quella di mezzo nel caso in cui il numero di elementi nel vettore siano dispari.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string getFromVect(vector<string> vect)
{
    string res;

    if (vect.size() % 2 != 0)
    {
        res = vect.at(0) + " " + vect.at(vect.size() / 2) + " " + vect.at(vect.size() - 1);
    }
    else
    {
        res = vect.at(0) + " " + vect.at(vect.size() - 1);
    }
    return res;
}
int main()
{
    int rows, cols;
    vector<string> vect;

    system("cls");
    cout << "Inserisci la qta di righe: ";
    cin >> rows;
    cout << "Inserisci la qta di colonne: ";
    cin >> cols;

    string mat[rows][cols];

    cout << "Inserisci la matrice:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Inserisci un elemento: ";
            cin >> mat[i][j];
        }
    }

    cout << "Matrice inserita:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << "\n\n";
    }

    cout << "Elaborazione...\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j].length() % 2 == 0)
            {
                vect.push_back(mat[i][j]);
            }
        }
    }

    cout << "Il risultato e': " << getFromVect(vect) << "\n ";
    system("pause");
    system("cls");
    return 0;
}