#include <iostream>
using namespace std;

bool find3Dividers(int num) {
    int counter = 0;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            counter++;
        }
    }

    if (counter >= 3) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int num, temp;

    cout << "Inserisci un numero: ";
    cin >> num;

    temp = (num * num) - 1;
    cout << "Numero piu' grande piu' piccolo: " << temp << endl;

    if (find3Dividers(num)) {
        cout << "Il numero inserito dall'utente ha 3 divisori.\n";
    }   
    else {
        cout << "Il numero inserito dall'utente non ha 3 divisori.\n";
    }

    if (find3Dividers(temp)) {
        cout << "Il numero piu' grande piu' piccolo del quadrato del numero inserito dall'utente ha 3 divisori.\n";
    }
    else {
        cout << "Il numero piu' grande piu' piccolo del quadrato del numero inserito dall'utente non ha 3 divisori.\n";
    }

    system("pause");
    return 0;
}