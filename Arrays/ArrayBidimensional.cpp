//Vamos a crear un array bidimensional en C++
//Librerias
#include <iostream>
#include <array> //Esta libreria la utilizamos para trabajar con arrays

//Usos
using namespace std;

//Funciones

//Funcion main
int main ()
{
    //Para declarar un array bidimensional vamos a colocar en su definicion otro corchete. El primer corchete define el numero de filas y el segundo el numero de columnas
    //las posiciones empiezan siempre por 0
    float notasAlumnos[3][4];

    /* notasAlumnos[3][4]
          0 1 2 3 
        0|-|-|-|-|
        1|-|-|-|-|
        2|-|-|-|-|
    */

    //Para recorrelos necesitaremos dos contadores para hacer un bucle anidado
    int i = 0; //Recorrera el numero de filas
    int j = 0; //Recorrera el numero de columnas

    //Este es el primer bucle que necesitare
    for ( i = 0; i < 3; i++)
    {
        /* Ahora creamos otro bucle anidado */
        for ( j = 0; j < 4; j++)
        {
            //Pedimos al usuario que introduzca el nombre de los alumnos
            cout << "Introduce la nota del alumno " << i << ", " << j << " : " << endl;
            //Lo guardamos en el array 
            cin >> notasAlumnos[i][j];
        }
        
    }

    //Ahora replicamos el bucle para que vaya leyendo las notas
    for ( i = 0; i < 3; i++)
    {
        /* Creamos otro bucle anidado */
        for ( j = 0; j < 4; j++)
        {
            //mostramos las notas y ponemos una barra para hacer la tabla mas visual
            cout << notasAlumnos[i][j] << "|";
        }
        //Añadimos un salto de linea para mejorar la legibilidad
        cout << endl;
        
    }
    
    return 0;
}