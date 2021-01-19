#include <iostream>
#include "Gestor.h"



using namespace std;


void menu(){
    Gestor gestor;
    int opcion = -1;
    while (opcion != 0){
        cout<< "Digite una opcion" << endl;
        cout<< "1. Agregar Nodo a Lista" << endl;
        cout << "2. Mostrar Lista"<<endl;
        cout<< "3. Agregar Nodo a Pila" << endl;
        cout<< "4. Agregar Nodo a Cola" << endl;
        cout << "5. Mover de Lista a Pila"<<endl;
        cout<< "6. Mover de Lista a Cola" << endl;
        cout << "7. Mover de Pila a Lista"<<endl;
        cout<< "8. Mover de Pila a Cola" << endl;
        cout << "9. Mover de Cola a Lista"<<endl;
        cout << "10. Mover de Cola a Pila"<<endl;

        cin >> opcion;
        switch (opcion){
            case 1:
                gestor.preguntarInfo();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            default:
                cout<< "Digite una opcion valida"<< endl;
        }
    }

}




int main() {
    menu();
}