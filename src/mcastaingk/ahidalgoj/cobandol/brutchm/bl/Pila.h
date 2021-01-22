//
// Created by Miranda Castaing, Andres Hidalgo, Christian Obando & Brandon Rutch Murillo on 18/1/21.
//

#ifndef TAREA01_PILA_H
#define TAREA01_PILA_H


#include "Nodo.h"
#include <sstream>

class Pila {
private:
	Nodo* cab;
	int longitud;
public:
	Pila();

	Nodo* getCab() const;

	void setCab(Nodo* cab);

	int getLongitud() const;

	void setLongitud(int longitud);

	void agregarPila(Nodo* tmpNodo);

	Nodo* eliminarPila();

	bool pilaVacia();

	std::string mostrarRecursivo(Nodo*);
};


#endif //TAREA01_PILA_H
