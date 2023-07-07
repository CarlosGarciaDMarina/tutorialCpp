// 1.- crear una funcion que lea texto.txt, y te muestre:
//Numero de vocales
//Numero de letras totales
//Numero de palabras
//Numero de lineas
// Librerios
#include <iostream>
#include <fstream>
#include <cstring>
#include <string.h>

// Usos
using namespace std;

// Funciones
//Esta funcion sirve para leer un fichero a traves de una url
string leerFichero(string url)
{
    //Variables
    string lineaLeida = "";
    string lineasTotales = "";
    string mensajeError = "Fichero inexsistente.";

    //Llamamos a la funcion para leer
    ifstream fr(url);

    //Creamos los condicionales
    if (fr.is_open())
    {
        //Hacemos un bucle que va a recorrer linea a linea para ir leyendo
        while (getline(fr, lineaLeida))
        {
            //Vamos leyendo las lineas
            lineasTotales = lineasTotales + lineaLeida + "\n"; //la   \n  es un salto de linea
        }
        fr.close();//Cerramos fr
        return lineasTotales;//Devolvemos lo que hemos capturado
    }
    else
    {
        //Mensaje de error
        return mensajeError;
    }
}

//Funcion main
int main()
{
    //Variables
    string url = "./info/texto.txt";
    string resultado = "";
    string linea = "";
    int i = 0;
    int numVocales = 0;
    int numLetras = 0;
    int numPalabras = 0;
    int numLineas = 0;

    resultado = leerFichero(url);

    cout << resultado << endl;

    while (i<resultado.length() )
    {
        //Vamos a contar una vocal y almacenarla
        if ((resultado.at(i) == 'a') || (resultado.at(i) == 'e') || (resultado.at(i) == 'i') || (resultado.at(i) == 'o') || (resultado.at(i) == 'u'))
        {
            //Si es una vocal minuscula sumamos 1
            numVocales = numVocales +1;
        }
        else if((resultado.at(i) == 'A') || (resultado.at(i) == 'E') || (resultado.at(i) == 'I') || (resultado.at(i) == 'O') || (resultado.at(i) == 'U'))
        {
            //Si es una vocal mayus sumamos 1
            numVocales = numVocales +1;

        }
        else
        {
            //si no es una vocal no sumamos nada
            numVocales = numVocales + 0;
        }

        //En este condicional vamos a contar todas las letras que tiene
        if (resultado.at(i) == ' ')
        {
            //Todos los espacios no suman nada
            numLetras = numLetras + 0;

        }
        else
        {
            //Todo lo que no sea un espacio suma 1
            numLetras = numLetras + 1;

        }

        //En este condicional vamos a contar el numero de palabras que hay 
        if ((resultado.at(i) == ' ') || (resultado.at(i) == '\n'))
        {
            //Todos los espacios no suman nada
            numPalabras = numPalabras + 1;

        }
        else
        {
            //Todo lo que no sea un espacio suma 1
            numPalabras = numPalabras + 0;

        }

        //En este condicional vamos a contar todas los saltos de linea que hay
        if (resultado.at(i) == '\n')
        {
            //Todos los saltos de lineas suman 1
            numLineas = numLineas + 1;

        }
        else
        {
            //Todo lo que no sea un salto de linea no suma nada
            numLineas = numLineas + 0;

        }

        i+=1;
    }

    cout << "Numero de vocales: " << numVocales << endl;
    cout << "Numero de letras: " << numLetras << endl;
    cout << "Numero de palabras: " << numPalabras << endl;
    cout << "Numero de lineas: " << numLineas << endl;

    return 0;
}