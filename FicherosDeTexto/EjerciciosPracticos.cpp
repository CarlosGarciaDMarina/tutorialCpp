// 1.- Crea un programa que pide al usuario su nombre y apellido, despues crea un fichero con el nombre infousuario.txt y guardalo en lineas distintas
// 2.- Crear un programa que lea la info del fichero anterior preguntando al usuario la ruta, con control de errores.
// 3.-
// 4.-
// 5.-
// Librerios
#include <iostream>
#include <fstream>

// Usos
using namespace std;

// Funciones
// Esta funcion escribe en un fichero de texto
string escribirFichero(string url, string nombre, string apellido)
{
    // Variable
    string resultado = "";

    // Llamamos a la funcion de escritura
    ofstream fs(url);
    // Escribimos en el fichero
    fs << nombre << endl;
    fs << apellido << endl;
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
    // Ejercicio 1

    // Variables
    string nombre = "";
    string apellido = "";
    string lineas = "";
    string url = "./info/infousuario.txt";
    string resultado = "";

    // Pedimos al usuario su nombre y su apellido
    cout << "Como se llama ? " << endl;
    cin >> nombre;
    cout << "como se apellida ? " << endl;
    cin >> apellido;

    // Utilizamos la variable de lineas para pasarselo a la funcion
    lineas = nombre + " " + apellido;

    // Lo almacenamos en la variable resultado
    resultado = escribirFichero(url, nombre, apellido);

    // Lo mostramos por pantalla
    cout << resultado << endl;

    // Ejercicio 2
    // Variables
    string ruta = "";
    string resultado2 = "";
    ifstream fr;

    // Preguntamos al usuario la ruta del archivo
    cout << "Dame la ruta del fichero que quieras leer: " << endl;
    cin >> ruta;

    // almacenamos en resultado2
    resultado2 = leerFicheros(url);
    // Comprobamos si se puede abrir
    fr.open(url);
    // Si se abre leemos lo que hay en contenidoFichero, sino el fichero no existe
    if (fr.is_open())
    {
        // Ruta valida
        // Llamamos a la funcion
        cout << "El contenido del fichero es: " << endl;
        cout << resultado2 << endl;
        cout << endl;
    }
    else
    {
        // Error
        cout << "El fichero no existe." << endl;
    }








    return 0;
}