#pragma once

class Vettore {
private:
	int* p;
	int* temp;	// puntatore di appoggio
	int dim;	// dimensione del vettore
public:
	// costruttori
	Vettore();	// costruttore per inizializzare il vettore

	// metodi
	void push(int valore);		// metodo per inserire un valore nel vettore
	void pop();					// metodo per rimuovere l'ultimo valore dal vettore
	void visualizzaValori();	// metodo per visualizzare i valori del vettore
};