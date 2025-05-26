#include <iostream>
#include <string>
using namespace std;


int main() {
    struct Persona{
        string nome;
        int eta;
        int altezza;
    };

    struct Persona lenaz;
    lenaz.nome = "Cristiano";
    lenaz.altezza = 140;
    lenaz.eta = 42;

    cout << lenaz.nome << lenaz.altezza << lenaz.eta << endl;

    system("Pause");
}