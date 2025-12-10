#include <iostream>
using namespace std;

/*
 Data una matrice 5×5 verificare
 se la somma delle celle sopra la diagonale principale 
 è maggiore della somma delle celle sotto la diagonale principale.
*/

const int lines = 5;
const int cols = 5;

int main() {
    int m[lines][cols], i, j, sumSopra = 0, sumSotto = 0;

    system("cls");

    cout << "Inserisci una matrice:\n";
    for (i = 0; i < lines; i++) {
        for (j = 0; j < cols; j++) {
            cout << "Inserisci un numero: ";
            cin >> m[i][j];
        }
        cout << "NUOVA RIGA\n";
    }

    cout << "Matrice inserita:\n";
    for (i = 0; i < lines; i++) {
        for (j = 0; j < cols; j++) {
            cout << m[i][j] << "\t";
        }
        cout << "\n\n";
    }

    cout << "Verifica...\n";
    for (i = 0; i < lines; i++) {
        for (j = 0; j < cols; j++) {
            if (i == j) {
                if (j == 0) {
                    sumSopra += m[i][j + 1];
                }
                else if (j == cols - 1) {
                    sumSotto += m[i][j - 1];
                }
                else {
                    sumSopra += m[i][j + 1];
                    sumSotto += m[i][j - 1];
                }
            }
        }
    }

    if (sumSopra > sumSotto) {
        cout << "La somma sopra e' maggiore di quella sotto! (" << sumSopra << "; " << sumSotto << ")\n";
    }
    else {
        cout << "La somma sopra non e' maggiore di quella sotto! (" << sumSopra << "; " << sumSotto << ")\n";
    }

    system("pause");
    return 0;
}