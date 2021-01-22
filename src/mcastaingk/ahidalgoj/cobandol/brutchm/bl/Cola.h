//
// Created by Miranda Castaing, Andres Hidalgo, Christian Obando & Brandon Rutch Murillo on 18/1/21.
//

#ifndef TAREA01_COLA_H
#define TAREA01_COLA_H


#include <iostream>
#include <sstream>
#pragma once
#include "Nodo.h"


using namespace std;

class Cola {
private:
	Nodo* cab;
	int longitud;

public:
	Cola();

	Nodo* getCab() const;

	void setCab(Nodo* cab);

	int getLongitud() const;

	void setLongitud(int longitud);

	void agregarCola(Nodo* tmpNodo);

	Nodo* eliminarCola();

	bool colaVacia();

	string mostrarRecursivo(Nodo*);
};


#endif //TAREA01_COLA_H
