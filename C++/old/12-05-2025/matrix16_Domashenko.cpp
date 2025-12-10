#include <iostream>
#include <string>
using namespace std;

int main() {
    char m[4][4];
    int i, j, k = 0;
    string word;

    system("cls");
    cout << "Inserisci una parola: ";
    cin >> word;


    cout << "Elaborazione...\n";
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (k < word.length()) {
                m[i][j] = word.at(k);
                k++;
            }
            else {
                m[i][j] = '*';
            }
        }
    }

    cout << "Matrice elaborata:\n";
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cout << m[i][j] << "\t";
        }

        cout << "\n\n";
    }

    system("pause");
    return 0;
}