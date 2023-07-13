//1.-Crear un programa que contenga la clase futbolista. La clase futbolista posee varios atributos y caracteristicas, dorsal, nombre, apodo y altura. 
//Crea dos futbolistas y muestra sus atr por pantalla
//Clase main 
//Libreria
#include <iostream>
#include "Futbolista.h"

//Nombre de espacio
using namespace std;
//Funcion

//Funcion main
int main()
{
    //Creamos los dos objetos de la clase Futbolista
    Futbolista fut1;
    Futbolista fut2;

    //Configuramos los atributos del futboliista 1
    fut1.setAltura(1.76f);
    fut1.setApodo("Delantero pichichi");
    fut1.setDorsal(7);
    fut1.setNombre("Amador");

    //Configuramos los atributos del futboliista 2
    fut2.setAltura(1.66f);
    fut2.setApodo("El molinillo");
    fut2.setDorsal(1);
    fut2.setNombre("Maxi");

    //Ahora mostramos por pantalla los atributos del futbolista 1
    cout << "Los atributos del futbolista 1 son: " << endl;
    cout << "Nombre : " << fut1.getNombre() << endl;
    cout << "Apodo : " << fut1.getApodo() << endl;
    cout << "Altura : " << fut1.getAltura() << endl;
    cout << "Dorsal : " << fut1.getDorsal() << endl;

    //Dejamos un salto de linea para mayor legibilidad
    cout << endl;

    //Ahora mostramos por pantalla los atributos del futbolista 2
    cout << "Los atributos del futbolista 2 son: " << endl;
    cout << "Nombre : " << fut2.getNombre() << endl;
    cout << "Apodo : " << fut2.getApodo() << endl;
    cout << "Altura : " << fut2.getAltura() << endl;
    cout << "Dorsal : " << fut2.getDorsal() << endl;






    return 0;
}
