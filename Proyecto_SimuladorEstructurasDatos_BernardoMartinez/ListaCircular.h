#pragma once
#ifndef LISTA_CIRCULAR_H
#define LISTA_CIRCULAR_H
#include "NodoCircular.h"

class ListaCircular {
public:
	ListaCircular();

	bool estaVacia();

	bool agregarNodoInicio(int);
	bool agregarNodoFinal(int);
	bool agregarNodoPosicion(int, int);

	bool eliminarNodoValor(int);
	bool eliminarNodoPosicion(int);

	int obtenerTamanio();
	NodoCircular* buscarNodo(int);
	NodoCircular* buscarNodoPos(int);

	void imprimirLista();
private:
	//Primer elemento de la lista
	NodoCircular* primero;
	NodoCircular* ultimo;
};

#endif // !LISTA_SIMPLE_H