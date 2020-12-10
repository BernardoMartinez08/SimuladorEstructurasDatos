#include "ListaDoble.h"
#include <iostream>

using namespace std;

ListaDoble::ListaDoble() : primero(nullptr) {
}

bool ListaDoble::estaVacia() {
	return primero == nullptr;
}

bool ListaDoble::agregarNodoInicio(int _valor) {
	if (buscarNodo(_valor) != nullptr)
		return false;
	
	NodoDoble* nuevo = new NodoDoble(_valor, nullptr, nullptr);

	if (estaVacia()) {
		primero = nuevo;
		primero->setSiguiente(nullptr);
		primero->setAnterior(nullptr);
		return true;
	}
	else {

		primero->setAnterior(nuevo);
		nuevo->setAnterior(nullptr);
		nuevo->setSiguiente(primero);
		primero = nuevo;
		return true;
	}
	return false;
}

bool ListaDoble::agregarNodoFinal(int _valor) {
	if (buscarNodo(_valor) != nullptr)
		return false;

	NodoDoble* nuevo = new NodoDoble(_valor, nullptr, nullptr);

	if (estaVacia()) {
		primero = nuevo;
		primero->setSiguiente(nullptr);
		primero->setAnterior(nullptr);
		return true;
	}
	else {
		NodoDoble* actual = primero;

		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}

		actual->setSiguiente(nuevo);
		nuevo->setAnterior(actual);
		nuevo->setSiguiente(nullptr);
		return true;
	}
	return false;
}

bool ListaDoble::agregarNodoPosicion(int _valor, int _pocision) {
	NodoDoble* nuevo = new NodoDoble(_valor, nullptr,nullptr);

	if (buscarNodo(_valor) != nullptr)
		return false;

	if (estaVacia()) {
		return false;
	}
	else if (_pocision > obtenerTamanio() || _pocision < 0) {
		return false;
	}
	else {
		NodoDoble* actual = primero;
		int posTmp = 0;
		while (posTmp != _pocision - 1) {
			actual = actual->getSiguiente();
			posTmp++;
		}

		nuevo->setAnterior(actual);
		nuevo->setSiguiente(actual->getSiguiente());
		actual->setSiguiente(nuevo);
		return true;
	}
	return false;
}

bool ListaDoble::eliminarNodoValor(int _valor) {
	if (estaVacia())
		return false;

	NodoDoble* actual = primero;

	do {
		if (actual->getValor() == _valor) {
			if (actual == primero) {
				primero = actual->getSiguiente();
				delete actual;
			}
			else {
				actual->getAnterior()->setSiguiente(actual->getSiguiente());
				delete actual;
			}
			return true;
		}

		actual = actual->getSiguiente();

	} while (actual != nullptr);
	return false;
}

bool ListaDoble::eliminarNodoPosicion(int _posicion) {
	NodoDoble* actual = primero;

	if (estaVacia())
		return false;
	else if (_posicion == 0) {
		primero = actual->getSiguiente();
		delete actual;
		return true;
	}
	else if (_posicion > obtenerTamanio() || _posicion < 0) {
		return false;
	}

	int posTmp = 0;
	while (posTmp != (_posicion) && actual != nullptr) {
		actual = actual->getSiguiente();
		posTmp++;
	}

	actual->getAnterior()->setSiguiente(actual->getSiguiente());
	delete actual;
	return true;
}

int ListaDoble::obtenerTamanio() {
	if (estaVacia())
		return 0;

	int cantidad = 0;
	NodoDoble* actual = primero;

	do {
		cantidad++;
		actual = actual->getSiguiente();
	} while (actual != nullptr);

	return cantidad;
}

NodoDoble* ListaDoble::buscarNodo(int _valor) {
	if (estaVacia())
		return nullptr;

	NodoDoble* actual = primero;

	do {
		if (actual->getValor() == _valor)
			return actual;

		actual = actual->getSiguiente();

	} while (actual != nullptr);

	return nullptr;
}

NodoDoble* ListaDoble::buscarNodoPos(int _pos) {
	if (estaVacia())
		return nullptr;

	NodoDoble* actual = primero;
	int postmp = 0;
	do {
		if (postmp == _pos)
			return actual;

		actual = actual->getSiguiente();
		postmp++;

	} while (actual != nullptr);

	return nullptr;
}

void ListaDoble::imprimirLista() {
	if (estaVacia()) {
		cout << "\nLista esta vacia!\n";
		return;
	}

	NodoDoble* actual = primero;
	cout << "\n";
	do {
		cout << "[ " << actual->getValor() << " ] ";
		actual = actual->getSiguiente();
	} while (actual != nullptr);

	cout << std::endl;
}