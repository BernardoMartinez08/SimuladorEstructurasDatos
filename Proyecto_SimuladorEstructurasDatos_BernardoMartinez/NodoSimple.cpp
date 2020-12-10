#include "NodoSimple.h"

NodoSimple::NodoSimple() : valor(0), siguiente(nullptr) {

}

NodoSimple::NodoSimple(int _valor, NodoSimple* _siguiente) : valor(_valor), siguiente(_siguiente) {

}

void NodoSimple::setValor(int _valor) {
	this->valor = _valor;
}

void NodoSimple::setSiguiente(NodoSimple* _siguiente) {
	this->siguiente = _siguiente;
}

int NodoSimple::getValor() {
	return this->valor;
}

NodoSimple* NodoSimple::getSiguiente() {
	return this->siguiente;
}