// Condicionales en C++
//Empezamos incluyendo las librerias 
#include <iostream>
#include <string>

using namespace std;

//Metodo main
int main()
{
    //Para esta practica vamos a necesitar una variable edad
    int edad = 0;

    //Preguntamos al usuario sus años
    cout << "¿Cuantos anios tienes?" << endl;
    
    //Capturamos su edad con cin 
    cin >> edad;

    //Creamos un condicional para determinar si el usuario es mayor de edad
    if (edad >= 18)
    {
        cout << "Usted es mayor de edad";
    }
    else
    {
        cout << "Usted no es mayor de edad";
    }








    return 0;
}
