//
// Created by Miranda Castaing, Andres Hidalgo, Christian Obando & Brandon Rutch Murillo on 18/1/21.
//

#include "Nodo.h"

Nodo::Nodo()
{
	this->val = 0;
	this->sig = nullptr;
}

Nodo::Nodo(int val) {
	this->val = val;
	this->sig = nullptr;
}

Nodo::~Nodo()
{
}

void Nodo::setVal(int n) {
	this->val = n;
};

int Nodo::getVal() {
	return val;
};

void::Nodo::setSiguiente(Nodo* sig) {
	this->sig = sig;
};

Nodo* Nodo::getSiguiente() {
	return sig;
};