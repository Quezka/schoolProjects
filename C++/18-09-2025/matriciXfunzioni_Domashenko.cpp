#include <iostream>
#include <time.h>
using namespace std;

/*
Dopo aver creato una matrice MxN di numeri interi
in modo random dal numero 500 al numero 2000, 
il main chiama una funzione che riceve la somma degli elementi 
di colonna pari e restituisce la loro media
*/

float avg(int sum, int numQty) {
    return sum / numQty;
}

int main() {
    system("clear");
    srand(time(NULL));

    int m, n, sum = 0, numQty = 0;

    cout << "Matrici X Funzioni\n18-09-2025\nDomashenko Arsenii\n4B Informatica\n";

    cout << "Inserisci il numero delle colonne della matrice: ";
    cin >> n;
    cout << "Inserici il numero delle righe della matrice: ";
    cin >> m;

    int matrix[m][n];

    cout << "Riempimento...\n";

    cout << "Matrice riempita:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % (2000 - 500 + 1) + 500;
            cout << matrix[i][j] << "\t";
        }
        cout << "\n\n";
    }

    cout << "Elaborazione...\n";
    for (int i = 0; i < m; i++) {
        for (int j = 1; j < n; j += 2) {
            sum += matrix[i][j];
            numQty++;
        }
    }

    cout << "La media dei numeri in colonne pari e': " << avg(sum, numQty) << "\n";
    system("pause");
    return 0;
}