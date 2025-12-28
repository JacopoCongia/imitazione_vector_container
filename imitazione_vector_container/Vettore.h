#include <iostream>

template<typename T>
class Vettore {
private:
	T *p;
	int dim; // dimensione del vettore
	int capacita;

public:
	// costruttori
	Vettore(); // costruttore per inizializzare il vettore
	// distruttore
	~Vettore();

	// metodi
	void push_back(T valore); // metodo per inserire un valore nel vettore
	void pop_back(); // metodo per rimuovere l'ultimo valore dal vettore
	void visualizzaValori(); // metodo per visualizzare i valori del vettore
	int getDim(); // restituisce la dimensione corrente del vettore
	int getCapacita(); // restituisce la capacita' corrente del vettore
};

// costruttore di default della classe Vettore
template<typename T>
Vettore<T>::Vettore() {
	p = nullptr; // inizializza il puntatore p a nullptr, versione moderna di NULL
	dim = 0; // inizializza la dimensione del vettore a 0
	capacita = 0; // inizializza la capacita' del vettore 0
}

// distruttore
template<typename T>
Vettore<T>::~Vettore() {
	delete[] p;
	std::cout << "Sono il distruttore: Vettore eliminato" << std::endl;
}

// metodo push_back (inserisce un valore nel vettore)
template<typename T>
void Vettore<T>::push_back(T valore) {
	if (dim == capacita) {
		// operatore ternario, se la capacita' (e la dimensione) sono a 0, la imposto a 1, altrimenti la raddoppio (devo fare cosi' altrimenti raddoppierei 0 in caso di capacita'/dim = 0)
		capacita = (capacita == 0) ? 1 : capacita * 2;

		// alloca spazio per un array di dimensione "capacita" e assegna l'indirizzo inziale al puntatore "temp"
		T *temp = new T[capacita];
		for (int i = 0; i < dim; i++) {
			*(temp + i) = *(p + i);
		}
		delete[] p; // libera la memoria occupata da "p" che ora non serve piu' perche' puntera' a temp
		p = temp; // assegno il puntatore temp al puntatore p
	}
	// a questo punto lo spazio c'e' sicuramente, quindi basta assegnare il valore a p in posizione dim (ho usato sempre l'aritmetica dei puntatori per fare pratica)
	*(p + dim) = valore;
	dim++; // incremento dim
}

// metodo pop_back (rimuove l'ultimo elemento del vettore)
template<typename T>
void Vettore<T>::pop_back() {
	if (dim > 0) {
		// controllo che il vettore non sia vuoto
		dim--; // diminuisco la dimensione del vettore
	}
}

// visualizza i valori contenuti nel vettore
template<typename T>
void Vettore<T>::visualizzaValori() {
	for (int i = 0; i < dim; i++) {
		std::cout << *(p + i) << " ";
	}
	std::cout << std::endl;
}

// restituisce la dimensione corrente del vettore
template<typename T>
int Vettore<T>::getDim() {
	return dim;
}

// restituisce la capacita' corrente del vettore
template<typename T>
int Vettore<T>::getCapacita() {
	return capacita;
}
