/*
Creare una funzione che riceve una qta di tempo in formato ore, minuti e secondi
e la restituisce espressa solamente in secondi.
Creare poi un programma, nel quale si facciano passare due qta di tempo e verificare qual'e' il maggiore utilizzando la fx precedente
*/

#include <iostream>
using namespace std;

int timeToSecs(int hours, int mins, int seconds)
{
    return (hours * 3600) + (mins * 60) + seconds;
}

int main()
{
    system("cls");

    int hours1, mins1, seconds1, hours2, mins2, seconds2;

    cout << "Inserisci il tempo 1:\n";

    cout << "Inserisci le ore: ";
    cin >> hours1;
    cout << "Inserisci i minuti: ";
    cin >> mins1;
    cout << "Inserisci i secondi: ";
    cin >> seconds1;

    cout << "Inserisci il tempo 2:\n";

    cout << "Inserisci le ore: ";
    cin >> hours2;
    cout << "Inserisci i minuti: ";
    cin >> mins2;
    cout << "Inserisci i secondi: ";
    cin >> seconds2;

    cout << "Elaborazione...\n";

    int time1 = timeToSecs(hours1, mins1, seconds1);
    int time2 = timeToSecs(hours2, mins2, seconds2);

    if (time1 > time2)
    {
        cout << "Il tempo 1 e' maggiore del tempo 2! (" << hours1 << ":" << mins1 << ":" << seconds1 << " > " << hours2 << ":" << mins2 << ":" << seconds2 << ")\n";
    }
    else if (time1 == time2)
    {
        cout << "Il tempo 1 e' uguale al tempo 2! (" << hours1 << ":" << mins1 << ":" << seconds1 << " = " << hours2 << ":" << mins2 << ":" << seconds2 << ")\n";
    }
    else
    {
        cout << "Il tempo 1 e' minore del tempo 2! (" << hours1 << ":" << mins1 << ":" << seconds1 << " < " << hours2 << ":" << mins2 << ":" << seconds2 << ")\n";
    }

    cout << "Fine!\n";
    system("pause");
    system("cls");
    return 0;
}