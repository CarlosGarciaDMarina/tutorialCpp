
#include <iostream>
#include "Vehiculo.h"

using namespace std;

int main ()
{
    //Crear un objeto de la clase vehiculo
    Vehiculo vehi;
    cout << "El precio del vehiculo es: " << vehi.getPrecio() << endl;
    /*
    vehi.setPrecio(30000.0f);
    cout << "El nuevo precio del vehiculo es: " << vehi.getPrecio() << endl;

    cout << "Uso de la clase vehiculo" << endl;
    */

    return 0;
}