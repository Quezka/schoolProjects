#include <iostream>
using namespace std;

int minimo(int num1, int num2, int num3, int num4)
{
    int args[4] = {num1, num2, num3, num4};

    int minimo = args[0];
    for (int i = 1; i < 4; i++)
    {
        if (args[i] < minimo)
        {
            minimo = args[i];
        }
    }
    return minimo;
}

int massimo(int num1, int num2, int num3, int num4) 
{
    int args[4] = {num1, num2, num3, num4};

    int massimo = args[0];
    for (int i = 0; i < 4; i++) 
    {
        if (args[i] > massimo) 
        {
            massimo = args[i];
        }
    }
    return massimo;
}
int main()
{
    int min, max, num1, num2, num3, num4;

    system("cls");

    cout << "Inserisci 4 numeri: \n";
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;

    cout << "Elaborazione...\n";
    min = minimo(num1, num2, num3, num4);
    max = massimo(num1, num2, num3, num4);
    cout << "Numero minimo: " << min << "\n";
    cout << "Numero massimo: " << max << "\n";
    system("pause");
}