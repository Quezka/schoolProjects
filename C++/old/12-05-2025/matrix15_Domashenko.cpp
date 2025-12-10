#include <iostream>
using namespace std;

int main() {
    int m1[5][5],m2[5][5], i, j, i2, j2, tempSum = 0;

    system("cls");
    cout << "Inserisci una matrice:\n";
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cout << "Inserisci un numero: ";
            cin >> m1[i][j];
        }
        cout << "NUOVA RIGA\n";
    }

    cout << "Matrice inserita:\n";
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cout << m1[i][j] << "\t";
        }
        cout << "\n\n";
    }

    cout << "Elaborazione...\n";
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            tempSum = 0;
            for (i2 = 0; i2 < 5; i2++) {
                for (j2 = 0; j2 < 5; j2++) {
                    if (!(i2 == i || j2 == j)) {
                        tempSum += m1[i2][j2];
                    }
                }
            }

            m2[i][j] = tempSum;
        }
    }

    cout << "Matrice inserita:\n";
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cout << m1[i][j] << "\t";
        }
        cout << "\n\n";
    }

    cout << "Matrice calcolata:\n";
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cout << m2[i][j] << "\t";
        }
        cout << "\n\n";
    }

    system("pause");
}