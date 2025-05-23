#include <iostream>
using namespace std;

/*
    Letta una matrice 9x9 e letto un ulteriore numero n,
    verificare se n e' in almeno un numero di celle che sia la meta' di n;
*/

const int rows = 9;
const int cols = 9;

int main() {
    int mat[rows][cols], n, i, j, count = 0;

    system("cls");

    cout << "Inserisci una matrice:\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << "Inserisci un numero: ";
            cin >> mat[i][j];
        }
        cout << "RIGA NUOVA\n";
    }

    cout << "Inserisci un numero di controllo: ";
    cin >> n;

    cout << "Matrice inserita:\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Elaborazione...\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (mat[i][j] == n) {
                count++;
            }
        }
    }

    if (count >= n / 2) {
        cout << "Count: " << count << "; n / 2: " << n / 2 << "; La matrice inserita corrisponde alla condizione!\n";
    }
    else {
        cout << "Count: " << count << "; n / 2: " << n / 2 << "; La matrice inserita non corrisponde alla condizione!\n";
    }

    system("pause");
    return 0;
}