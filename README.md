# schoolProjects
My school projects. Usually in C++ and Java

# Docs
## Funzioni
Funzione - insieme di istruzioni, racchiuse in un contenitore - Funzione - con un nome e che tornano un risultato (non sempre pero, dipende dal tipo della funzione).

```cpp
#include <iostream>
#include <cmath>
using namespace std;

// Dichiarazione con variabili locali alla funzione
int calcoloPotenza(int base, int exp) {
    int res = 0;
    res = pow(base, exp);

    return res;
}
// La funzione ha: un tipo, un nome, dei parametri da mettere all'interno delle parentesi.
// Chiamata di una funzione
cout << calcoloPotenza(1, 10);
```