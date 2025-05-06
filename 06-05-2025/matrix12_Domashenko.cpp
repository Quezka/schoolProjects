#include <iostream>
using namespace std;

// Verificare se in una matrice 5×5 in ogni cella è memorizzato il prodotto dei suoi indici di riga e di colonna.

int main() {
    int m[5][5], i, j;
    bool isValid = true;

    system("cls");
    cout << "Inserisci una matrice:\n";
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cout << "Inserisci un numero [" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
        cout << "NUOVA RIGA\n";
    }

    cout << "Matrice inserita:\n";

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cout << m[i][j] << "\t";
        }
        cout << "\n\n";
    }

    cout << "Verifica...\n";

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (m[i][j] != i * j) {
                isValid = false;
                break;
            }
        }

        if (!isValid) {
            break;
        }
    }

    if (isValid) {
        cout << "La matrice inserita corrisponde alla condizione!\n";
    }
    else {
        cout << "La matrice inserita non corrisponde alla condizione!\n";
    }

    system("pause");
    return 0;
}