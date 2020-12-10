#include "ListaCircular.h"
#include <iostream>

using namespace std;

ListaCircular::ListaCircular() : primero(nullptr),ultimo(nullptr) {
}

bool ListaCircular::estaVacia() {
	return primero == nullptr;
}

bool ListaCircular::agregarNodoInicio(int _valor) {
	if (buscarNodo(_valor) != nullptr) {
		return false;
	}

	NodoCircular* nuevo = new NodoCircular(_valor, nullptr, nullptr);

	if (estaVacia()) {
		primero = nuevo;
		ultimo = nuevo;
		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
		return true;
	}
	else {

		primero->setAnterior(nuevo);
		nuevo->setSiguiente(primero);
		primero = nuevo;

		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
		return true;
	}

	return false;
}

bool ListaCircular::agregarNodoFinal(int _valor) {
	if (buscarNodo(_valor) != nullptr) {
		return false;
	}

	NodoCircular* nuevo = new NodoCircular(_valor, nullptr, nullptr);

	if (estaVacia()) {
		primero = nuevo;
		ultimo = nuevo;
		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
		return true;
	}
	else {
		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);
		ultimo = nuevo;

		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
		return true;
	}

	return false;
}

bool ListaCircular::agregarNodoPosicion(int _valor, int _pocision) {
	NodoCircular* nuevo = new NodoCircular(_valor, nullptr, nullptr);

	if (buscarNodo(_valor) != nullptr) {
		return false;
	}

	if (estaVacia()) {
		return false;
	}
	else if (_pocision > obtenerTamanio() || _pocision < 0) {
		return false;
	}
	else {
		NodoCircular* actual = primero;
		int posTmp = 0;
		do {
			actual = actual->getSiguiente();
			posTmp++;
		} while (posTmp != (_pocision - 1) && actual != primero);

		nuevo->setAnterior(actual);
		nuevo->setSiguiente(actual->getSiguiente());
		actual->setSiguiente(nuevo);
		return true;
	}

	return false;
}

bool ListaCircular::eliminarNodoValor(int _valor) {
	if (estaVacia())
		return false;
	 
	NodoCircular* actual = primero;

	do {
		if (actual->getValor() == _valor) {
			if (actual == primero) {
				primero = actual->getSiguiente();
				delete actual;
			}
			else {
				actual->getAnterior()->setSiguiente(actual->getSiguiente());
				actual->getSiguiente()->setAnterior(actual->getAnterior());
				delete actual;
			}
			return true;
		}

		actual = actual->getSiguiente();

	} while (actual != nullptr);

	return false;
}

bool ListaCircular::eliminarNodoPosicion(int _posicion) {
	if (estaVacia())
		return false;

	else if (_posicion > obtenerTamanio() || _posicion < 0) {
		return false;
	}

	NodoCircular* actual = primero;

	int posTmp = 0;
	do {
		actual = actual->getSiguiente();
		posTmp++;
	} while (posTmp != _posicion);

	if (actual == primero) {
		primero = actual->getSiguiente();
		delete actual;
		return true;
	}
	else {
		actual->getAnterior()->setSiguiente(actual->getSiguiente());
		actual->getSiguiente()->setAnterior(actual->getAnterior());
		delete actual;
		return true;
	}
}

int ListaCircular::obtenerTamanio() {
	if (estaVacia())
		return 0;

	int cantidad = 0;
	NodoCircular* actual = primero;

	do {
		cantidad++;
		actual = actual->getSiguiente();
	} while (actual != primero);

	return cantidad;
}

NodoCircular* ListaCircular::buscarNodo(int _valor) {
	if (estaVacia())
		return nullptr;

	NodoCircular* actual = primero;

	do {
		if (actual->getValor() == _valor)
			return actual;

		actual = actual->getSiguiente();
	} while (actual != primero);

	return nullptr;
}

NodoCircular* ListaCircular::buscarNodoPos(int _pos) {
	if (estaVacia())
		return nullptr;

	NodoCircular* actual = primero;
	int postmp = 0;
	do {
		if (postmp == _pos)
			return actual;

		actual = actual->getSiguiente();
		postmp++;
	} while (actual != primero);

	return nullptr;
}

void ListaCircular::imprimirLista() {
	if (estaVacia()) {
		cout << "\nLista esta vacia!\n";
		return;
	}

	NodoCircular* actual = primero;
	cout << "\n";
	do {
		cout << "[ " << actual->getValor() << " ] ";
		actual = actual->getSiguiente();
	} while (actual != primero);

	cout << std::endl;
}