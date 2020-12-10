#pragma once
#ifndef NODO_SIMPLE_H
#define NODO_SIMPLE_H

class NodoSimple {
public:
	NodoSimple();
	NodoSimple(int, NodoSimple*);

	void setValor(int);
	void setSiguiente(NodoSimple*);

	int getValor();
	NodoSimple* getSiguiente();
private:
	int valor;
	NodoSimple* siguiente;

};

#endif // !NODO_SIMPLE_H