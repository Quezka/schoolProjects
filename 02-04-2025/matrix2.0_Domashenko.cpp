#include <iostream>
#include <time.h>
using namespace std;

// Caricare un matrice (o array a 2D) di numeri interi che vanno da 1 a 90, dimensioni [3, 3] [righe, colonne] e visualizzare successivamente che e' stata creata sullo schermo, facendola vedere sullo schermo
  
int main() {
    int matrix[4][4], i, j, filtMin, filtMax;

    srand(time(NULL));

    system("cls");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matrix[i][j] = (rand() % ((90 - 1 )+ 1)) + 1;
        }
    }

    cout << "Stampa matrice...\n";

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << "Stampa al contrario...\n";

    for (i = 3; i >= 0; i--) {
        for (j = 3; j >= 0; j--) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Stampa della meta'...\n";

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Stampa numeri filtrati...\n";

    cout << "Inserisci filtro minimo: ";
    cin >> filtMin;
    cout << "Inserisci filtro massimo: ";
    cin >> filtMax;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matrix[i][j] >= filtMin and matrix[i][j] <= filtMax) {
                cout << matrix[i][j] << "\t";
            }
            else {
                cout << "--\t";
            }
        }
        cout << endl;
    }

    system("pause");
}

