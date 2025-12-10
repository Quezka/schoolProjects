#include <iostream>
using namespace std;

int main() {
    int choice;
    float x, y;

    do {
        cout << "Inserisci numero X: ";
        cin >> x;
        cout << "Inserisci numero Y: ";
        cin >> y;

        cout << "Inserisci una scelta:\n  1 - Somma;\n  2 - Differenza;\n  3 - Prodotto;\n  4 - Divisione\n  5 - Inserisci nuovi numeri;\n  0 - Uscita.\nScegli >> ";
        cin >> choice;

        switch (choice) {
            case 0:
                cout << "Uscita...\n";
                break;
            case 1:
                cout << "Somma: " << x << " + " << y << " = " << x + y << "\n";
                break;
            case 2:
                cout << "Differenza: " << x << " - " << y << " = " << x - y << "\n";
                break;
            case 3:
                cout << "Prodotto: " << x << " * " << y << " = " << x * y << "\n";
                break;
            case 4:
                cout << "Divisione: " << x << " / " << y << " = " << x / y << "\n";
                break;
            case 5:
                cout << "Nuovi numeri.";
                break;
            default:
                cout << "Scelta errata! (" << choice << ").\n";
                break;
        }

        system("pause");
    } while (choice != 0);
}