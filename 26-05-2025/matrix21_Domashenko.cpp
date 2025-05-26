#include <iostream>
using namespace std;

/*
    Data una matrice 9x9 verificare il prodotto delle celle delle diagonali e' < 100
*/

const int rows = 9;
const int cols = 9;

int main() {
    int m[rows][cols], i, j, res = 1;
    
    system("cls");
    cout << "Inserisci una matrice:\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << "Inserisci un numero: ";
            cin >> m[i][j];
        }
        cout << "NUOVA RIGA\n";
    }

    cout << "Elaborazione...\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i == j || i == j + cols) {
                cout << "Aggiunto: " << m[i][j] << endl;
                res *= m[i][j];
            }
        }
    }

    cout << "Prodotto delle due diagonali:\n" << res;

    if (res < 100) {
        cout << "La matrice inserita corrisponde alla condizione!\n";
    }
    else {
        cout << "La matrice inserita non corrisponde alla condizione!\n";
    }

    system("pause");
    return 0;
}