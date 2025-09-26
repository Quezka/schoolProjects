#include <iostream>
#include <time.h>
using namespace std;

const int m = 5, n = 3;
int mat[m][n], posX, posY;

/*

Scrivere un programma che usi una funzione booleana che  restituisce al main un valore vero o falso se ricevendo una matrice mat(M,N)
generata in modo random con valori tra 10 e 100 e un valore X
il valore X è presente nella matrice, 
in caso affermativo il main sostituirà il valore X con il numero 0.
*/
bool checkValue(int value, int mat[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == value) {
                posX = j;
                posY = i;
                return true;
            }
        }
    }
    return false;
}

int main() {
    srand(time(NULL));

    int value;

    system("clear");
    cout << "Controllo Valore Matrice\n18-09-2025\nDomashenko Arsenii\n4B Informatica\n";

    int mat[m][n];

    cout << "Riempimento...\n";

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = rand() % (100 - 10 + 1) + 10;
            cout << mat[i][j] << "\t";
        }
        cout << "\n\n";
    }

    cout << "Elaborazione...\n";
    cout << "Inserisci valore da controllare: ";
    cin >> value;

    if (checkValue(value, mat)) {
        cout << "Il valore inserito e' presente nella matrice! (" << value << ")\n"; 
        mat[posY][posX] = 0;
        cout << "Valore sostituito con 0!\n";
    }
    else cout << "Il valore inserito non e' presente nella matrice! (" << value << ")\n";

    cout << "Matrice cambiata:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << "\n\n";
    }

    system("pause");

    return 0;
}