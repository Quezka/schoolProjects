/* Dopo aver inserito in input due stringhe, utilizzare una funzione
che restituisce al main una stringa
composta dai caratteri di posizione pari  della prima stringa
con i caratteri di posizione dispari della seconda stringa.
Il main visualizzerà la stringa risultato sullo schermo. */

#include <iostream>
#include <string>
using namespace std;

string restituisci(string word)
{
    string result;
    for (int i = 0; i < word.length(); i++)
    {
        if (i % 2 == 0)
        {
            result += word.at(i);
        }
        else
        {
            result += word.at(i);
        }
    }

    return result;
}

int main()
{
    string word;

    system("cls");

    cout << "Composizione Stringa\n16-09-2025\n";
    cout << "Inserisci una parola >> ";
    cin >> word;

    cout << "Elaborazione...\n";
    cout << "Stringa elaborata: " << restituisci(word) << "\n";

    system("pause");
    return 0;
}