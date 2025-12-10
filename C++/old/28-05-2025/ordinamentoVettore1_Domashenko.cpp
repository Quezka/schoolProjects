#include <iostream>
#include <time.h>
using namespace std;

int main() {
    srand(time(NULL));

    int a[20], b[20], i, j, k, min, max;

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
    for (i = 0; i < 20; i++) {
        min = a[i];
        for (j = 0; j < 20; j++) {
            if (!(min < a[j]) && a[j] > max && a[j] != max) {
                min = a[j];
            }
        }
        b[i] = min;
        max = b[i];
        cout << "Iterazione: " << i << "; Min: " << min << "; Max: " << max << endl;
    }

    cout << "Vettore elaborato:\n";
    for (i = 0; i < 20; i++) {
        cout << b[i] << "\t";
    }

    system("pause");
    cout << endl;
    return 0;
}