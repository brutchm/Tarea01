//
// Created by Miranda Castaing, Andres Hidalgo, Christian Obando & Brandon Rutch Murillo on 18/1/21.
//

#include "Pila.h"
#include <iostream>

using namespace std;

Pila::Pila() {
	this->cab = nullptr;
	this->longitud = 0;
}

Nodo* Pila::getCab() const {
	return cab;
}

void Pila::setCab(Nodo* cab) {
	Pila::cab = cab;
}

int Pila::getLongitud() const {
	return longitud;
}

void Pila::setLongitud(int longitud) {
	Pila::longitud = longitud;
}

void Pila::agregarPila(Nodo* tmpNodo) {
	if (getCab() == nullptr) {
		tmpNodo->setSiguiente(nullptr);
		setCab(tmpNodo);
		longitud++;
	}
	else {
		tmpNodo->setSiguiente(getCab());
		setCab(tmpNodo);
		longitud++;
	};
}

Nodo* Pila::eliminarPila() {
	if (longitud == 0) {
		Nodo* tmpNodo = new Nodo();
		return tmpNodo;
	}
	Nodo* tmpNodo = getCab();
	setCab(tmpNodo->getSiguiente());
	--longitud;
	return tmpNodo;

}

bool Pila::pilaVacia() {
	if (cab == nullptr) {
		return true;
	}
	return false;
}

string Pila::mostrarRecursivo(Nodo* paux) {
	if (paux == nullptr) {
		return "";
	}
	else {
		return mostrarRecursivo(paux->getSiguiente()) + " , " + to_string(paux->getVal());
	}
}

