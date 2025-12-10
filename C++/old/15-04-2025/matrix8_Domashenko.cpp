#include <iostream>
using namespace std;

// Data una matrice 5×5 di interi e due numeri interi n
// e m verificare se tutte le celle della matrice hanno valori compresi tra n e m.

int main() {
    int matrix[5][5], min, max, i = 0, j = 0;
    bool isCorrect = true;

    system("cls");
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cout << "Inserisci un numero: ";
            cin >> matrix[i][j];
        }
    }

    cout << "Matrice inserita: \n";

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "Inserisci il filtro minimo: ";
    cin >> min;
    cout << "Inserisci il fitlro massimo: ";
    cin >> max;
    
    cout << "Verifica...\n";

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (!(matrix[i][j] >= min and matrix[i][j] <= max)) {
                isCorrect = false;
            }
        }
    }

    if (isCorrect) {
        cout << "Tutti i numeri inseriti nella matrice presente sono compresi tra il minimo e il massimo!\n";
    }
    else {
        cout << "Non tutti i numeri inseriti nella matrice presente sono compresi tra il minimo e il massimo!\n";
    }

    system("pause");
}