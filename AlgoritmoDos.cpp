//Calcular cuantos minutos tarda un vehiculo en recorrer una distancia determinada; Tiempo = (Distancia/Velocidad)*60
//Librerias
#include <iostream>
#include <cmath>

using namespace std;

//Metodo main 
int main()
{
    //Vamos a realizar un ejercicio que calcula cuantos minutos tarda un vehiculo en recorrer una distancia determinada por el usuaario
    //Creamos las variables
    float velocidad = 0.0f;
    float distancia = 0.0f;
    float tiempo = 0.0f;

    //Abrimos un cout para preguntarle al usuario y el cin para capturar su respuesta
    cout << "Distancia que hay que recorrer: " << endl;
    cin >> distancia;
    cout << "Velocidad a la que va a ir: " << endl;
    cin >> velocidad;

    //Realizamos la operacion 
    tiempo = (distancia/velocidad)*60;

    //Imprimimos el resultado en la pantalla
    cout << "El tiempo que va a tardar el usuario en recorrer " << distancia << " a la velocidad de " << velocidad << " es : " << tiempo;













    return 0;

}