/* Crear un programa que contenga dos array estático de 5 posiciones, pedimos al usuario 5 nombres y los introducimos al array, despues lkos mostrara por pantalla */
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
    string nombres[5];
    int tam = 0;
    int i = 0;
    int j = 0;


    //Vamos a meter en las variables tam el tamaño de cada array
    tam = sizeof(nombres) / sizeof(nombres[0]);

    //Vamos a imprimir por pantalla el tamaño del array
    cout << "El tamaño del array es: " << tam << endl;

    //Creamos el bucle mediante el cual va a inicializar cada posicion del primer array
    while (i < tam)
    {
        cout << "Introduce el nombre " << i << " del array: " << endl;
        cin >> nombres[i];
        i++;
    }   

    //Creamos el bucle que lo va a recorrer y lo va a ir imprimiendo por pantalla
    while (j < tam)
    {
        cout << "nombres[" << j << "] = " << nombres[j] << endl; //Contenido del primer array

        //Asignamos un salto de linea para mejor legibilidad
        cout << endl;        
        j++;
    }

    return 0;
}