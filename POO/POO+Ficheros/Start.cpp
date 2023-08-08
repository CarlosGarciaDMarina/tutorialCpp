//Libreria
#include <iostream>
#include "Caballo.h"
#include <string>
#include <fstream>


//Namespace
using namespace std;

//Funciones
//Esta funcion comprueba si existe una direccio e intenta abrirla
bool existe(string direccion)
{
    //try-catch para gestionar errores
    try
    {
        //MEtemos la direccion en la clase que trata con los archivos
        ofstream fs(direccion);

        //Comprobamos si puede abrirse o no
        if (fs.is_open())
        {
            /* SI se abre */
            return true;
        }
        else
        {
            /* si NO se abre */
            return false;
        }       
    }
    catch(...) //capturamos errores
    {
        cout << "Ha ocurrido un error.." << endl;
        return false;
    }
    
}

//Esta funcion sirve para crear en un fichero de texto
bool crearArchivo(string direccion)
{
    //Gestion de errores con try-catch
    try
    {
        //LLamamos a la funcion del fichero
        ofstream fs(direccion);

        //Escribimos en el fichero
        fs << "" << endl;

        //Cerramos la funcion
        fs.close();
        
        //Devolvemos true
        return true;
    }
    catch(...)
    {
        //Comunicamos que ha ocurrido un error
        cout << "Ha ocurrido un error." << endl;

        //Devolvemos false
        return false;
    } 
}

//Esta funcion sirve para escribir en un fichero de texto
bool editarFichero(string direccion, string nombre)

//Funcion main
int main(int argc, char const *argv[])
{
    //Variables
    int menu = 0;
    string respuesta = "";
    string direccion = "D:/proyectosjava/pruebas/ficherocpp.txt";

    //Creamos los objetos
    Caballo ca1("Juan", 1);
    Caballo ca2("Pedro", 2);
    Caballo ca3("Cristina", 3);

    //Pruebas
    cout << "El nombre del primer caballo es: " << ca1.getNombre() << " y su id es: " << ca1.getId() << " y sus segundos es: " << ca1.getSegundos() << endl;
    cout << "El nombre del primer caballo es: " << ca2.getNombre() << " y su id es: " << ca2.getId() << " y sus segundos es: " << ca2.getSegundos() << endl;
    cout << "El nombre del primer caballo es: " << ca3.getNombre() << " y su id es: " << ca3.getId() << " y sus segundos es: " << ca3.getSegundos() << endl;

    //Hacemos el loop para tener el menu
    do
    {
        cout << "|---------------------------|" << endl;
        cout << "|0. Salir del programa.     |" << endl;
        cout << "|1. Crear o editar fichero. |" << endl;
        cout << "|2. Leer fichero.           |" << endl;
        cout << "|---------------------------|" << endl;
        cout << "|---------------------------|" << endl;
        cout << "|---------------------------|" << endl;
        cout << "Introduce una opcion del menu:" << endl;
        cin >> menu;

        switch (menu)
        {
        case 0:
            /* Salir */
            cout << "El programa ha finalizado." << endl;
            break;
        case 1:
            /* Crear o editar fichero */
            existe(direccion);

            if (existe(direccion))
            {
                // Si el fichero existe editamos

            }
            else
            {
                // Si el fichero no existe lo creamos y luego lo editamos
                //Llamamos a la funcion para crearlo
                crearArchivo(direccion);

                //Llamamos a la funcion para editarlo


            }
            

            



            break;
        case 2:
            /* Leer un fichero */
            break;            
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        default:
        cout << "Has introducido un caracter invalido" << endl;
            break;
        }
    } while ((menu<0)||(menu>5));
    








    return 0;
}
