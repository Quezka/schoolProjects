#include <iostream>
#include <time.h>
using namespace std;

int main() {
    srand(time(NULL));

    int a[20], b[20], i, j, k, min, minIndex;

    system("cls");

    cout << "Inserimento vettore...\n";
    cout << "Indice:\t";
    for (i = 0; i < 20; i++) {
        cout << i << "\t";
    }
    cout << "\nNumeri:\t";
    for (i = 0; i < 20; i++) {
        a[i] = (rand() % 90) + 1;
        cout << a[i] << "\t";
    }

    cout << "\nElaborazione vettore...\n";
    for (k = 0; k < 20; k++) {
        min = 101, minIndex = -1;

        for (i = 0; i < 20; i++) {
            if (a[i] < min) {
                min = a[i];
                minIndex = i;
            }
        }
        b[k] = min;
        a[minIndex] = 101;
    }

    cout << "Vettore elaborato:\n";
    for (i = 0; i < 20; i++) {
        cout << b[i] << "\t";
    }

    system("pause");
    cout << endl;
    return 0;
}