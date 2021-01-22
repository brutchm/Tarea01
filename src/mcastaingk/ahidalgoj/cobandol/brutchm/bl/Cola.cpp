//
// Created by Miranda Castaing, Andres Hidalgo, Christian Obando & Brandon Rutch Murillo on 18/1/21.
//

#include "Cola.h"

Cola::Cola() {
	this->cab = nullptr;
	this->longitud = 0;
}

Nodo* Cola::getCab() const {
	return cab;
}

void Cola::setCab(Nodo* cab) {
	Cola::cab = cab;
}

int Cola::getLongitud() const {
	return longitud;
}

void Cola::setLongitud(int longitud) {
	Cola::longitud = longitud;
}

void Cola::agregarCola(Nodo* tmpNodo) {
	tmpNodo->setSiguiente(nullptr);
	if (getCab() == nullptr) {
		setCab(tmpNodo);
		longitud++;
	}
	else {
		if (getCab()->getSiguiente() == nullptr) {
			getCab()->setSiguiente(tmpNodo);
			longitud++;
		}
		else {
			Nodo* ant = getCab();
			Nodo* sig = getCab()->getSiguiente();

			while (sig != nullptr) {
				ant = sig;
				sig = sig->getSiguiente();
			}
			ant->setSiguiente(tmpNodo);
			longitud++;
		}
	}
}


Nodo* Cola::eliminarCola() {
	Nodo* tmpNodo = getCab();
	setCab(tmpNodo->getSiguiente());
	--longitud;
	return tmpNodo;
}


bool Cola::colaVacia() {
	if (cab == nullptr) {
		return true;
	}
	return false;
}


string Cola::mostrarRecursivo(Nodo* paux) {
	if (paux == nullptr) {
		return ".";
	}
	else {
		return to_string(paux->getVal()) + " , " + mostrarRecursivo(paux->getSiguiente());
	}
}
