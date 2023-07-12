
#include <iostream>
#include "Vehiculo.h"
#include "Coche.h"
#include "Moto.h"
#include "Concesionario.h"

using namespace std;

int main ()
{
    //Crear un objeto de la clase vehiculo
    Concesionario conce;
    //Vehiculo vehi; Lo tengo que comentar porque no se pueden crear objetos de una clase abstracta
    Coche c1;
    Moto m1;

    Coche c1conce;

    Coche c2(1000.0f, 250.0f);

    cout << "El precio del coche 2 es: " << c2.getPrecio() << endl;
    cout << "La velocidad del coche 2 es: " << c2.getVelocidad() << " KM/H" << endl;


    c1.setPrecio(40000.0f);
    cout << "El precio del Coche 1 es: " << c1.getPrecio() << endl;
    
    m1.setPrecio(12000.0f);
    cout << "El precio de la Moto 1 es: " << m1.getPrecio() << endl;
   
    conce.setC1(c1);
    conce.setM1(m1);

    cout << "El precio del coche 1 del concesionario es: " << conce.getC1().getPrecio() << endl;
    cout << "El precio de la moto 1 del concesionario es: " << conce.getM1().getPrecio() << endl;

    c1conce = conce.getC1();
    c1conce.setPrecio(44000.0f);
    conce.setC1(c1conce);

    cout << "El NUEVO precio del coche 1 del concesionario es: " << conce.getC1().getPrecio() << endl;


    return 0;
}