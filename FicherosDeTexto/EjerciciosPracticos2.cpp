// 1.- Crear un txt que se llame vocales donde las vocales estaran en orden inverso y a raiz de aqui hay que hacer un programa que las recorra y las devuelva el orden
// 2.- 
// 3.- 
// 4.- 
// Librerios
#include <iostream>
#include <fstream>

// Usos
using namespace std;

// Funciones
// Esta funcion escribe en un fichero de texto
string escribirFichero(string url, string texto)
{
    // Variable
    string resultado = "";

    // Llamamos a la funcion de escritura
    ofstream fs(url);
    // Escribimos en el fichero
    fs << texto << endl;
    // Cerramos la funcion de escritura
    fs.close();
    // Comunicamos que el ffichero se ha escrito correctamente
    resultado = "EL fichero se ha escrito correctamente";

    return resultado;
}

// Esta funcion lee un fichero de texto
string leerFicheros(string url)
{
    // Inicializamos las variables
    string lineaLeida = "";
    string totalLineas = "";
    string error = "";

    // Llamamos a la funcion de lectura
    ifstream fr(url);

    if (fr.is_open())
    {
        // Si fs se abre
        // Creamos un bucle que lea el contenido
        while (getline(fr, lineaLeida))
        {
            /* code */
            totalLineas = totalLineas + " " + lineaLeida;
        }
        // Cerramos la funcion
        fr.close();
        return totalLineas;
    }
    else
    {
        // si fs no se abre
        // Escribimos mensaje de error
        error = "Ruta equivocada";
        return error;
    }
}

// Funcion main
int main()
{
    //Ejercicio 1
    //Inicializamos las variables que vamos a necesitar
    int i = 0;
    int j = 0;
    string vocales = "uoiea";
    char orden[6] = "";
    ofstream of;
    ifstream fr;
    string url = "./info/vocales.txt";
    string resultado = "";

    //Vamos a hacer un bucle que recorra el string de las vocales y las guarde en el orden correcto
    for ( j = vocales.length() -1; j>=0; j--)
    {
        //guardamos en orden las vocales
        orden[i] = vocales[j];
        i++;
    }

    //Llamamos a la funcion de escritura
    escribirFichero(url, orden);

    //Almacenamos el resultado de leer fichero 
    resultado = leerFicheros(url);

    //Lo mostramos por pantalla
    cout << resultado << endl;


    return 0;
}