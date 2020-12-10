#pragma once
#ifndef  NODO_DOBLE_H
#define NODO_DOBLE_H

class NodoDoble {
public:
	NodoDoble();
	NodoDoble(int, NodoDoble*, NodoDoble*);

	void setValor(int);
	void setSiguiente(NodoDoble*);
	void setAnterior(NodoDoble*);

	int getValor();
	NodoDoble* getSiguiente();
	NodoDoble* getAnterior();

private:
	int valor;
	NodoDoble* siguiente;
	NodoDoble* anterior;
};
#endif // ! NODO_DOBLE_H