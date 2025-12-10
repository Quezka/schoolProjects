/*
1- Scrivere una funzione con due parametri di tipo stringa che
restituisce una stringa risultato dall’unione dei due parametri con
asterischi al posto delle vocali.
*/
#include <iostream>
#include <string>
using namespace std;

string elaborate(string word1, string word2)
{
    string result = word1 + word2;

    // si poteva anche convertire la stringa in lowercase pero ci voleva un altro for...

    for (int i = 0; i < result.length(); i++)
    {
        char charact = result[i];
        if (charact == 'a' || charact == 'e' || charact == 'i' || charact == 'o' || charact == 'u' || charact == 'A' || charact == 'E' || charact == 'I' || charact == 'O' || charact == 'U')
        {
            result[i] = '*';
        }
    }

    return result;
}

int main()
{
    system("cls");

    string word1, word2;

    cout << "Inserisci parola 1: ";
    cin >> word1;
    cout << "Inserisci parola 2: ";
    cin >> word2;

    cout << "\nElaborazione...";

    string result = elaborate(word1, word2);

    cout << "\nRisultato finale: " << result << "\n";
    system("pause");
    system("cls");
    return 0;
}
