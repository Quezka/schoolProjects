/*
Realizzare un programma in C++ che usa una funzione di tipo booleano che riceve come parametri un vector di caratteri  e una lettera.
La funzione restituisce il numero di volte che il carattere è presente nel vector  escluse quelle presenti nelle posizioni pari del vector.
*/
#include <iostream>
#include <vector>
using namespace std;

int elaborate(vector<char> vect, char target)
{
    int count = 0;

    for (int i = 0; i < vect.size(); i++)
    {
        if (i % 2 == 0)
        {
            if (vect.at(i) == target)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    vector<char> letters;
    char single, target;

    cout << "Inserisci un vettore di caratteri:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "Inserisci un carattere: ";
        cin >> single;
        letters.push_back(single);
    }

    cout << "Il vettore inserito e':\n";
    for (char letter : letters)
    {
        cout << letter << "\t";
    }

    cout << "\nInserisci la lettera bersaglio: ";
    cin >> target;

    cout << "Elaborazione...\n";
    cout << "La lettera bersaglio e' presente nel vettore nelle posizioni pari " << elaborate(letters, target) << " volte!\n";
    cout << "Fine!\n";

    system("pause");
    system("cls");
    return 0;
}