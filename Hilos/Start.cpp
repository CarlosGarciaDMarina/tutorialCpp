//Libreria
#include <iostream>
#include "Caballo.h"

//Namespace
using namespace std;

//Funciones

//Funcion main
int main(int argc, char const *argv[])
{
    //Creamos los objetos
    Caballo ca1("Juan", 1);
    Caballo ca2("Pedro", 2);
    Caballo ca3("Cristina", 3);

    //Pruebas
    cout << "El nombre del primer caballo es: " << ca1.getNombre() << " y su id es: " << ca1.getId() << " y sus segundos es: " << ca1.getSegundos() << endl;

    
    return 0;
}
