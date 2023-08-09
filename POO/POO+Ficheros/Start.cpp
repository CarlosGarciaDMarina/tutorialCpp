// Libreria
#include <iostream>
#include "Persona.h"
#include <string>
#include <fstream>

// Namespace
using namespace std;

// Funciones
// Esta funcion comprueba si existe una direccio e intenta abrirla
bool existe(const string &direccion)
{
    // try-catch para gestionar errores
    try
    {
        // MEtemos la direccion en la clase que lee los archivos
        ifstream is(direccion);

        // Comprobamos si puede abrirse o no
        if (is.is_open())
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
    catch (...) // capturamos errores
    {
        cout << "Ha ocurrido un error.." << endl;
        return false;
    }
}

// Esta funcion sirve para crear en un fichero de texto
bool crearArchivo(const string &direccion)
{
    // Gestion de errores con try-catch
    try
    {
        // LLamamos a la funcion del fichero
        ofstream fs(direccion);

        // Escribimos en el fichero
        fs << "" << endl;

        // Cerramos la funcion
        fs.close();

        // Devolvemos true
        return true;
    }
    catch (...)
    {
        // Comunicamos que ha ocurrido un error
        cout << "Ha ocurrido un error." << endl;

        // Devolvemos false
        return false;
    }
}

// Esta funcion sirve para escribir en un fichero de texto
bool editarArchivo(const string &direccion, bool apend, const string &nombre, const string &apellidos, const string &ciudad, const string &nacionalidad, int edad)
{
    // Gestionamos los errores con try-catch
    try
    {
        /* Llamamos a la clase que trata con los archivos */
        ofstream of(direccion, ofstream::out | ofstream::app);

        // Escribimos
        of << "Nombre: " << nombre << endl;
        of << "Apellidos: " << apellidos << endl;
        of << "Ciudad: " << ciudad << endl;
        of << "Nacionalidad: " << nacionalidad << endl;
        of << "Edad: " << edad << endl;
        of << endl;

        // Cerramos
        of.close();

        return true;
    }
    catch (...)
    {
        cout << "Ha ocurrido un error inesperado." << endl;
        return false;
    }
}

// Esta funcion permite leer un fichero
/* el uso de const string& en la función leerArchivo es una elección que busca mejorar el rendimiento y la eficiencia,
mientras mantiene la integridad y compatibilidad con diferentes tipos de datos.*/
string leerArchivo(const string &direccion)
{
    // try-catch para gestionar errores
    try
    {
        /* Variables */
        string lineaLeida = "";
        string contenido = "";
        string error = "Ha ocurrido un error inesperado";

        ifstream is(direccion);

        while (getline(is, lineaLeida))
        {
            /* code */
            contenido += lineaLeida + "\n";
        }
        is.close(); // Cerramos

        return contenido;
    }
    catch (const exception &e)
    {
        string error = "Ha ocurrido un error inesperado";

        cout << "Ha ocurrido un error a la hora de leer el documento" << e.what() << endl;
        return error;
    }
}

// Esta funcion crea un archivo binario
bool creaBinario(const string &direccionBin)
{
    // Gestion de errores con try-catch
    try
    {
        /* Para abrir el fichero en modo de escritura usamos, si el fichero no existe lo va a crear, el app es el apend */
        fstream fout(direccionBin, ios::binary | ios::out);

        string datosFormateados = "";

        // Escribir los datos en el archivo
        fout.write(datosFormateados.c_str(), datosFormateados.size());

        fout.close();
        return true;
    }
    catch (const exception &e)
    {
        cout << "Ha ocurrido un error a la hora de leer el documento" << e.what() << endl;
        return false;
    }
}

// Esta funcion edita un archivo binario
bool editarBinario(const string &direccionBin, bool apend, const string &nombre, const string &apellidos, const string &ciudad, const string &nacionalidad, int edad)
{
    // Gestionamos erores con try-catch
    try
    {
        /* Para abrir el fichero en modo de escritura usamos, si el fichero no existe lo va a crear, el app es el apend */
        fstream fout(direccionBin, ios::binary | ios::out | ios::app);

        string datosFormateados = "Nombre: " + nombre + "\nApellidos: " + apellidos + "\nCiudad: " + ciudad + "\nNacionalidad: " + nacionalidad + "\nEdad: " + to_string(edad) + "\n";

        // Escribir los datos en el archivo
        fout.write(datosFormateados.c_str(), datosFormateados.size());

        fout.close();

        return true;
    }
    catch (const exception &e)
    {
        cout << "Ha ocurrido un error a la hora de leer el documento" << e.what() << endl;
        return false;
    }
}

// Esta funcion lee un archivo binario

// Funcion main
int main(int argc, char const *argv[])
{
    // Variables
    int menu = 0;
    string respuesta = "";
    string direccion = "D:/ProyectosJava/POO/prueba/FicheroCPP.txt";
    string direccionBin = "D:/ProyectosJava/POO/prueba/FicheroBinCPP.bin";
    bool apend = true;

    // Creamos los objetos
    Persona p("Luna", "Himemori", "McCandyKingdom", "Japan", 11);
    Persona p2("Kanata", "Amane", "Sora", "Japan", 12);
    Persona p3("Pekora", "Usada", "Pekoland", "Japan", 13);

    // Hacemos el loop para tener el menu
    do
    {
        cout << "|-------------------------------|" << endl;
        cout << "|0. Salir del programa.         |" << endl;
        cout << "|1. Crear o editar fichero.     |" << endl;
        cout << "|2. Leer fichero.               |" << endl;
        cout << "|3. Crear o editar fichero bin. |" << endl;
        cout << "|4. Leer un fichero bin.        |" << endl;
        cout << "|-------------------------------|" << endl;
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

            // Comprobamos si el fichero existe
            if (existe(direccion))
            {
                // SI el fichero existe editamos
                editarArchivo(direccion, apend, p.getNombre(), p.getApellidos(), p.getCiudad(), p.getNacionalidad(), p.getEdad());

                // Informamos
                cout << "El fichero ha sido editado con exito." << endl;
            }
            else
            {
                // Si el fichero NO existe lo creamos y luego lo editamos
                // Llamamos a la funcion para crearlo
                crearArchivo(direccion);

                // Informamos
                cout << "El fichero se ha creado con exito." << endl;

                // Llamamos a la funcion para editarlo
                editarArchivo(direccion, apend, p.getNombre(), p.getApellidos(), p.getCiudad(), p.getNacionalidad(), p.getEdad());

                // Informamos
                cout << "El fichero ha sido editado con exito." << endl;
            }

            break;
        case 2:
            /* Leer un fichero */
            /* Leemos */
            if (existe(direccion))
            {
                /* SI existe leemos */
                respuesta = leerArchivo(direccion);

                cout << "Contenido del archivo: " << endl;
                cout << endl;
                cout << respuesta << endl;
            }
            else
            {
                /* Si NO existe */
                cout << "No hay ningun archivo que podamos leer." << endl;
            }

            break;
        case 3:
            /* Crear o editar fichero binario */
            if (existe(direccionBin))
            {
                /* SI existe lo editamos */
                editarBinario(direccionBin, apend, p.getNombre(), p.getApellidos(), p.getCiudad(), p.getNacionalidad(), p.getEdad());
                cout << "El fichero ha sido editado con exito." << endl;
            }
            else
            {
                /* Si NO existe */
                creaBinario(direccionBin);
                cout << "El fichero se ha creado con exito." << endl;

                // Si el fichero NO existe no pasa nada porque lo creará
                editarBinario(direccionBin, apend, p.getNombre(), p.getApellidos(), p.getCiudad(), p.getNacionalidad(), p.getEdad());
                cout << "El fichero ha sido editado con exito." << endl;
            }
            break;
        case 4:
            /* Leer un fichero binario */
            if (existe(direccion))
            {
                /* SI existe */
            }
            else
            {
                /* Si NO existe */
                cout << "No hay ningun archivo que podamos leer." << endl;
            }
            break;
        default:
            cout << "Has introducido un caracter invalido" << endl;
            break;
        }
    } while ((menu < 0) || (menu > 5));

    return 0;
}
