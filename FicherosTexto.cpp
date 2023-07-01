//Explicacion ficheros de texto
//Librerias
#include <iostream>
#include <fstream> //Para trabajar la entrada/salida estandar con los ficheros de texto

//Usos
using namespace std;

//Funciones
void escribirTexto (string url, bool apend)
{   
    string cadenaIntro = "";
    cout << apend << endl;

    if (apend == false)
    {
        /* code */
        ofstream fs (url);
        cout << "Lo que escribas machacara lo que ya este escrito, Que quieres escribir en el fichero ? " << endl;
        getline(cin, cadenaIntro);

        fs << cadenaIntro << endl;
        fs.close();
    }
    else
    {
        /* code */
        ofstream fs (url, ofstream::out | ofstream::app);
        cout << "Que linea quieres añadir al fichero? " << endl;
        getline(cin, cadenaIntro);

        fs << cadenaIntro << endl;
        fs.close();
    }
    
    /*
    //clase para abrir el fichero en modo escritura primero la ruta donde se encuentra el texto y, para no machacar el texto se utiliza el append (ruta, append)
    ofstream fs("./info/ficherocpp.txt", ofstream::out | ofstream::app);

    //Para escribir utilizamos fs 
    fs << "He escrito en la línea 1 con c++" << endl;
    fs << "Esta es la segunda línea" <<endl;

    //Una vez escrito, cerramos el fichero
    fs.close();
    */
}

//Funcion main
int main()
{
    string lineaFicheroTexto = "";
    string url = "./info/ficherocpp.txt";
    bool apend = true;

    escribirTexto(url, apend);

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
    











    return 0;
}