#include <iostream>
using namespace std;

int main() {
    int i = 0, lunghezza;
    string arr[10];

    do {
        cout << "inserisci una stringa: ";
        cin >> arr[i];
        if (arr[i] == "fine") {
            arr[i] = "";
        }
        i++;
    } while (arr[i-1] != "fine");

    lunghezza = i;

    for (i = 0; i < lunghezza; i++) {
        cout << "Elemento " << i << ": " << arr[i] << endl;
    }

    system("pause");
    return 0;
}