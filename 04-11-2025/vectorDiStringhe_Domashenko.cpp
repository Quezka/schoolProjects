/*
Inserire in un vector di stringhe n parole da tastiera.
Visualizzare tutte le parole inserite.
Visualizzare la media dei caratteri che compongono tutte le parole del vector.
Visualizzare gli elementi del vector partendo dall'ultimo elemento fino al primo
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int num;
    float avrg = 0;
    string word;
    vector<string> vect;

    system("cls");

    cout << "Inserisci il numero di parole: ";
    cin >> num;

    cout << "Inserisci " << num << " parole:\n";
    for (int i = 0; i < num; i++)
    {
        cout << "Inserisci una parola: ";
        cin >> word;
        vect.push_back(word);
    }

    cout << "Parole presenti nel vector:\n";
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect.at(i) << "\t";
    }

    cout << "\nElaborazione della media...\n";
    for (int i = 0; i < vect.size(); i++)
    {
        avrg += vect.at(i).length();
    }

    avrg /= vect.size();

    cout << "Media calcolata: " << avrg << "\n";

    cout << "Elementi dall'ultimo al primo:\n";
    for (int i = vect.size() - 1; i >= 0; i--)
    {
        cout << vect.at(i) << "\t";
    }

    cout << "\nFine.\n";
    system("pause");
    system("cls");
    return 0;
}