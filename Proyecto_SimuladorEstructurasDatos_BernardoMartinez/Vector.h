#pragma once
#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
#include <vector>

using namespace std;
class Vector {
public:
	static bool insertarIncio(int);
	static bool insertarFinal(int);
	static bool insertarPosicion(int, int);

	static bool eliminarValor(int);
	static bool eliminarPosicion(int);
	static bool buscarValor(int);
	static int buscarPosicion(int);

	static int obtenerTamanio();

	static void imprimir();

};
#endif // !VECTOR_H
