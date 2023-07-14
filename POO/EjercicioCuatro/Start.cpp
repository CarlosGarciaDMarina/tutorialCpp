//Clase start
//Librerias
#include <iostream>
#include "Deportista.h"
#include "Futbolista.h"

//Usos
using namespace std;

//Funciones

//Funcion main
int main()
{
    //Variables
    string nombre = "";
    string dni = "";
    int edad = 0;
    int dorsal = 0;

    //Objetos
    Deportista dp1;
    Futbolista ft1;

    //Preguntamos al usuario
    cout << "¿ Cual es el nombre ?" << endl;
    cin >> nombre;
    cout << "¿ Cual es su dni ?" << endl;
    cin >> dni;
    cout << "¿ Cual es su edad ?" << endl;
    cin >> edad;
    cout << "¿ Cual es su dorsal ?" << endl;
    cin >> dorsal;

    //Pasamos las respuestas del usuario a los setters
    ft1.setNombre(nombre);
    ft1.setDni(dni);
    ft1.setEdad(edad);
    ft1.setDorsal(dorsal);

    //Salto de linea para mayor legibilidad
    cout << endl;

    //Mostramos por pantalla los atributos 
    cout << "Nombre: " << ft1.getNombre() << endl;
    cout << "DNI: " << ft1.getDni() << endl;
    cout << "Edad: " << ft1.getEdad() << endl;
    cout << "Dorsal: " << ft1.getDorsal() << endl;

    return 0;
}

