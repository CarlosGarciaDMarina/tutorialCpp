//Empezamos los tutoriales de ficheros de texto
//Librerias
#include <iostream>
#include <fstream> //Para trabajar la entrada/salida estandar con los ficheros de texto

//Usos
using namespace std;

//Funciones


//Funcion main
int main()
{
    //Variables
    string lineaFicheroTexto ="";

    //clase para abrir el fichero en modo escritura primero la ruta donde se encuentra el texto y, para no machacar el texto se utiliza el append (ruta, append)
    ofstream fs("./info/ficherocpp.txt", ofstream::out | ofstream::app);

    //Para escribir utilizamos fs 
    fs << "He escrito en la línea 1 con c++" << endl;
    fs << "Esta es la segunda línea" <<endl;

    //Una vez escrito, cerramos el fichero
    fs.close();

    //Clase para abrir el fichero en modo lectura
    ifstream fr;
    fr.open("./info/ficherocpp.txt");

    //Tipico while para recorrer linea a linea, getLine sirve para capturar las lineas del fichero getline(donde lo metes, variable para almacenar)
    while (getline(fr, lineaFicheroTexto)) 
    {
        //Vamos mostrando por pantalla lo que hay escrito
        cout << lineaFicheroTexto << endl;
    }

    //Cerramos el fichero
    fr.close();