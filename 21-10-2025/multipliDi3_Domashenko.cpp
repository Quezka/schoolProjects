/*
Creare un programma che fa inserire all'utente 3 numeri e usando una funzione verifica e stampa se sono multipli di 3.
*/

#include <iostream>
using namespace std;

bool multOf3(int num)
{
    if (num % 3 == 0)
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
    int nums[3];
    system("cls");

    cout << "Inserisci i 3 numeri:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Inserisci numero " << i + 1 << ": ";
        cin >> nums[i];
    }

    cout << "Elaborazione...\n";

    for (int i = 0; i < 3; i++)
    {
        if (multOf3(nums[i]))
        {
            cout << "Numero " << i + 1 << " e' un multiplo di 3.\n";
        }
        else
        {
            cout << "Numero " << i + 1 << " non e' un multiplo di 3.\n";
        }
    }

    cout << "Fine!\n";
    system("pause");
    system("cls");
    return 0;
}