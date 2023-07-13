/*
Ejercicio 2, crear un programa que contenga las clases Aula, silla y mesa.
Un aula esta compuesto por varias sillas y mesas, sus atributos son: Nombre y numero de aforo
Una mesa posee un atributo que indica el tipo(madera,hierro,...), numero de patas, ancho, largo y alto
Una silla posee un atributo que indica el tipo(madera,hierro,...), numero de patas, ancho, largo y alto
El aula poseera 4 sillas y 2 mesas. Las sillas de 4 patas, 10x10x1(ancho x largo x alto) y la mesa 20x20x2, los demas valores son indiferentes.
*/
//Librerias
#include <iostream>
#include "Silla.h"
#include "Mesa.h"
#include "Aula.h"

//Usos
using namespace std;

//Funciones

//Funcion main
int main()
{
    //Creamos los distintos objetos
    //Creamos el aula
    Aula aula; 

    //Creamos las sillas
    Silla si1; 
    Silla si2;
    Silla si3;
    Silla si4;

    //Creamos las mesas
    Mesa me1; 
    Mesa me2;

    //Dentro de Aula vamos a meter los objetos que nos pide el ejercicio
    aula.setMe1(me1);
    aula.setMe2(me2);
    aula.setSi1(si1);
    aula.setSi2(si2);
    aula.setSi3(si3);
    aula.setSi4(si4);

    //Mostramos las 4 sillas y sus valores predeterminados
    cout << "Silla 1" << endl;
    cout << "Numero de patas: " << aula.getSi1().getNumPatas() << endl;
    cout << "Ancho: " << aula.getSi1().getAncho() << endl;
    cout << "Largo: " << aula.getSi1().getLargo() << endl;
    cout << "Alto: " << aula.getSi1().getAlto() << endl;

    //Salto de linea para mejor legibilidad
    cout << endl;

    cout << "Silla 2" << endl;
    cout << "Numero de patas: " << aula.getSi2().getNumPatas() << endl;
    cout << "Ancho: " << aula.getSi2().getAncho() << endl;
    cout << "Largo: " << aula.getSi2().getLargo() << endl;
    cout << "Alto: " << aula.getSi2().getAlto() << endl;   

    //Salto de linea para mejor legibilidad
    cout << endl;

    cout << "Silla 3" << endl;
    cout << "Numero de patas: " << aula.getSi3().getNumPatas() << endl;
    cout << "Ancho: " << aula.getSi3().getAncho() << endl;
    cout << "Largo: " << aula.getSi3().getLargo() << endl;
    cout << "Alto: " << aula.getSi3().getAlto() << endl;  

    //Salto de linea para mejor legibilidad
    cout << endl;

    cout << "Silla 4" << endl;
    cout << "Numero de patas: " << aula.getSi4().getNumPatas() << endl;
    cout << "Ancho: " << aula.getSi4().getAncho() << endl;
    cout << "Largo: " << aula.getSi4().getLargo() << endl;
    cout << "Alto: " << aula.getSi4().getAlto() << endl;

    //Salto de linea para mejor legibilidad
    cout << endl;

    //Mostramos las 2 mesas y sus valores predeterminados
    cout << "Mesa 1" << endl;
    cout << "Ancho: " << aula.getMe1().getAncho() << endl;
    cout << "Largo: " << aula.getMe1().getLargo() << endl;
    cout << "Alto: " << aula.getMe1().getAlto() << endl;

    //Salto de linea para mejor legibilidad
    cout << endl;

    cout << "Mesa 2" << endl;
    cout << "Ancho: " << aula.getMe2().getAncho() << endl;
    cout << "Largo: " << aula.getMe2().getLargo() << endl;
    cout << "Alto: " << aula.getMe2().getAlto() << endl;


    return 0;
}