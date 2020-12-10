#include "NodoDoble.h"
#include <iostream>

using namespace std;

NodoDoble::NodoDoble() : valor(0), siguiente(nullptr), anterior(nullptr) {

}

NodoDoble::NodoDoble(int _valor, NodoDoble* _sig, NodoDoble* _ant) : valor(_valor),siguiente(_sig), anterior(_ant) {

}

void NodoDoble::setValor(int _valor) {
	valor = _valor;
}

void NodoDoble::setSiguiente(NodoDoble* _sig) {
	this->siguiente = _sig;
}

void NodoDoble::setAnterior(NodoDoble* _ant) {
	this->anterior = _ant;
}

int NodoDoble::getValor() {
	return this->valor;
}

NodoDoble* NodoDoble::getSiguiente() {
	return this->siguiente;
}

NodoDoble* NodoDoble::getAnterior() {
	return this->anterior;
}