#include <iostream>
using namespace std;
/*
    Creare un programma calcolatrice in cui vengono inizialmente memorizzati due numeri scelti dall’utente
    e poi fino a che non viene spenta la calcolatrice si chiede all’utente cosa fare;
    se l’utente inserisce 1 si fa la somma, se inserisce 2 la differenza, 3 il prodotto, 4 la divisione, 5 si fanno inserire due nuovi numeri,
    0 si spegne la calcolatrice.
*/

float summ(float x, float y) {
    return x + y;
}

float diff(float x, float y) {
    return x - y;
}

float multip(float x, float y) {
    return x * y;
}

float division(float x, float y) {
    return x / y;
}

int main() {
    int choice = 1;
    float x, y;

    while (choice != 0) {
        cout << "Inserisci il primo numero: ";
        cin >> x;
        cout << "Inserisci il secondo numero: ";
        cin >> y;
    
        cout << "Inserisci una scelta:\n    0 - Uscita;\n   1 - Somma;\n    2 - Differenza;\n   3 - Moltiplicazione;\n  4 - Divisione;\n    5 - Nuovi numeri.\nScegli >> ";
        cin >> choice;
    
        switch (choice) {
            default: 
                cout << "Scelta non riconosciuta! (" << choice << ")." << endl;
                break;
            case 0:
                cout << "Uscita...\n";
                break;
            case 1:
                cout << "Somma: " << x << " + " << y << " = " << x + y << endl;
                break;
            case 2:
                cout << "Differenza: " << x << " - " << y << " = " << x - y << endl;
                break;
            case 3:
                cout << "Prodotto: " << x << " * " << y << " = " << x * y << endl;
                break;
            case 4:
                cout << "Divisione: " << x << " / " << y << " = " << x / y << endl;
                break;
            case 5:
                cout << "Nuovi numeri." << endl;
                break;
        }

        system("pause");
    }
}