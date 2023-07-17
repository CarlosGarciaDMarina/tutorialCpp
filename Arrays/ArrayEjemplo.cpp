//Empezamos el tutorial sobre los array en C++, un array es una estructura de elementos del mismo tipo y la cantidad de ellos se indica en la propia definicion
//Todos los elementos tienen una posicion determinada, la primera empieza en la posicion 0 y la ultima con el tamaño -1 (por ejemplo si el tamaño es 5 seria 5-1 = 4)
//Librerias
#include <iostream>
#include <array> //Esta libreria la utilizamos para trabajar con arrays

//Usos
using namespace std;

//Funciones

//Funcion main
int main ()
{
    //Vamos a definir las variables
//    string nombreAlumno[5]; Podemos determinar con un numero fijo el numero de alumnos
    int i = 0;
    int tam = 0; //Vamos a utilizar esta variable para que almacene el tamaño del array
    int numAlumnos = 0;

    cout << "Introduce el numero de alumnos que vamos a almacenar: " << endl;
    cin >> numAlumnos;

    //Salto de linea para mejor legibilidad
    cout << endl;

    string nombreAlumno[numAlumnos]; // esto seria un array dinamico

/*
    Este fue el primer ejemplo que utilicé
    nombreAlumno[0]="Lucia";
    nombreAlumno[1]="Lucas";
    nombreAlumno[2]="Jaime";
    nombreAlumno[3]="Maria";
    nombreAlumno[4]="Cristina";
*/
    //Usamos la funcion sizeof para determinar el tamaño del array y lo metemos en tam
    tam = sizeof(nombreAlumno) / sizeof(nombreAlumno[0]);

    //Ahora lo imprimimos por la pantalla para ver que nos muestra
    cout << "El tamanio del array es: " << tam << endl;

    for ( i = 0; i < tam; i++)
    {
        //Pedimos al usuario que introduzca el nombre de los alumnos
        cout << "Introduce el nombre del alumno " << i+1 << " : " << endl;
        //Lo guardamos en el array 
        cin >> nombreAlumno[i];
    }
    
    //Para mostrar los nombres crearemos un bucle for, utilizamos tam para determinar el final del bucle
    for (i = 0; i < tam; i++)
    {
        //Imprimimos el resultado por pantalla
        cout << i+1 << ".- " << nombreAlumno[i] << endl;
    }
    
    return 0;
}