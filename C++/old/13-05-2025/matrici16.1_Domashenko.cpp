#include <iostream>
#include <time.h>
using namespace std;

const int cols = 8;
const int rows = 8;

int main () {
    int m[rows][cols], i, j, previous = 0, current = 0;
    bool correct = true;

    srand(time(NULL));

    cout << "Riempimento matrice...\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            m[i][j] = rand() % 2;
            cout << m[i][j] << "\t";
        }
        cout << "\n\n";
    }

    cout << "Verifica...\n";
    for (i = 0; i < rows; i++) {
        current = 0;
        for (j = 0; j < cols; j++) {
            if (i != 0) {
                if (m[i][j] == 1) {
                    current++;
                }
            }  
            else {
                if (m[i][j] == 1) {
                    current++;
                }
            }
        }
        if (current != previous) {
            correct = false;
        }

        previous = current;
    }

    if (correct) {
        cout << "La matrice calcolata corrisponde alla condizione!\n";
    }
    else {
        cout << "La matrice calcolata non corrisponde alla condizione!\n";
    }
    system("pause");
}