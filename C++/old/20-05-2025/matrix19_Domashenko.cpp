#include <iostream>
using namespace std;

/*
    Data una matrice 5x5 di interi e 2 numeri interi n e m, verificare se tutte le celle della matrice hanno valori compresi tra n e m
*/

const int rows = 5;
const int cols = 5;

int main() {
    int matrix[rows][cols], min, max, i, j;
    bool isCorrect = true;

    system("cls");
    cout << "Inserisci una matrice:\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << "Inserisci un numero: ";
            cin >> matrix[i][j];
        }
        cout << "RIGA NUOVA\n";
    }

    cout << "Matrice inserita:\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "Inserisci il filtro minimo: ";
    cin >> min;
    cout << "Inserisci il filtro massimo: ";
    cin >> max;

    cout << "Elaborazione...\n";
    for (i = 0; i < rows && isCorrect; i++) {
        for (j = 0; j < cols && isCorrect; j++) {
            if (!(min <= matrix[i][j] <= max)) {
                isCorrect = false;
            }
        }
    }

    if (isCorrect) {
        cout << "La matrice inserita corrisponde alla condizione posta!" << endl;
    }
    else {
        cout << "La matrice inserita non corrisponde alla condizione posta!" << endl;
    }

    system("pause");
 }