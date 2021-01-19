#include "Nodo.h"
#include <iostream>

using namespace std;
class Lista
{
private:
    Nodo * cab;
    int longitud;

public:
    Lista();
    ~Lista();
    void agregarInicio(int);
    Nodo* getCabeza();
    void setCabeza(Nodo *cab);
    int getLongitud();
    void mostrar();
    bool listaVacia();
    Nodo* buscar(int);
    void agregarOrdenado(int);
    bool eliminar(int);
    bool eliminarPos(int);
    string mostrarRecursivo(Nodo*);
    Nodo* eliminarNodo(int valor);
};