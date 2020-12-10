#include "ListaSimple.h"
#include <iostream>
using namespace std;

ListaSimple::ListaSimple() : primero(nullptr) {
	cout << "Lista Creada!!\n";
}

bool ListaSimple::estaVacia() {
	return primero == nullptr;
}

bool ListaSimple::agregarNodoInicio(int _valor) {
	NodoSimple* nuevo = new NodoSimple(_valor, nullptr);

	if (buscarNodo(_valor) != nullptr)
		return false;

	if (estaVacia()) {
		primero = nuevo;
		return true;
	}
	else {
		NodoSimple* actual = primero;
		nuevo->setSiguiente(actual);
		primero = nuevo;
		return true;
	}
	return false;
}

bool ListaSimple::agregarNodoFinal(int _valor) {
	NodoSimple* nuevo = new NodoSimple(_valor, nullptr);

	if (buscarNodo(_valor) != nullptr)
		return false;

	if (estaVacia()) {
		primero = nuevo;
		return true;
	}
	else {
		NodoSimple* actual = primero;

		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}

		actual->setSiguiente(nuevo);
		return true;
	}
	return false;
}

bool ListaSimple::agregarNodoPosicion(int _valor,int _pocision) {
	NodoSimple* nuevo = new NodoSimple(_valor, nullptr);

	if (buscarNodo(_valor) != nullptr)
		return false;

	if (estaVacia()) {
		return false;
	}
	else if (_pocision > obtenerTamanio() || _pocision < 0) {
		return false;
	}
	else {
		NodoSimple* actual = primero;
		
		int posTmp = 0;
		if (_pocision == 0) {
			nuevo->setSiguiente(primero);
			primero = nuevo;
			return true;
		}

		while (posTmp != (_pocision - 1) && actual != nullptr) {
			actual = actual->getSiguiente();
			posTmp++;
		}

		nuevo->setSiguiente(actual->getSiguiente());
		actual->setSiguiente(nuevo);
		
		return true;
	}
	return false;
}

bool ListaSimple::eliminarNodoValor(int _valor) {
	if (estaVacia())
		return false;

	NodoSimple* actual = primero;
	NodoSimple* anterior = nullptr;

	do {
		if (actual->getValor() == _valor) {
			if (actual == primero) {
				primero = actual->getSiguiente();
				delete actual;
				return true;
			}
			else {
				anterior->setSiguiente(actual->getSiguiente());
				delete actual;
				return true;
			}
		}

		anterior = actual;
		actual = actual->getSiguiente();

	} while (actual != nullptr);

	return false;
}

bool ListaSimple::eliminarNodoPosicion(int _posicion) {
	NodoSimple* actual = primero;
	NodoSimple* anterior = nullptr;
	
	if (estaVacia())
		return false;
	else if (_posicion > obtenerTamanio() || _posicion < 0)
		return false;
	else if (_posicion == 0) {
		primero = primero->getSiguiente();
		delete actual;
		return true;
	}

	int posTmp = 0;
	while (posTmp != (_posicion) && actual != nullptr) {
		anterior = actual;
		actual = actual->getSiguiente();
		posTmp++;
	} 
	
	anterior->setSiguiente(actual->getSiguiente());
	delete actual;
	return true;
}

int ListaSimple::obtenerTamanio() {
	if (estaVacia())
		return 0;

	int cantidad = 0;
	NodoSimple* actual = primero;

	do {
		cantidad++;
		actual = actual->getSiguiente();
	} while (actual != nullptr);

	return cantidad;
}

NodoSimple* ListaSimple::buscarNodo(int _valor) {
	if (estaVacia())
		return nullptr;

	NodoSimple* actual = primero;

	do {
		if (actual->getValor() == _valor)
			return actual;
		
		actual = actual->getSiguiente();

	} while (actual != nullptr);

	return nullptr;
}

NodoSimple* ListaSimple::buscarNodoPos(int _pos) {
	if (estaVacia())
		return nullptr;

	NodoSimple* actual = primero;
	int postmp = 0;
	do {
		if (postmp == _pos)
			return actual;

		actual = actual->getSiguiente();
		postmp++;

	} while (actual != nullptr);

	return nullptr;
}


void ListaSimple::imprimirLista() {
	cout << "\n***LISTA***\n";
	if (estaVacia())
		cout << "LISTA ESTA VACIA.\n";

	NodoSimple* actual = primero;
	do {
		cout << "[ " << actual->getValor() << " ] ";
		actual = actual->getSiguiente();
	} while (actual != nullptr);

	cout << "\n\n";
}

