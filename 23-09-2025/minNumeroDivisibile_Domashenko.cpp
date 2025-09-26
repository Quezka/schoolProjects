/*
Creare una funzione che ricevuti due numeri naturali n e m (dare per buono che vengano passati effettivamente numeri naturali)
restituisce il più piccolo numero divisibile per m che sia contemporaneamente maggiore di n, qualora per m venga passato zero restitusice n+1.

Creare un programma che faccia inserire all’utente due x e y numeri e 
usi la funzione creata in precedenza per prima passando x e y e poi y e x e verifichi se i risultati sono uguali.
*/

#include <iostream>
using namespace std;

int minDiv(int n, int m) {
    if (m == 0) {
        return n + 1;
    } else {
        for (int i = n + 1; ; i++) {
            if (i % m == 0) {
                return i;
            }
        }
    }
}

int main() {
    int x, y;

    system("clear");

    cout << "Inserisci due numeri X e Y:\n";
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;

    cout << "Elaborazione...\n";
    int res1 = minDiv(x, y);
    int res2 = minDiv(y, x);
    cout << "Risultato minDiv(x, y): " << res1 << "\n";
    cout << "Risultato minDiv(y, x): " << res2 << "\n";
    if (res1 == res2) {
        cout << "I risultati sono uguali.\n";
    } else {
        cout << "I risultati sono diversi.\n";
    }

    system("pause");

}