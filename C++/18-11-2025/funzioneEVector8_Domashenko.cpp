/*Scrivere un programma che utilizza una funzione stringa che riceve come parametri:
    1- Un vector di numeri interi caricati in modo random dal main con valori da 1 e 6
    2- Un vettore di stringhe caricato sempre nel main con n stringhe di lunghezza almeno di 10 caratteri e n inserito in input
La funzione restituisce una stringa composta nel seguente modo:
Per ogni stringa del vettore prende il carattere indicato dal corrispondente valore del vector e li concatena insieme per restituire la stringa finale al main.
*/
#include <iostream>
#include <vector>
#include <string>
#include <time.h>
using namespace std;

int qty;

string func(vector<int> nums, vector<string> words)
{
    string word;
    string res = "";
    int pos;

    for (int i = 0; i < qty; i++)
    {
        word = words.at(i);
        pos = nums.at(i);

        if (pos < word.length())
        {

            res += word.at(pos - 1);
        }
    }

    return res;
}

int main()
{
    srand(time(NULL));
    string word;
    vector<int> nums;
    vector<string> words;

    cout << "Inserisci la quantita' di elementi nei vettori: ";
    cin >> qty;

    cout << "Generazione vettore numeri...\n";
    for (int i = 0; i < qty; i++)
    {
        nums.push_back(rand() % 7 + 1);
        cout << nums.at(i) << "\t";
    }

    cout << "\nInserisci un vettore di parole lunghe almeno 10 caratteri:\n";
    for (int i = 0; i < qty; i++)
    {
        cout << "Inserisci una parola (lunghezza > 10 caratteri): ";
        cin >> word;
        words.push_back(word);
    }

    cout << "Elaborazione...\n";
    cout << "Il risultato finale e': " << func(nums, words) << ".\n";

    cout << "Fine.\n";
    system("pause");
    system("cls");
    return 0;
}