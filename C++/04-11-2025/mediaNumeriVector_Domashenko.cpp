#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

/*
Creare un vector di numeri interi con la funzione random.
Visualizzare la media aritmetica dei numeri presenti nel vector di posizione pari considerando lo zero un numero pari.
*/

int main()
{
    vector<int> vect;
    float avrg = 0;
    int count = 0;

    srand(time(NULL));

    system("cls");
    cout << "\nInserimento vettore...\n";

    for (int i = 0; i < 10; i++)
    {
        vect.push_back(rand() % 20);
        cout << vect.at(i) << "\t";
    }

    cout << "\nElaborazione...\n";

    for (int i = 0; i < vect.size(); i++)
    {
        if (vect.at(i) % 2 == 0)
        {
            avrg += vect.at(i);
            count++;
        }
    }

    avrg /= count;

    cout << "La media delle posizioni pari e': " << avrg << "\n";
    system("pause");
    system("cls");
    return 0;
}