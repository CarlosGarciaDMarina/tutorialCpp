//Vamos a hacer un tutorial de creacion de funciones en el lenguaje C++
#include <iostream>
using namespace std;

//Para declarar una funcion se hace fuera del apartado main y se declara con void
void areaCuadrado()
{
    float lado=0.0f;
    float area=0.0f;
    
    cout << "Introduzca el lado del cuadrado: " << endl;
    cin >> lado;

    //realizamos la operacion
    area = lado * lado;

    cout << "El area del cuadrado es: " << area << endl;

}

int main()
{
    //Este algoritmo me permite calcular el area de un cuadrado
    cout << "Inicio del programa principal" << endl;

    areaCuadrado();


    cout << "Fin del programa principal" << endl;





    return 0;
}
