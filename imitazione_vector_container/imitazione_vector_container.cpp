/******************************************************************************
Implementazione di push e pop mantenendo la contiguita' dell'array
creare / distruggere vettori

separare push e pop
*******************************************************************************/
#include <iostream>
#include "Vettore.h"

int main()
{
    //// partiamo dalla funzione push
    //int* p = NULL;
    //int* temp = NULL; // puntatore di appoggio
    //int dim = 0; // dimensione del vettore
    //int valore; // valore inserito dall'utente ad ogni ciclo
    //int scelta = 0; // scelta dell'utente (continua o no) che verra' usata come condizione di uscita dal ciclo

    //while (scelta != 2) {
    //    dim++; // viene incrementato il valore della variabile "dim" (dimensione dell'array) di 1
    //    std::cout << "Inserisci un valore: " << std::endl;
    //    std::cin >> valore; // viene assegnato il valore scelto dall'utente alla variabile "valore"
    //    // codice da eseguire solo al primo ciclo
    //    if (dim <= 1) {
    //        p = new int[dim];
    //        p[0] = valore;
    //        /* codice da eseguire solo se il valore della variabile "dim" e' maggiore di 1
    //        (cioe' se l'utente sceglie di aggiungere un altro valore) */
    //    }
    //    else {
    //        // std::cout<<"Temp: "<<temp<<std::endl; // prova per controllare il valore di temp prima di usare "new"
    //        temp = new int[dim - 1]; /* alloca spazio per un array di dimensione "dim - 1" e assegna
    //                                    l'indirizzo inziale al puntatore "temp", ho scelto dim - 1 come dimensione
    //                                    perche' l'array di appoggio "temp" ha sempre bisogno di un elemento in meno
    //                                    rispetto a "p", visto che l'ultimo valore viene aggiunto a "p" direttamente ad ogni ciclo */
    //                                    // std::cout<<"Temp: "<<temp<<std::endl; // prova per controllare il valore di temp dopo aver usato "new"
    //                                    // ciclo che copia i valori del vettore "p" nel vettore di appoggio "temp"
    //        for (int i = 0; i < dim - 1; i++) {
    //            *(temp + i) = *(p + i);
    //        }
    //        delete[]p; // libera la memoria occupata da "p" che ora non serve piu' perche' verra' ricreato con un elemento in piu'
    //        p = new int[dim]; // viene allocato spazio per un array di interi di dimensione "dim" e l'indirizzo del primo elemento viene assegnato a "p"
    //        /* ciclo che copia i valori dal vettore di appoggio "temp" al vettore "p", il ciclo si ferma quando l'indice e' minore di dim - 1
    //           perche' l'ultimo elemento verra' riempito dal valore inserito dall'utente (contenuto nella variabile "valore") */
    //        for (int i = 0; i < dim - 1; i++) {
    //            *(p + i) = *(temp + i);
    //        }
    //        p[dim - 1] = valore; // assegnazione del valore inserito dall'utente (contenuto nella variabile "valore") nell'ultimo elemento dell'array "p"
    //        delete[]temp;  // libera la memoria occupata dall'array "temp", che verra' ricreato al prossimo ciclo con un elemento in piu'
    //    }
    //    // std::cout<<"Numero inserito: "<<*p<<std::endl;
    //    // std::cout<<"Dimensione array: "<<dim<<std::endl;
    //    std::cout << "Valori nell'array: " << std::endl;
    //    for (int i = 0; i < dim; i++) {
    //        std::cout << *(p + i) << " ";
    //    }
    //    std::cout << std::endl << std::endl;
    //    std::cout << "Vuoi inserire un altro valore?" << std::endl;
    //    std::cout << "1. Si" << std::endl << "2. No" << std::endl;
    //    std::cin >> scelta;
    //};

    Vettore test;
    test.push(5);
    test.push(12);
    test.visualizzaValori();

    return 0;
}