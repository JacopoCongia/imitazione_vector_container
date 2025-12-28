/******************************************************************************
Imitazione della classe template Vector del C++

Obiettivi:
X   -Trasformare in classe template
X   -Implementare la capacita' del vettore
    -Altri Costruttori
X   -Distruttore
    -Iteratori
*******************************************************************************/
#include <iostream>
#include <ctime> // versione c della libreria time
#include <cstdlib> // versione c della libreria stdlib (per srand e rand)
#include "Vettore.h"

int main() {
    srand(time(NULL));

    Vettore<int> test;
    std::cout << "Dimensione iniziale: " << test.getDim() << std::endl;
    std::cout << "Capacita' iniziale: " << test.getCapacita() << std::endl;
    std::cout << "I valori nel vettore sono: " << std::endl;
    for (int i = 0; i < 10; i++) {
        test.push_back(rand() % 100 + 1);
    }
    test.visualizzaValori();
    std::cout << "Dimensione finale: " << test.getDim() << std::endl;
    std::cout << "Capacita' finale: " << test.getCapacita() << std::endl;

    return 0;
}
