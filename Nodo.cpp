#include "Nodo.h"
#include <cstddef>

Nodo::Nodo()
{
    this->val = NULL;
    this->sig = nullptr;
}

Nodo::Nodo(int val) {
    this->val=val;
    this->sig= nullptr;
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