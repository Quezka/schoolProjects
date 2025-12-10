#include <iostream>
using namespace std;

const int rows = 6;
const int cols = 6;

int main() {
    int m[rows][cols], i, j, k, maxNum = 0, sum = 0;

    system("cls");
    cout << "Inserisci una matrice:\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << "Inserisci un numero: ";
            cin >> m[i][j];
        }
        cout << "RIGA NUOVA\n";
    }

    cout << "Matrice inserita:\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << m[i][j] << "\t";
        }
        cout << "\n\n";
    }

    cout << "Elaborazione matrice...\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            for (k = 0; k < cols; k++) {
                if (j == 0) {
                    maxNum = m[i][j];
                }
                else {
                    if (m[i][j] > k) {
                        maxNum = m[i][j];
                    }
                    else {
                        maxNum = m[i][k];
                    }
                }
            }
        }
        sum += maxNum;
    }

    cout << "La somma dei numeri massimi in ogni riga: " << sum;
}