#include <iostream>
using namespace std;

int main() {
    int mat[8][8], i, j;

    system("cls");

    for (i = 0; i < 8; i++) {
        if (i % 2 == 0 || i == 0) {
            for (j = 0; j < 8; j++) {
                if (j % 2 != 0) {
                    mat[i][j] = 1;
                }
                else {
                    mat[i][j] = 0;
                }
            }
        }
        else {
            for (j = 0; j < 8; j++) {
                if (j % 2 == 0) {
                    mat[i][j] = 1;
                }
                else {
                    mat[i][j] = 0;
                }
            }
        }
    }
    

    cout << "Stampa...\n";

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << "\n\n";
    }

    system("pause");
}