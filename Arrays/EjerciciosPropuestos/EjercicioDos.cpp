/* Crear un programa que contenga dos array estático de 10 posiciones, el primer array contendra las posiciones del array tal como son 0-9, y tendra que asignarselas al segundo array
y despues de esto deberá mostrar el contenido del segundo array por pantalla */
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
    int primArray[10];
    int tamPrim = 0;
    int segArray[10];
    int tamSeg = 0;
    int i = 0;
    int j = 0;
    int k = 0;

    //Vamos a meter en las variables tam el tamaño de cada array
    tamPrim = sizeof(primArray) / sizeof(primArray[0]);
    tamSeg = sizeof(segArray) / sizeof(segArray[0]);

    //Vamos a imprimir por pantalla el tamaño del array
    cout << "El tamaño del primer array es: " << tamPrim << endl;
    cout << "El tamaño del segundo array es: " << tamSeg << endl;

    //Creamos el bucle mediante el cual va a inicializar cada posicion del primer array
    while (i < tamPrim)
    {
        primArray[i] = i;
        i++;
    }
    //Creamos el bucle mediante el cual el primer array va a introducir cada posicion del segundo array
    while (j < tamSeg)
    {
        segArray[j] = primArray[j];
        j++;
    }    

    //Creamos el bucle que lo va a recorrer y lo va a ir imprimiendo por pantalla
    while (k < tamSeg)
    {
        cout << "primArray[" << k << "] = " << primArray[k] << endl; //Contenido del primer array
        cout << "segArray[" << k << "] = " << segArray[k] << endl; //contenido del segundo array

        //Asignamos un salto de linea para mejor legibilidad
        cout << endl;        
        k++;
    }

    return 0;
}