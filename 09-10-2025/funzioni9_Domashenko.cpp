/*
Creare una funzione che riceve un array di interi,
un numero intero n e memorizza nelle prime n celle dell’array dei numeri casuali tra 0 e 10, poi provarla.
*/

#include <iostream>
#include <time.h>
#define size 10

using namespace std;

void insertRandom(int arr[size], int numQty)
{
    for (int i = 0; i <= numQty; i++)
    {
        arr[i] = rand() % 10;
        cout << arr[i] << "\t";
    }
    for (int i = numQty + 1; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n";
}

int main()
{
    int arr[size], numQty;

    srand(time(NULL));
    system("cls");

    cout << "Inserisci la qta di numeri: ";
    cin >> numQty;

    cout << "Inserimento iniziale...\n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 0;
        cout << arr[i] << "\t";
    }
    cout << "\n";
    cout << "Cambiamento...\n";
    insertRandom(arr, numQty);

    system("pause");
    return 0;
    system("cls");
}