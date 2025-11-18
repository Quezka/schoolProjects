#include <iostream>
using namespace std;

void calcola(int &a)
{
    a++;
}

int calcolaSenzaPunt(int a)
{
    return a + 1;
}

void calcolo(int a)
{
    a++;
}
int main()
{
    int b = 5;
    calcola(b);
    cout << "Il ris e': " << b << "\n";
    b = calcolaSenzaPunt(b);
    cout << "Il ris e': " << b << "\n";
    calcolo(b);
    cout << "Il ris e': " << b << "\n";
    system("pause");
    return 0;
}