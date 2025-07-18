#include "Vettore.h"
#include <iostream>

// costruttore di default della classe Vettore
Vettore::Vettore() {
	p = nullptr;	// inizializza il puntatore p a nullptr, versione moderna di NULL
	temp = nullptr; // inizializza il puntatore di appoggio a nullptr
	dim = 0;		// inizializza la dimensione del vettore a 0
}

// metodo per inserire un valore nel vettore
void Vettore::push(int valore) {
    dim++;
    if (dim <= 1) {
        p = new int[dim];
        p[0] = valore;
        /* codice da eseguire solo se il valore della variabile "dim" e' maggiore di 1
        (cioe' se l'utente sceglie di aggiungere un altro valore) */
    }
    else {
        // std::cout<<"Temp: "<<temp<<std::endl; // prova per controllare il valore di temp prima di usare "new"
        temp = new int[dim - 1]; /* alloca spazio per un array di dimensione "dim - 1" e assegna
                                    l'indirizzo inziale al puntatore "temp", ho scelto dim - 1 come dimensione
                                    perche' l'array di appoggio "temp" ha sempre bisogno di un elemento in meno
                                    rispetto a "p", visto che l'ultimo valore viene aggiunto a "p" direttamente ad ogni ciclo */
                                    // std::cout<<"Temp: "<<temp<<std::endl; // prova per controllare il valore di temp dopo aver usato "new"
                                    // ciclo che copia i valori del vettore "p" nel vettore di appoggio "temp"
        for (int i = 0; i < dim - 1; i++) {
            *(temp + i) = *(p + i);
        }
        delete[]p; // libera la memoria occupata da "p" che ora non serve piu' perche' verra' ricreato con un elemento in piu'
        p = new int[dim]; // viene allocato spazio per un array di interi di dimensione "dim" e l'indirizzo del primo elemento viene assegnato a "p"
        /* ciclo che copia i valori dal vettore di appoggio "temp" al vettore "p", il ciclo si ferma quando l'indice e' minore di dim - 1
           perche' l'ultimo elemento verra' riempito dal valore inserito dall'utente (contenuto nella variabile "valore") */
        for (int i = 0; i < dim - 1; i++) {
            *(p + i) = *(temp + i);
        }
        p[dim - 1] = valore; // assegnazione del valore inserito dall'utente (contenuto nella variabile "valore") nell'ultimo elemento dell'array "p"
        delete[]temp;  // libera la memoria occupata dall'array "temp", che verra' ricreato al prossimo ciclo con un elemento in piu'
    }
}

void Vettore::visualizzaValori() {
    for (int i = 0; i < dim; i++) {
        std::cout << *(p + i) << " ";
	}
	std::cout << std::endl;
}