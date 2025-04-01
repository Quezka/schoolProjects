#include <iostream>
#include <ctime>
using namespace std;

/*
Creare un programma che simula un gioco con due giocatori, lo scopo dei due giocatori è partendo da zero punti arrivare
ognuno più vicino a 100 punti senza superarli,
a ogni turno un giocatore ha tre possibilità:
    1 – fermarsi (e non potrà estrarre più numeri)
    2 – estrarre un numero casuale compreso tra 5 e 10
    3 – estrarre due numeri casuali tra 1 e 5 in questo caso il prodotto tra questi due numeri verrà sommato al punteggio del giocatore.
Se un giocatore supera 100 ha perso, se un giocatore si ferma e l’altro supera il suo punteggio senza fare più di 100 punti ha perso.
*/

int main() {
    int player1 = 0, player2 = 0, choice, num1, num2, turn = 0, wins = -1;
    bool stop1 = false, stop2 = false;

    srand(time(NULL));

    while (wins < 0) {
        system("cls");

        if (turn == 0) {
            cout << "PLAYER 1 - " << player1 << " ~ " << "PLAYER 2 - " << player2 << "\n";
        }
        else {
            cout << "PLAYER 2 - " << player2 << " ~ " << "PLAYER 1 - " << player1 << "\n";
        }

        if (turn == 0 and stop1 == true) {
            choice = 1;
            turn = 1;
        }
        else if (turn == 1 and stop2 == true) {
            choice = 1;
            turn = 0;
        }
        else {
            cout << "Inserisci una scelta:\n    1 - Rimani fermo (non estrai numeri);\n    2 - Estrai numero casuale tra 5 e 10;\n    3 - Estrai due numeri casuali tra 1 e 5;\nScegli >> ";
            cin >> choice;    
        }
        
        
        switch (choice) {
            default:
                cout << "Scelta non riconosciuta! (" << choice << ").\n";
                        break;
            case 1:
                cout << "Rimani fermo (passi).\n";
                if (turn == 0) {
                    if (player1 > player2 and player1 <= 100) {
                        wins = 0;
                    }
                    else if (player1 < player2 and player2 <= 100) {
                        wins = 1;
                    }
                    turn = 1;
                }
                else if (turn == 1) {
                    if ((player1 > player2 and player1 <= 100) or player2 > 100) {
                        wins = 0;
                    }
                    else if ((player1 < player2 and player2 <= 100) or player1 > 100) {
                        wins = 1;
                    }
                    turn = 0;
                }
                break;
            case 2:
                cout << "Numero casuale tra 5 e 10.\n";
                num1 = (rand() % ((10 - 5) + 1)) + 5;

                if (turn == 0) {
                    cout << "PLAYER 1: " << player1 << " + " << num1 << " = ";
                    player1 += num1;
                    cout << player1 << "\n";
                    turn = 1;
                }
                else {
                    cout << "PLAYER 2: " << player2 << " + " << num1 << " = ";
                    player2 += num1;
                    cout << player2 << "\n";
                    turn = 0;
                }

                break;
            case 3:
                cout << "Due numeri casuali tra 1 e 5.\n";
                num1 = (rand() % ((5 - 1) + 1)) + 1;
                num2 = (rand() % ((5 - 1) + 1)) + 1;

                if (turn == 0) {
                    cout << "PLAYER 1: " << player1 << " + " << num1 * num2 << " = ";
                    player1 += num1 * num2;
                    cout << player1 << "\n";
                    turn = 1;
                }
                else {
                    cout << "PLAYER 2: " << player2 << " + " << num1 * num2 << " = ";
                    player2 += num1 * num2;
                    cout << player2 << "\n";
                    turn = 0;
                }

                break;    
        }

        system("pause");
    }

    if (wins == 0) {
        cout << "PLAYER 1 WINS!\n";
    }
    else if (wins == 1) {
        cout << "PLAYER 2 WINS!\n";
    }

    system("pause");

}