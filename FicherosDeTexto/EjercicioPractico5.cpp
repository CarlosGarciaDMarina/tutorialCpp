//Crear un programa que pida al usuario un numero entre 0 y 20, si no esta en este rango dara mensaje de error
//si el numero esta entre este rango creara un fichero desde el 1 hasta el numero introducido, si el numero es 5
//se crearan fichero1....fichero5. Si ya hay un fichero3 se machacará su contenido.
//Librerias
#include <iostream>
#include <fstream>

//usos
using namespace std;

//Funciones

//Funcion main
int main()
{
    //Variables
    int numero = 0;
    int i = 0;
    string error = "No se puede introducir un numero que no este en el rango mencionado";
    string ruta = "";
    ofstream fr; //Funcion de escritura

    //Pedimos al usuario que introduzca el numero
    cout << "Por favor, introduzca un numero mayor de 0 y menor de 21:" << endl;
    cin >> numero;

    //Creamos un condicional para manejar los posibles errores
    if ((numero > 0) && (numero < 21))
    {
        //Si esta en rango entramos en el bucle que va a crear los ficheros
        for (i = 0; i < numero; i++)
        {
            //Especificamos la ruta y decimos que a i le sumamos 1 para que no salga el fichero 0 y empiece a contar desde el 1
            ruta = "./info/FicheroCreado"+to_string(i+1)+".txt";

            //Abrimos la funcion de escritura en ficheros
            ofstream fr(ruta);

            //Escribimos
            fr << "";
        }
        //Informamos al usuario que los ficheros se han creado con exito
        cout << "Fichero creado con exito " << endl;
        fr.close(); //Cerramos la funcion de escritura
    }
    else
    {
        //Si no esta en rango lanza mensaje de error
        cout << error << endl;
    }
   return 0;
}