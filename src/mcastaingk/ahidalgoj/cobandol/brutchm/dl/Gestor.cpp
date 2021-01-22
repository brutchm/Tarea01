//
// Created by Miranda Castaing, Andres Hidalgo, Christian Obando & Brandon Rutch Murillo on 18/1/21.
//
#include "../bl/Lista.h"
#include "../bl/Pila.h"
#include "../bl/Cola.h"
#include "Gestor.h"
using namespace  std;

//agregar una lista, pila y cola como atributos privados en el gestor.h para poder acceder a estas

Gestor::Gestor() {

}

void Gestor::agregarPila(int valor) {
	Nodo* tmpNodo = new Nodo(valor);
	tmpPila.agregarPila(tmpNodo);
}

string Gestor::listarLista() {
	Nodo* aux;
	string lista;
	aux = tmpLista.getCabeza();
	lista = tmpLista.mostrarRecursivo(aux);
	return lista.substr(0, lista.length() - 3) + ".";
}

void Gestor::agregarLista(int valor) {
	Nodo* nuevo = new Nodo(valor);
	tmpLista.agregarOrdenado(nuevo);
}

void Gestor::agregarCola(int valor) {
	Nodo* tmpNodo = new Nodo(valor);
	tmpCola.agregarCola(tmpNodo);
}

void Gestor::moverListaPila(int valor) {
	tmpPila.agregarPila(tmpLista.eliminarNodo(valor));
}

void Gestor::moverListaCola(int valor) {
	tmpCola.agregarCola(tmpLista.eliminarNodo(valor));
}

void Gestor::moverPilaLista() {
	tmpLista.agregarOrdenado(tmpPila.eliminarPila());
}

void Gestor::moverPilaCola() {
	tmpCola.agregarCola(tmpPila.eliminarPila());
}

void Gestor::moverColaLista() {
	tmpLista.agregarOrdenado(tmpCola.eliminarCola());
}

void Gestor::moverColaPila() {
	tmpPila.agregarPila(tmpCola.eliminarCola());
}

bool Gestor::consultarListaVacia() {
	return tmpLista.listaVacia();
}

bool Gestor::consultarPilaVacia() {
	return tmpPila.pilaVacia();
}

bool Gestor::consultarColaVacia() {
	return tmpCola.colaVacia();
}

bool Gestor::consultarValorLista(int valor) {
	if (tmpLista.buscar(valor) != nullptr)
		return true;
	return false;
}

string Gestor::listarPila() {
	Nodo* aux;
	string pila;
	aux = tmpPila.getCab();
	pila = tmpPila.mostrarRecursivo(aux);
	return pila.substr(3, pila.length()) + " .";
}

string Gestor::listarCola() {
	Nodo* aux;
	string cola;
	aux = tmpCola.getCab();
	cola = tmpCola.mostrarRecursivo(aux);
	return cola.substr(0, cola.length() - 3) + ".";
}