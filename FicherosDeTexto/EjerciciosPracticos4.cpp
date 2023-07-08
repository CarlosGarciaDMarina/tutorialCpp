// 1.- crear una funcion que lea texto.txt, cambie cada vocal por un guion y despues lo guarde en un fichero llamado TextoModificado.txt

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
    string mensajeError = "Se ha producido un error al intentar abrir el fichero, compruebe si es un fichero existente.";
    ifstream fr(url);

    //Establecemos un if para control de errores
    if (fr.is_open())
    {
        //si se abre 
        //Ahora hacemos un bucle que recorra y almacene linea a linea
        while (getline(fr, lineaLeida))
        {
            //Mientras que haya lineas por leer las ira almacenando
            lineasTotales = lineasTotales + lineaLeida + "\n";
        }
        fr.close();
        return lineasTotales;
    }
    else
    {
        //Si no se abre mensaje de error
        return mensajeError;
    }
}

//Esta funcion recibe un string y lo que hace es transformar las vocales en - y, ademas, crea el fichero TextoModificiado.txt
string escribirFichero(string texto)
{
    //Inicializamos las variables que vamos a necesitar para trabajar
    string resultado = "El fichero se ha escrito correctamente.";
    string url = "./info/TextoModificado.txt";
    ofstream of(url);
    int i = 0;

    //Creamos un bucle que recorra cada letra del texto
    while (i < texto.length())
    {
        //establecemos un condicional que determine si hay una vocal la sustituya por un guion y sino mantenga la letra del texto original.
        if ((texto.at(i) == 'a') || (texto.at(i) == 'e') || (texto.at(i) == 'i') || (texto.at(i) == 'o') || (texto.at(i) == 'u'))
        {
            //sustituimos por guion
            of << "-"; 
        }
        else if ((texto.at(i) == 'A') || (texto.at(i) == 'E') || (texto.at(i) == 'I') || (texto.at(i) == 'O') || (texto.at(i) == 'U'))
        {
            //sustituimos por guion
            of << "-";
        }
        else
        {
            //mantenemos su letra
            of << texto.at(i);
        }
        //sumamos uno a la posicion para que avance
        i+=1;
    }
    //Cerramos el fichero
    of.close();
    //Devolvemos el resultado
    return resultado;
}


//Funcion main
int main()
{
    //Variables
    string url = "./info/texto.txt";
    string resultado = "";

    //lo almacenamos en la variable
    resultado = leerFichero(url);

    //Imprimimos el resultado
    cout << resultado << endl;

    //Llamamos a la funcion y le pasamos el resultado 
    escribirFichero(resultado);

    return 0;
}