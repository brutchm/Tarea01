//
// Created by Brandon Rutch Murillo on 18/1/21.
//
#include "Lista.h"
#include "Pila.h"
#include "Cola.h"
#include "Gestor.h"
using namespace  std;

//agregar una lista, pila y cola como atributos privados en el gestor.h para poder acceder a estas

Gestor::Gestor() {}

void Gestor::agregarPila() {
    int valor;
    cout<< "Digite un numero entero" <<endl;
    cin >> valor;
}

void Gestor::listar() {
    Nodo* aux;
    aux = tmpLista->getCabeza();
    cout<<tmpLista->mostrarRecursivo(aux)<<endl;
}

void Gestor::preguntarInfo() {
    int valor;
    cout<< "Digite un numero entero" <<endl;
    cin >> valor;

    tmpLista->agregarOrdenado(valor);
}