#pragma once
#ifndef  NODO_CIRCULAR_H
#define Nodo_CIRCULAR_H

class NodoCircular {
public:
	NodoCircular();
	NodoCircular(int, NodoCircular*, NodoCircular*);

	void setValor(int);
	void setSiguiente(NodoCircular*);
	void setAnterior(NodoCircular*);

	int getValor();
	NodoCircular* getSiguiente();
	NodoCircular* getAnterior();


private:
	int valor;
	NodoCircular* siguiente;
	NodoCircular* anterior;
};
#endif // ! NODO_CIRCULAR_H