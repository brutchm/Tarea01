#pragma once
class Nodo
{
private:
    int val;
    Nodo * sig;

public:
    Nodo();
    Nodo(int val);

    void setVal(int n);

    int getVal();

    void setSiguiente(Nodo *sig);

    Nodo *getSiguiente();
};