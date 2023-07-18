/* Crear un programa que contenga dos array estático de 10 posiciones, rellenalo con lo que quieras, el programa recorrera las posiciones del array y si encuentra una que este vacia 
mostrara un mensaje que dirá "El array tiene huecos vacios", este mensaje solo podrá aparecer una vez aunque haya mas de un hueco vacio, y, en caso de que no tenga huecos vacios
dira que el array esta lleno al completo. */
//Librerias
#include <iostream>
#include <array>

//Using
using namespace std;

//Funciones

//Funcion main
int main()
{
    //Variables
    string peliculas[10];
    peliculas[0] = "Matrix";
    peliculas[1] = "El planeta de los simios";
    peliculas[2] = "Sounds of freedom";
    peliculas[3] = "";
    peliculas[4] = "Dos rubias de pelo en pecho";
    peliculas[5] = "Scarface";
    peliculas[6] = "El padrino";
    peliculas[7] = "Blade";
    peliculas[8] = "";
    peliculas[9] = "The lord of the rings";
    int tam = 0;
    int i = 0;
    bool hueco = false;

    //Vamos a meter en las variables tam el tamaño de cada array
    tam = sizeof(peliculas) / sizeof(peliculas[0]);

    //Vamos a imprimir por pantalla el tamaño del array
    cout << "El tamaño del array es: " << tam << endl;

    //Creamos el bucle que lo va a recorrer y lo va a ir imprimiendo por pantalla
    while (i<tam)
    {
        if (peliculas[i].empty())
        {
            //Si encuentra un mensaje en blanco hueco se volverá true
            hueco = true;            
        }
     i++;
    }
    //Creamos el condicional que, dependiendo de si hueco es true o false, dira si hay huecos o no los hay.
    if (hueco)
    {
        /* Si al menos hay un hueco imprimira este mensaje. */
        cout << "El array al menos tiene un hueco en blanco." << endl;
    }
    else
    {
        /* Si no hay huecos es porque esta al completo. */
        cout << "El array esta al completo. " << endl;
    }
    
    return 0;
}