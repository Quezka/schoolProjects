#include <iostream>
using namespace std;

void scambiaMinMax(int arr[], int size)
{

    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < size; ++i)
    {
        if (arr[i] < arr[minIndex])
            minIndex = i;
        if (arr[i] > arr[maxIndex])
            maxIndex = i;
    }

    // Scambia i valori
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
}

int main()
{
    const int size = 5;
    int arr[size];
    system("cls");

    cout << "Inserisci l'array:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Inserisci numero " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Array originale:\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << "\nElaborazione...\n";
    scambiaMinMax(arr, size);

    cout << "\nArray dopo lo scambio:\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << "\n";

    return 0;
}
