// Creare una funzione che restituisce se un numero ha almeno 3 divisori

#include <iostream>
using namespace std;

bool has3divs(int num)
{
    int divCount = 0;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            divCount++;
    }

    if (divCount >= 3)
        return true;
    else
        return false;
}

int main()
{
    int num;

    system("cls");

    cout << "Controllo quantita' di divisori di un numero\n16-09-2025\n";
    cout << "Inserisci un numero >> ";
    cin >> num;

    cout << "Controllo...\n";

    if (has3divs(num))
        cout << "Il numero inserito (" << num << ") ha 3 o piu' divisori.\n";
    else
        cout << "Il numero inserito (" << num << ") non ha 3 o piu' divisori.\n";
    system("pause");
    return 0;
}