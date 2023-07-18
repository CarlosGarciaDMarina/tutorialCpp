/* Crear un programa que contenga un array estático de 10 posiciones, el programa debera inicializar todas las posiciones del array en -1 */
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
    int lista[10];
    int tam = 0;
    int i = 0;
    int j = 0;

    //Vamos a meter en la variable tam el tamaño del array
    tam = sizeof(lista) / sizeof(lista[0]);

    //Vamos a imprimir por pantalla el tamaño del array
    cout << "El tamaño del array es: " << tam << endl;

    //Creamos el bucle mediante el cual va a inicializar cada posicion del array en -1
    while (i < tam)
    {
        lista[i] = -1;
        i++;
    }

    //Creamos el bucle que lo va a recorrer y lo va a ir imprimiendo por pantalla
    while (j < tam)
    {
        /* code */
        cout << "Lista[" << j << "] = " << lista[j] << endl;
        j++;
    }

    return 0;
}