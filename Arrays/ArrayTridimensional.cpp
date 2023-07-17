//Por ultimo vamos a ver los arrays tridimensionales en C++ con un ejemplo sencillo
//Librerias
#include <iostream>
#include <array> //Esta libreria la utilizamos para trabajar con arrays

//Usos
using namespace std;

//Funciones

//Funcion main
int main ()
{
    //Variables
    //Estas variables las vamos a utilizar para contabilizar los bucles anidados
    int alumno = 0;
    int asignatura = 0;
    int trimestre = 0;

    //Estas variables las vamos a utilizar para llenar los campos del array tridimensional
    int numAlumnos = 2;
    int numAsignaturas = 3;
    int trimestres = 4;

    //Para declarar un array tridimensional vamos a poner un corchete adicional al del array bidimensional, contiene elementos organizados en 3 dimensiones: Bloques, columnas y filas.
    //Inicializamos el array y asinamos sus distintos valores
    int notasAlumnos[numAlumnos][numAsignaturas][trimestres];

    /* En este ejemplo visual cada numero equivale a una posicion en el "tablero" del array
      0   1   2   3
    0 - | - | - | - |
    1 - | - | - | - |   0
    2 - | - | - | - |
    ----|---|---|---| (Esta linea separa los dos bloques)
      0   1   2   3 
    0 - | - | - | - |
    1 - | - | - | - |     1 
    2 - | - | - | - |
    ----|---|---|---|  
    */

    //Ahora vamos a declarar un bucle for que nos va a ir pidiendo las distintas notas de los alumnos
    for (alumno = 0; alumno < numAlumnos; alumno++)
    {
        for (asignatura = 0; asignatura < numAsignaturas; asignatura++)
        {
            for (trimestre = 0; trimestre < trimestres; trimestre++)
            {
                //Pedimos al usuario las notas de los alumnos
                cout << "Dame la nota del alumno " << alumno << " en la asignatura " << asignatura << " del trimestre " << trimestre << " : " << endl;
                //Las almacenamos en el array
                cin >> notasAlumnos[alumno][asignatura][trimestre];
                
            }
            
        }
    
    }

    //Este bucle va a recorrer el array e ira imprimiendo los distintos resultados
    for ( alumno = 0; alumno < numAlumnos; alumno++)
    {
        for (asignatura = 0; asignatura < numAsignaturas; asignatura++)
        {
            for (trimestre = 0; trimestre < trimestres; trimestre++)
            {
                //Las mostramos
                cout << notasAlumnos[alumno][asignatura][trimestre] << " | ";
            }
            //Salto de linea por legibilidad
            cout << endl;
        }
        //Linea que marca el salto entre bloques
        cout << "--|---|---|---|" << endl;
    }
    
    return 0;
}