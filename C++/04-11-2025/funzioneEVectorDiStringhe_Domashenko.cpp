/*
Scrivere un programma che chiama una funzione passando come parametro una vector di n stringhe caricato nel main.
La funzione costruisce una stringa composta dai primi 2 caratteri di ciascuna stringa del vector a condizione che la stringa abbia lunghezza tra 2 e 4 caratteri,
se la stringa super i 4 caratteri non viene interessata dalla costruzione della stringa da restituire.
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string elaborate(vector<string> vect)
{
    string res = "";
    for (int i = 0; i < vect.size(); i++)
    {
        if (vect.at(i).length() >= 2 && vect.at(i).length() <= 4)
        {
            res += vect.at(i).substr(0, 2);
        }
    }

    return res;
}

int main()
{
    vector<string> vect;
    string word;
    int num;

    cout << "Inserisci numero di stringhe: ";
    cin >> num;

    cout << "Inserisci un vettore di " << num << " stringhe:\n";
    for (int i = 0; i < num; i++)
    {
        cout << "Inserisci una parola: ";
        cin >> word;
        vect.push_back(word);
    }

    cout << "Vettore inserito:\n";
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect.at(i) << "\t";
    }

    cout << "Elaborazione...\n";
    cout << elaborate(vect);

    cout << "Fine!\n";
    system("pause");
    system("cls");
    return 0;
}