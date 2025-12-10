#include <iostream>
#include <time.h>
using namespace std;

const int righe = 6;
const int colonne = 6;
int numeroCorretto = ((colonne - 1) + (righe - 1)*2 + (colonne - 2));
int m[colonne][righe], i, j;
bool inserimentoAMano = false;

void inserimentoManuale() {
    cout << "Inserisci una matrice: ";
    for (i = 0; i < righe; i++) {
        for (j = 0; j < colonne; j++) {
            cout << "\tInserisci un numero [" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
        cout << "NUOVA RIGA\n";
    }
}

void inserimentoAutomatico() {
    int border = rand() % 101;

    cout << "Bordo: " << border;

    
    for (i = 0; i < righe; i++) {
        for (j = 0; j < colonne; j++) {
            if (i == 0 || j == 0 || i == 5 || j == 5) {
                m[i][j] = border;
            }
            else {
                m[i][j] = rand() % 101;
            }
        }
    }
}

int main() {
    int borderValue, correctCount = 0;
    srand(time(NULL));

    system("cls");

    if (inserimentoAMano) {
        inserimentoManuale();
    }
    else {
        inserimentoAutomatico();
    }

    cout << "Matrice inserita:\n";
    for (i = 0; i < colonne; i++) {
        for (j = 0; j < righe; j++) {
            cout << m[i][j] << "\t";
        }
        cout << "\n\n";
    }

    cout << "Numero corretto: " << numeroCorretto << "\n";
    cout << "Verifica...\n";
    borderValue = m[0][0];
    for (j = 1; j < colonne; j++) {
        if (m[0][j] == borderValue) {
            correctCount++;
        }
    }
    for (i = 1; i < righe; i++) {
        if (m[i][0] == borderValue) {
            correctCount++;
        }
    }
    for (i = 1; i < righe; i++) {
        if (m[i][5] == borderValue) {
            correctCount++;
        }
    }
    for (j = 1; j < colonne - 1; j++) {
        if (m[5][j] == borderValue) {
            correctCount++;
        }
    }

    if (correctCount == numeroCorretto) {
        cout << "La matrice inserita corrisponde alla condizione posta!\n";
    }
    else {
        cout << "La matrice inserita non corrisponde alla condizione posta!\n";
    }

    system("pause");
    return 0;
}