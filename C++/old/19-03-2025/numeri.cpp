#include <iostream>
using namespace std;

/*
 Creare un programma che ricevuto un numero intero se è un numero naturale compreso tra 0 e 9 inclusi
 scrive il numero in parole altrimenti scrive numero non valido. 
*/
int main() {
    int num;

    system("cls");

    cout << "Inserisci un numero: ";
    cin >> num;

    cout << num;
    switch (num) {
        default:
            cout << " - Numero non valido\n";
            break;
        case 0:
            cout << " - zero\n";
            break;
        case 1:
            cout << " - uno\n";
            break;
        case 2:
            cout << " - due\n";
            break;
        case 3:
            cout << " - tre\n";
            break;
        case 4:
            cout << " - quattro\n";
            break;
        case 5:
            cout << " - cinque\n";
            break;
        case 6:
            cout << " - sei\n";
            break;
        case 7:
            cout << " - sette\n";
            break;
        case 8:
            cout << " - otto\n";
            break;
        case 9:
            cout << " - nove\n";
            break;
    }
    
    system("pause");
}