/*Crear un array dinamico que pregunte al usuario el numero de futbolistas que va a almacenar, se los pida y los muestre por pantalla*/
#include <iostream>
#include <array>

//Using
using namespace std;

//Funciones

//Funcion main
int main()
{
    //Variables
    string respuesta = "";
    int numFutbolistas = 0;
    int tam = 0;
    int i = 0;
    int j = 0;

    //Preguntamos al usuario y almacenamos en la variable
    cout << "Cuantos futbolistas quieres almacenar?" << endl;
    cin >> numFutbolistas;

    //Creamos el array y asignamos la respuesta del usuario como numero de huecos
    string futbolistas[numFutbolistas];

    //Vamos a meter en las variables tam el tamaño de cada array
    tam = sizeof(futbolistas) / sizeof(futbolistas[0]);

    //Vamos a imprimir por pantalla el tamaño del array
    cout << "El tamanio del array es: " << tam << endl;

    //Decimos al usuario que vamos a pedirle los nombres de 5 futbolistas
    cout << "Dame el nombre de tus " << tam << " futbolistas favoritos : " << endl;

    //Creamos el bucle que lo va a recorrer y lo va a ir imprimiendo por pantalla
    while (i<tam)
    {   
        //Creamos un contador para indicarle al usuario en que futbolista esta
        int contador = 0;

        //Mostramos por pantalla la pregunta junto al contador que ayudara al usuario a posicionarse en que futbolista se enduentra y almacenamos la respuesta
        cout << "Introduce el nombre del futbolista numero " << contador + 1 << ": " << endl;
        cin >> respuesta;

        //almacenamos las respuestas dentro del array
        futbolistas[i] = respuesta;
        //Hacemos avanzar contador para que siga sumando posiciones y tambien la variable i para que el bucle continue
        contador++;
        i++;
    }

    //Creamos un bucle que va a leer futbolistas
    while (j<tam)
    {
        cout << "Futbolista[" << j <<"] = " << futbolistas[j] << endl;
        j++;
    }
    
    
    return 0;
}