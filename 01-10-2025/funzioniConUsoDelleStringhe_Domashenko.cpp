/*
Scrivere un programma che utilizza due funzioni nel seguente modo:
1- Funzione concatena che riceve due stringhe con passaggio per valore e restituisce una stringa concatenata.
2- Funzione cambia che riceve la stringa concatenata della funzione concatena e restituisce la stess stringa ma con la lettera "P" al posto di ogni lettera "a" che incontra.
Il main visualizzerà entrambe le stringhe.
*/

#include <iostream>
#include <string>

using namespace std;

string concat(string string1, string string2)
{
    string result = string1 + string2;
    return result;
}

string changeLetters(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == 'a')
        {
            word[i] = 'P';
        }
    }

    return word;
}

int main()
{
    system("cls");

    string word1, word2;

    cout << "Inserisci la prima parola: ";
    cin >> word1;
    cout << "Inserisci la seconda parola: ";
    cin >> word2;

    cout << "\nElaborazione...\n";

    string concatenated = concat(word1, word2);

    string finalResult = changeLetters(concatenated);

    cout << "Concatenato: " << concatenated << "\nRisultato finale: " << finalResult << "\n";
    system("pause");
    system("cls");
    return 0;
}
