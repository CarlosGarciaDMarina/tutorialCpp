//Clase start
//Librerias
#include <iostream>
#include "Deportista.h"
#include "Futbolista.h"
#include "Nadador.h"

//Usos
using namespace std;

//Funciones

//Funcion main
int main()
{
    //Variables
    //Futbolista
    string nombre = "";
    string dni = "";
    int edad = 0;
    int dorsal = 0;
    float peso = 0.0f;
    float altura = 0.0f;

    //Objetos
    //Deportista dp1;
    Futbolista ft1;
    Nadador n1;

    //Preguntamos al usuario
    //Futbolista
    cout << "Empecemos con el Futbolista: " << endl;
    ft1.descripcion();
    cout << "Cual es su nombre ?" << endl;
    cin >> nombre;
    cout << "Cual es su dni ?" << endl;
    cin >> dni;
    cout << "Cual es su edad ?" << endl;
    cin >> edad;
    cout << "Cual es su dorsal ?" << endl;
    cin >> dorsal;

    //Pasamos las respuestas del usuario a los setters
    //Futbolista
    ft1.setNombre(nombre);
    ft1.setDni(dni);
    ft1.setEdad(edad);
    ft1.setDorsal(dorsal);

    //Salto de linea para mayor legibilidad
    cout << endl;

    //Mostramos por pantalla los atributos
    //Futbolista
    cout << "Nombre: " << ft1.getNombre() << endl;
    cout << "DNI: " << ft1.getDni() << endl;
    cout << "Edad: " << ft1.getEdad() << endl;
    cout << "Dorsal: " << ft1.getDorsal() << endl;

    //Salto de linea para mayor legibilidad
    cout << endl;

    //Preguntamos al usuario
    //Nadador
    cout << "Por ultimo, el nadador: " << endl;
    n1.descripcion();
    cout << "Cual es su nombre ?" << endl;
    cin >> nombre;
    cout << "Cual es su dni ?" << endl;
    cin >> dni;
    cout << "Cual es su edad ?" << endl;
    cin >> edad;
    cout << " Cuanto pesa ?" << endl;
    cin >> peso;
    cout << "Cuanto mide ?" << endl;
    cin >> altura;

    //Nadador
    n1.setNombre(nombre);
    n1.setDni(dni);
    n1.setEdad(edad);
    n1.setAltura(altura);
    n1.setPeso(peso);

    //Salto de linea para mayor legibilidad
    cout << endl;

    //Mostramos por pantalla el siguiente
    //Nadador
    cout << "Nombre: " << n1.getNombre() << endl;
    cout << "DNI: " << n1.getDni() << endl;
    cout << "Edad: " << n1.getEdad() << endl;
    cout << "Altura: " << n1.getAltura() << endl;
    cout << "Peso: " << n1.getPeso() << endl;


    

    return 0;
}

