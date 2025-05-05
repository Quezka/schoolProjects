#include <iostream>
using namespace std;

int main () {
 int m[5][5], i, j, cell, sumCells = 0;
 bool isCorrect = true;
 
 system("cls");
 
 for (i = 0; i < 5; i++) {
     for (j = 0; j < 5; j++) {
         cout << "Inserisci un numero: ";
         cin >> m[i][j];
     }
     cout << "RIGA NUOVA\n";
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
     sumCells = 0;
     for (j = 0; j < 5; j++) {
         cell = m[i][j];
         cout << "Cell: " << cell << ", sumCells: " << sumCells << "\n";
         
         if (j != 0 && cell != sumCells) {
             isCorrect = false;
         }
         
         sumCells += cell;
     }
 }
 
 if (isCorrect) {
     cout << "La matrice inserita concorde alla condizione!\n";
 }
 else {
     cout << "La matrice inserita non concorde alla condizione!\n";
 }
 
 system("pause");
 return 0;
}