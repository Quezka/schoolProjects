#include <iostream>
#include <map>

using namespace std;

void main() {
	char veh;
	int startHrs, startMins, finishHrs, finishMins, startTime, finishTime, time, remainder, price, cost;
	map<char> vehicles = {}

	cout << "Inserisci il veicolo selezionato:\n	M - motociclo;\n	B - bicicletta.\nVeicolo: ";
	cin >> veh;

	cout << endl << "Inserisci l'orario dell'inizio:\n	Ore: ";
	cin >> startHrs;
	cout << "	Minuti: ";
	cin >> startMins;
	cout << "Inserisci l'orario della fine:\n	Ore: ";
	cin >> finishHrs;
	cout << "	Minuti: ";
	cin >> finishMins;

	cout << endl << "Elaborazione..." << endl;

	startTime = (startHrs * 60) + startMins;
	finishTime = (finishHrs * 60) + finishMins;

	time = finishTime - startTime;
	
	remainder = time % 60;
	
	time = time - remainder;

	if (remainder > 30) { time = time + 60; }

	if (veh == 'M' || veh == 'm') { price = 3; }
	else { price = 2; }

	cost = (time / 60) * price;


	cout << "Il prezzo del noleggio del veicolo " << veh << " (" << price << " euro/ora) dalle " << startHrs << ":" << startMins << " alle " << finishHrs << ":" << finishMins << " (" << time / 60 << " ore) e' " << cost << " euro." << endl;
	system("pause");
}