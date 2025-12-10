/* Verificare se tutte le celle dei “bordi” di una matrice 6×6 contengono lo stesso valore
(per bordi di una matrice si intendono la prima e l’ultima riga e la prima e l’ultima colonna). */

#include <iostream>
using namespace std;

int main() {
    int m[6][6], i, j, borderValue;
    bool isValid = true;

    system("cls");

    cout << "Inserisci una matrice:\n";
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            cout << "\tInserisci un numero [" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
        cout << "NUOVA RIGA\n";
    }

    cout << "Matrice inserita:\n";
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            cout << m[i][j] << "\t";
        }
        cout << "\n\n";
    }

    cout << "Verifica...\n";
    borderValue = m[0][0];
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if ((i == 0 || i == 5 || j == 0 || j == 5) && m[i][j] != borderValue) {
                isValid = false;
                break;
            }
        }
    }

    if (isValid) {
        cout << "La matrice inserita corrisponde alla condizione!\n";
    } else {
        cout << "La matrice inserita non corrisponde alla condizione!\n";
    }
    system("pause");
    return 0;
}