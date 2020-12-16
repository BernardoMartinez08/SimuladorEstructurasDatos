#include <iostream>
#include <vector>
#include "Vector.h"
#include <iterator>
using namespace std;

vector<int> Valores;

bool Vector::insertarIncio(int _valor) {
	Valores.insert(Valores.begin(),_valor);
	return true;
}

bool Vector::insertarFinal(int _valor) {
	Valores.push_back(_valor);
	return true;
}

bool Vector::insertarPosicion(int _valor, int _posicion) {
	if (_posicion < Valores.size()) {
		auto itPos = Valores.begin() + _posicion;
		Valores.insert(itPos, _valor);
		return true;
	}
	return false;
}

bool Vector::eliminarValor(int _valor) {
	for (int i = 0; i < Valores.size(); i++) {
		if (Valores[i].Equals(_valor)) {
			auto itPos = Valores.begin() + i;
			Valores.erase(itPos);
			return true;
		}
	}
	return false;
}

bool Vector::eliminarPosicion(int _posicion) {
	if (_posicion < Valores.size()) {
		auto itPos = Valores.begin() + _posicion;
		Valores.erase(itPos);
		return true;
	}
	return false;
}

bool Vector::buscarValor(int _valor) {
	for (int i = 0; i < Valores.size(); i++) {
		if (Valores[i].Equals(_valor)) {
			return true;
		}
	}
	return false;
}

int Vector::buscarPosicion(int _posicion) {
	for (int i = 0; i < Valores.size(); i++) {
		if (i == _posicion) {
			return Valores[i];
		}
	}
	return -1;
}

int Vector::obtenerTamanio() {
	return Valores.size();
}

void Vector::imprimir() {
	if (Valores.size() == 0) {
		cout << "Esta Vacia";
	}
	else {
		for (int i = 0; i < Valores.size(); i++) {
			cout << "Posicion " << i << ": " << Valores[i] << endl;
		}
	}
}
