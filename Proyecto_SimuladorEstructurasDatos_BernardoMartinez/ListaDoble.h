#pragma once
#ifndef LISTA_DOBLE_H
#define LISTA_DOBLE_H
#include "NodoDoble.h"

class ListaDoble {
public:
	ListaDoble();

	bool estaVacia();

	bool agregarNodoInicio(int);
	bool agregarNodoFinal(int);
	bool agregarNodoPosicion(int, int);

	bool eliminarNodoValor(int);
	bool eliminarNodoPosicion(int);

	int obtenerTamanio();
	NodoDoble* buscarNodo(int);
	NodoDoble* buscarNodoPos(int);

	void imprimirLista();
private:
	//Primer elemento de la lista
	NodoDoble* primero;
};

#endif // !LISTA_SIMPLE_H