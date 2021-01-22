//
// Created by Miranda Castaing, Andres Hidalgo, Christian Obando & Brandon Rutch Murillo on 18/1/21.
//

#ifndef TAREA01_GESTOR_H
#define TAREA01_GESTOR_H
#include "../bl/Lista.h"
#include "../bl/Pila.h"
#include "../bl/Cola.h"

class Gestor {
private:
	Lista tmpLista;
	Pila tmpPila;
	Cola tmpCola;
public:
	Gestor();
	string listarLista();
	void agregarPila(int);
	void agregarLista(int);
	void agregarCola(int);
	void moverListaPila(int);
	void moverListaCola(int);
	void moverPilaLista();
	void moverPilaCola();
	void moverColaLista();
	void moverColaPila();
	bool consultarListaVacia();
	bool consultarPilaVacia();
	bool consultarColaVacia();
	bool consultarValorLista(int);
	string listarPila();
	string listarCola();
};


#endif //TAREA01_GESTOR_H