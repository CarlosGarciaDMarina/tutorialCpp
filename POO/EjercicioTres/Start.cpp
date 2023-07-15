// 3.- Crear una clase Estadio y una clase CalculosMatematicos. 
// La clase Estadio cuyos atr son: nombre, numAsientos, preAsiento y ganancias.
// La clase CalculosMatematicos posee los metodos: sumas y multiplicaciones, a ambos hay que pasarles dos params de tipo float y devuelven el resultado de la operacion que proceda
// Crea un objeto de ambas clases y obten de la clase Estadio, el numero de asientos y el precio por asiento, y mediante la operacion multiplicacion calcula el precio y asignalo 
// Al atributo de ganancias.
//Librerias
#include <iostream>
#include "Estadio.h"
#include "CalculosMatematicos.h"

//Usos
using namespace std;


//Funciones


//Funcion principal
int main()
{

    //Variables
    float ganancias = 0.0f;

    //Objetos
    Estadio est1;
    CalculosMatematicos cal;
    
    //Setters
    est1.setNombre("Santiago Bernabeu");
    est1.setNumAsiento(86150);
    est1.setPreAsiento(45);
    est1.setGanancias(ganancias);

    //Impresion por pantalla para comprobar los getters
    cout << "Nombre: " << est1.getNombre() << endl;
    cout << "Numero de asientos: " << est1.getNumAsiento() << " asientos." << endl;
    cout << "Precio de asientos: " << est1.getPreAsiento() << "€" << endl;
    cout << "Ganancias: " << est1.getGanancias() << "€" << endl;

    //Para saber las ganancias del estadio multiplicamos el numero de asientos por el precio de asiento y lo guardamos en la variable resultado
    ganancias = cal.multiplicar(est1.getNumAsiento(), est1.getPreAsiento());
    
    //Ahora hacemos un set en las ganancias para saber si se ha guardado correctamente
    est1.setGanancias(ganancias);

    //Mostramos las nuevas ganancias para compararlas con las anteriores
    cout << "Ganancias despues de hacer el calculo: " << est1.getGanancias() << "€" << endl;

    return 0;
}
