//
// Created by Miranda Castaing, Andres Hidalgo, Christian Obando & Brandon Rutch Murillo on 18/1/21.
//

#include <iostream>
#include "../dl/Gestor.h"



using namespace std;


int preguntarInfo() {
	int valor;
	cout << "Digite un numero entero" << endl;
	cin >> valor;

	return valor;
}




void menu() {
	Gestor gestor;
	int opcion = -1;
	int valor;
	while (opcion != 0) {
		cout << "1.  Agregar Nodo a Lista" << endl;
		cout << "2.  Mostrar Lista" << endl;
		cout << "3.  Agregar Nodo a Pila" << endl;
		cout << "4.  Mostrar Pila" << endl;
		cout << "5.  Agregar Nodo a Cola" << endl;
		cout << "6.  Mostrar Cola" << endl;
		cout << "7.  Mover de Lista a Pila" << endl;
		cout << "8.  Mover de Lista a Cola" << endl;
		cout << "9.  Mover de Pila a Lista" << endl;
		cout << "10. Mover de Pila a Cola" << endl;
		cout << "11. Mover de Cola a Lista" << endl;
		cout << "12. Mover de Cola a Pila" << endl;
		cout << endl;
		cout << "Digite una opcion" << endl;

		cin >> opcion;
		cout << endl;
		switch (opcion) {
		case 1:
			gestor.agregarLista(preguntarInfo());
			cout << endl;
			break;
		case 2:
			if (!gestor.consultarListaVacia())
				cout << gestor.listarLista() << endl;
			else
				cout << "La lista esta vacia" << endl;
			cout << endl;
			break;
		case 3:
			gestor.agregarPila(preguntarInfo());
			cout << endl;
			break;
		case 4:
			if (!gestor.consultarPilaVacia())
				cout << gestor.listarPila() << endl;
			else
				cout << "La pila esta vacia" << endl;
			cout << endl;
			break;
		case 5:
			gestor.agregarCola(preguntarInfo());
			cout << endl;
			break;
		case 6:
			if (!gestor.consultarColaVacia())
				cout << gestor.listarCola() << endl;
			else
				cout << "La cola esta vacia" << endl;
			cout << endl;
			break;
		case 7:
			if (!gestor.consultarListaVacia()) {
				valor = preguntarInfo();
				cout << endl;
				if (gestor.consultarValorLista(valor))
					gestor.moverListaPila(valor);
				else {
					cout << "El valor " << valor << " no existe en la lista, no se puede realizar el movimiento" << endl;
					cout << endl;
				}
			}
			else {
				cout << "La lista esta vacia, no se puede realizar el movimiento" << endl;
				cout << endl;
			}
			break;
		case 8:
			if (!gestor.consultarListaVacia()) {
				valor = preguntarInfo();
				cout << endl;
				if (gestor.consultarValorLista(valor))
					gestor.moverListaCola(valor);
				else {
					cout << "El valor " << valor << " no existe en la lista, no se puede realizar el movimiento" << endl;
					cout << endl;
				}
			}
			else {
				cout << "La lista esta vacia, no se puede realizar el movimiento" << endl;
				cout << endl;
			}
			break;
		case 9:
			if (!gestor.consultarPilaVacia())
				gestor.moverPilaLista();
			else {
				cout << "La pila esta vacia, no se puede realizar el movimiento" << endl;
				cout << endl;
			}
			break;
		case 10:
			if (!gestor.consultarPilaVacia())
				gestor.moverPilaCola();
			else {
				cout << "La pila esta vacia, no se puede realizar el movimiento" << endl;
				cout << endl;
			}
			break;
		case 11:
			if (!gestor.consultarColaVacia())
				gestor.moverColaLista();
			else {
				cout << "La cola esta vacia, no se puede realizar el movimiento" << endl;
				cout << endl;
			}
			break;
		case 12:
			if (!gestor.consultarColaVacia())
				gestor.moverColaPila();
			else {
				cout << "La cola esta vacia, no se puede realizar el movimiento" << endl;
				cout << endl;
			}
			break;
		default:
			cout << "Digite una opcion valida" << endl;
			cout << endl;
		}
	}

}




int main() {
	menu();
}