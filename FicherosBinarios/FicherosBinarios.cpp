//Tutorial sobre la gestion de los ficheros binarios en C++; Para saber el tipo de fichero binario que es se indican en los dos primeros bits
//Librerios
#include <iostream>
#include <fstream>

//Usos
using namespace std;

//Funciones





//Funcion principal
int main()
{
    //Inicializamos las variables con las que vamos a trabajar
    int i = 0;
    int numeroLeido = 0;

    //Para abrir el fichero en modo de escritura usamos, si el fichero no existe lo va a crear
    fstream fout("./info/datos.dat", ios::binary | ios::out);

    //Creamos un bucle para que esriba los numeros dentro del fichero
    for ( i = 200; i <= 400; i++)
    {
        // el char * es la manera de acceder a los bytes dentro de un fichero, le indica una posicion en la memorio con el &i, 
        // despues hay que indicarle el tamaño del dato con el tipo entre parentesis
        fout.write((char *) &i, sizeof(int));
    }
    fout.close(); //Hay que cerrar el fichero como siempre que trabajamos con ficheros

    //Ahora vamos a leer el fichero, cambiamos el ios::out por el ios::in para indicarles que es de entrada de datos
    fstream fin("./info/datos.dat", ios::binary | ios::in);
    
    //Con esta funcion nos posicionamos donde queramos en el fichero (posicion del fichero donde vamos a posicionarnos, posicion desde la cual partimos a contar)
    //fin.seekg(-6, ios::end);

    //Creamos un bucle para que lea los numeros dentro del fichero
    for ( i = 0; i <= 200; i++)
    {
        // el char * es la manera de acceder a los bytes dentro de un fichero, le indica una posicion en la memorio con el &numeroLeido (donde se va a almacenar), 
        // despues hay que indicarle el tamaño del dato con el tipo entre parentesis
        fin.read((char *) &numeroLeido, sizeof(int));

        //Mostramos por pantalla lo que hemos almacenado en numero leido
        cout << numeroLeido << endl;
    }    
    fin.close();//Cerramos el fichero despues trabajar con el 

    return 0;
}