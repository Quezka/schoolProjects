#include <iostream>
using namespace std;

// Caricare un matrice (o array a 2D) di numeri interi che vanno da 1 a 90, dimensioni [3, 3] [righe, colonne] e visualizzare successivamente che e' stata creata sullo schermo, facendola vedere sullo schermo
  
int main() {
    int matrix[3][3], i, j;

    system("cls");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << "Inserisci un numero da 1 a 90: ";
            cin >> matrix[i][j];

            while (!(matrix[i][j] >= 1 and matrix[i][j] <= 90)) {
                cout << "Numero non va bene! Inserisci un numero: ";
                cin >> matrix[i][j];
            }
        }
    }

    cout << "Stampa..." << endl;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    system("pause");
}