//Tutorial sobre la gestion de los ficheros binarios en C++
//Librerios
#include <iostream>
#include <fstream>

//Usos
using namespace std;

//Funciones





//Funcion principal
int main()
{
    /*Ahora vamos a hacer lo mismo pero con letras*/
    //Inicializamos las variables
    char letra = '0';
    char letraLeida = '0';

    //Para abrir el fichero en modo de escritura usamos, si el fichero no existe lo va a crear
    fstream fout("./info/datos.dat", ios::binary | ios::out);

    //Creamos un bucle para que esriba los letras dentro del fichero
    for ( letra = 'a'; letra <= 'z'; letra++)
    {
        // el char * es la manera de acceder a los bytes dentro de un fichero, le indica una posicion en la memorio con el &i, 
        // despues hay que indicarle el tamaño del dato con el tipo entre parentesis
        fout.write((char *) &letra, sizeof(char));

    }
    fout.close(); //Hay que cerrar el fichero como siempre que trabajamos con ficheros

    //Ahora vamos a leer el fichero, cambiamos el ios::out por el ios::in para indicarles que es de entrada de datos
    fstream fin("./info/datos.dat", ios::binary | ios::in);

    //Creamos un bucle para que lea los numeros dentro del fichero
   for ( letra = 'a'; letra <= 'z'; letra++)
    {
        // el char * es la manera de acceder a los bytes dentro de un fichero, le indica una posicion en la memorio con el &numeroLeido (donde se va a almacenar), 
        // despues hay que indicarle el tamaño del dato con el tipo entre parentesis
        fin.read((char *) &letraLeida, sizeof(char));

        //Mostramos por pantalla lo que hemos almacenado en numero leido
        cout << letraLeida << endl;

    }    
    fin.close();//Cerramos el fichero despues trabajar con el     
    
    
    
    
    
    
    
    
    
    
    return 0;
}