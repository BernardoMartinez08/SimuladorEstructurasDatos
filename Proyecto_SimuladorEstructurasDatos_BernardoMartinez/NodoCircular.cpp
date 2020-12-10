#include "NodoCircular.h"
#include <iostream>

using namespace std;

NodoCircular::NodoCircular() : valor(0), siguiente(nullptr), anterior(nullptr) {

}

NodoCircular::NodoCircular(int _valor, NodoCircular* _sig, NodoCircular* _ant) : valor(_valor), siguiente(_sig), anterior(_ant) {

}

void NodoCircular::setValor(int _valor) {
	valor = _valor;
}

void NodoCircular::setSiguiente(NodoCircular* _sig) {
	this->siguiente = _sig;
}

void NodoCircular::setAnterior(NodoCircular* _ant) {
	this->anterior = _ant;
}

int NodoCircular::getValor() {
	return this->valor;
}

NodoCircular* NodoCircular::getSiguiente() {
	return this->siguiente;
}

NodoCircular* NodoCircular::getAnterior() {
	return this->anterior;
}