//
// Created by Brandon Rutch Murillo on 18/1/21.
//

#include "Pila.h"
#include <iostream>

using namespace std;

PilaInt::PilaInt() {
    this->cab= nullptr;
    this->longitud=0;
}

Nodo *PilaInt::getCab() const {
    return cab;
}

void PilaInt::setCab(Nodo *cab) {
    PilaInt::cab = cab;
}

int PilaInt::getLongitud() const {
    return longitud;
}

void PilaInt::setLongitud(int longitud) {
    PilaInt::longitud = longitud;
}

void PilaInt::agregarPila(int pInfo) {
    Nodo* tmpNodo = new Nodo(pInfo);
    if (getCab()== nullptr){
        setCab(tmpNodo);
        longitud++;
    }else{
        tmpNodo->setSiguiente(getCab());
        setCab(tmpNodo);
        longitud++;
    };
}

Nodo* PilaInt::eliminarPila() {
    if (longitud==0){
        Nodo* tmpNodo = new Nodo();
        return tmpNodo;
    }
    Nodo* tmpNodo = getCab();
    setCab(tmpNodo->getSiguiente());
    return tmpNodo;

}

