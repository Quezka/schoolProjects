#include <iostream>
#include <time.h>
using namespace std;

// Memorizzare in un array bidimensionale 10x10 numeri casuali da 0 a 9 e dire quanti nove sono memorizzati all'interno

const int rows = 10;
const int cols = 10;

int main() {
    srand(time(NULL));
    int m[rows][cols], i, j, count = 0;

    system("cls");

    cout << "Caricamento matrice...\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            m[i][j] = rand() % 10;
            cout << m[i][j] << "\t";
        }
        cout << endl << endl;
    }

    cout << "Elaborazione...\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (m[i][j] == 9) {
                count++;
            }
        }
    }
    
    cout << "Nella matrice vi sono presenti " << count << " nove!\n";
    system("pause");
    return 0;
}