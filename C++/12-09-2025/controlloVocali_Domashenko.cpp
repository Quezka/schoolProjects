/*
Creare un programma che fa inserire all'utente 3 caratteri,
e, usando una funzione, verifica e stampa quanti di questi caratteri sono vocali.
*/

#include <iostream>
using namespace std;

bool checkLetterVocal(char letter)
{
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char letters[3];
    int vocalCount = 0;

    system("cls");

    cout << "Inserisci 3 lettere:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Inserisci una lettera: ";
        cin >> letters[i];
        if (checkLetterVocal(letters[i]))
        {
            vocalCount++;
        }
    }

    cout << "\nElaborazione...\n";

    cout << "Numero di vocali riconosciuto: " << vocalCount << "\n";
    system("pause");
    return 0;
}