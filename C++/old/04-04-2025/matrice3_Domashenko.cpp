#include <iostream>
using namespace std;

/*
Letto un array bidimensionale 9x9 e letto un numero n, verificare se n e' presente all'interno della matrice.
*/
int main() {
    int matrix[9][9], num, i, j;
    bool numPresent = false;

    system("cls");

    cout << "Inserimento matrice...\n";

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            cout << "Inserisci un numero: ";
            cin >> matrix[i][j];
        }
    }

    cout << "Matrice inserita:\n";
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++){
            cout << matrix[i][j] << "\t";
        }
        cout << "\n\n\n";
    }
    
    cout << "Inserisci un numero di controllo: ";
    cin >> num;

    cout << "Controllo corrispondenza numero - matrice...\n";
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if (matrix[i][j] == num) {
                numPresent = true;
                break;
            }
            else {
                numPresent = false;
            }
        }
        if (numPresent) {
            break;
        }
    }

    if (numPresent) {
        cout << "Il numero inserito e' presente nella matrice. (" << num << ").\n";
    }
    else {
        cout << "Il numero inserito non e' presente nella matrice. (" << num << ").\n";
    }

    system("pause");
}