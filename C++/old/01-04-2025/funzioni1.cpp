#include <iostream>
using namespace std;

bool isVocal(char letter){
    if (letter == 'a' or letter == 'e' or letter == 'i' or letter == 'o' or letter == 'u') {
        return true;
    }
    else { return false; }
}

int main() {
    char letter;

    system("cls");
    
    for (int i = 0; i < 3; i++) {
        cout << "Inserisci una lettera: ";
        cin >> letter;
        if (isVocal(letter) == true) {
            cout << "La lettera inserita e' una vocale! (" << letter << ").\n";
        }
        else {
            cout << "La lettera inserita non e' una vocale! (" << letter << ").\n";
        };
    }

    system("pause");
}
