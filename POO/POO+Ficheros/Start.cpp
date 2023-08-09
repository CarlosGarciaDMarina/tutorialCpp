//Libreria
#include <iostream>
#include "Persona.h"
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
bool editarArchivo(string direccion, bool apend, string nombre, string apellidos, string ciudad, string nacionalidad, int edad)
{
    // Gestionamos los errores con try-catch
    try
    {
        /* Llamamos a la clase que trata con los archivos */
        ofstream of(direccion);

        //Escribimos 
        of << "Nombre: " << nombre << endl;
        of << "Apellidos: " << apellidos << endl;
        of << "Ciudad: " << ciudad << endl;
        of << "Nacionalidad: " << nacionalidad << endl;
        of << "Edad: " << edad << endl;
        of << endl;

        //Cerramos
        of.close();

        return true;
    }
    catch(...)
    {
        cout << "Ha ocurrido un error inesperado." << endl;
        return false;
    } 
}

//Funcion main
int main(int argc, char const *argv[])
{
    //Variables
    int menu = 0;
    string respuesta = "";
    string direccion = "D:/ProyectosJava/POO/prueba/FicheroCPP.txt";
    bool apend = true;

    //Creamos los objetos
    Persona p("Luna", "Himemori", "McCandyKingdom", "Japan", 11);
    Persona p2("Kanata", "Amane", "Sora", "Japan", 12);
    Persona p3("Pekora", "Usada", "Pekoland", "Japan", 13);

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

            //Comprobamos si el fichero existe            
            if (existe(direccion))
            {
                // SI el fichero existe editamos
                editarArchivo(direccion, apend, p.getNombre(), p.getApellidos(), p.getCiudad(), p.getNacionalidad(), p.getEdad());

                //Informamos
                cout << "El fichero ha sido editado con exito." << endl;
            }
            else
            {
                // Si el fichero NO existe lo creamos y luego lo editamos
                //Llamamos a la funcion para crearlo
                crearArchivo(direccion);

                //Informamos
                cout << "El fichero se ha creado con exito." << endl;

                //Llamamos a la funcion para editarlo
                editarArchivo(direccion, apend, p.getNombre(), p.getApellidos(), p.getCiudad(), p.getNacionalidad(), p.getEdad());

                //Informamos
                cout << "El fichero ha sido editado con exito." << endl;

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
