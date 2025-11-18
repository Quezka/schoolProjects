#include <iostream>
using namespace std;

void scambia(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

int main()
{
    int a, b;

    cout << "Inserisci i numeri: ";
    cin >> a >> b;

    scambia(a, b);
    cout << "A: " << a << "; B: " << b << "\n";
    return 0;
}