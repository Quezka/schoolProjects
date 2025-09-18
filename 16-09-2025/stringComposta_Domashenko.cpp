/* Dopo aver inserito in input due stringhe, utilizzare una funzione
che restituisce al main una stringa
composta dai caratteri di posizione pari  della prima stringa
con i caratteri di posizione dispari della seconda stringa.
Il main visualizzerà la stringa risultato sullo schermo. */

#include <iostream>
#include <string>
using namespace std;

string restituisci(string word1, string word2)
{
    string dispari, pari;
    int j = 0;

    for (int i = 1; i < word1.length(); i += 2)
    {
        pari += word1.at(i);
    }

    for (int j = 0; j < word2.length(); j +=2) {
        dispari += word2.at(j);    
    }

    return pari + dispari;
}

int main()
{
    string word1, word2;

    system("cls");

    cout << "Composizione Stringa\n16-09-2025\n";

    cout << "Inserisci la prima parola >> ";
    cin >> word1;
    cout << "Inserisci la seconda parola >> ";
    cin >> word2;    

    cout << "Elaborazione...\n";
    cout << "Stringa elaborata: " << restituisci(word1, word2) << "\n";

    system("pause");
    return 0;
}