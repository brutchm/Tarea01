//
// Created by Miranda Castaing, Andres Hidalgo, Christian Obando & Brandon Rutch Murillo on 18/1/21.
//

#pragma once
#include "Nodo.h"
#include <iostream>
#include <sstream>

using namespace std;
class Lista
{
private:
	Nodo* cab;
	int longitud;

public:
	Lista();
	~Lista();
	Nodo* getCabeza();
	void setCabeza(Nodo* cab);
	int getLongitud();
	void setLongitud(int longitud);
	void agregarInicio(Nodo*);
	void mostrar();
	bool listaVacia();
	Nodo* buscar(int);
	void agregarOrdenado(Nodo*);
	bool eliminar(int);
	bool eliminarPos(int);
	string mostrarRecursivo(Nodo*);
	Nodo* eliminarNodo(int valor);
	int cantidad();
};