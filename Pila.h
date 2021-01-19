//
// Created by Brandon Rutch Murillo on 18/1/21.
//

#ifndef TAREA01_PILA_H
#define TAREA01_PILA_H


#include "Nodo.h"

class PilaInt {
private:
    Nodo* cab;
    int longitud;
public:
    PilaInt();

    Nodo *getCab() const;

    void setCab(Nodo *cab);

    int getLongitud() const;

    void setLongitud(int longitud);

    void agregarPila(int pInfo);

    Nodo* eliminarPila();

};


#endif //TAREA01_PILA_H
