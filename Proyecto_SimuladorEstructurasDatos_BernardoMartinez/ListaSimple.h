#pragma once
#ifndef LISTA_SIMPLE_H
#define LISTA_SIMPLE_H
#include "NodoSimple.h"

class ListaSimple {
public:
	ListaSimple();

	bool estaVacia();

	bool agregarNodoInicio(int);
	bool agregarNodoFinal(int);
	bool agregarNodoPosicion(int,int);

	bool eliminarNodoValor(int);
	bool eliminarNodoPosicion(int);

	int obtenerTamanio();
	NodoSimple* buscarNodo(int);
	NodoSimple* buscarNodoPos(int);

	void imprimirLista();
private:
	//Primer elemento de la lista
	NodoSimple* primero;
};

#endif // !LISTA_SIMPLE_H
