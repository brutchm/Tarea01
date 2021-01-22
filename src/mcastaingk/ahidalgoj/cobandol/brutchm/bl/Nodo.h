//
// Created by Miranda Castaing, Andres Hidalgo, Christian Obando & Brandon Rutch Murillo on 18/1/21.
//

#pragma once
class Nodo
{
private:
	int val;
	Nodo* sig;

public:
	Nodo();
	Nodo(int val);
	~Nodo();

	void setVal(int n);

	int getVal();

	void setSiguiente(Nodo* sig);

	Nodo* getSiguiente();
};