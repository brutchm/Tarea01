#include "Cola.h"

Cola::Cola() {
    this->cab = nullptr;
    this->longitud = 0;
}

Nodo *Cola::getCab() const {
    return cab;
}

void Cola::setCab(Nodo *cab) {
    Cola::cab = cab;
}

int Cola::getLongitud() const {
    return longitud;
}

void Cola::setLongitud(int longitud) {
    Cola::longitud = longitud;
}

void Cola::agregarCola(int pInfo) {
    Nodo* tmpNodo = new Nodo(pInfo);
    if (getCab()== nullptr){
        setCab(tmpNodo);
        longitud++;
    }else{
        if (getCab()->getSiguiente()== nullptr){
            getCab()->setSiguiente(tmpNodo);
        }else{
            Nodo* ant = getCab();
            Nodo* sig = getCab()->getSiguiente();

            while (sig!= nullptr){
                ant = sig;
                sig = sig->getSiguiente();
            }
            sig->setSiguiente(tmpNodo);
        }
    }
}


Nodo* Cola::eliminarCola() {
    Nodo* tmpNodo = getCab();
    setCab(tmpNodo->getSiguiente());
    return tmpNodo;
}
