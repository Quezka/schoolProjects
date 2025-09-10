#include <iostream>
#include <time.h>
using namespace std;

/*
    Memorizzare in un array bidimensionale 10 x 10 dei numeri casuali compresi tra zero e nove,
    stamparne il contenuto e dire quanti zeri sono memorizzati all’interno dell’array
*/

void matrix1()
{
    srand(time(NULL));

    int matrix[10][10], zeroCount = 0;

    // Riempimento Matrice
    cout << "Matrice Riempita:\n\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matrix[i][j] = rand() % 10;

            cout << matrix[i][j] << "\t";
        }
        cout << "\n\n";
    }

    // Controllo Matrice
    cout << "Controllo...\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (matrix[i][j] == 0) {
                zeroCount++;    
            }
        }
    }

    cout << "Numero zeri presenti: " << zeroCount << "\nFine.\n";
}

int main()
{
    system("clear");
    matrix1();
    system("pause");
    return 0;
}