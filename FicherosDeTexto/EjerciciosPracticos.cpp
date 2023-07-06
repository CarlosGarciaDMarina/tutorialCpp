// 1.- Crea un programa que pide al usuario su nombre y apellido, despues crea un fichero con el nombre infousuario.txt y guardalo en lineas distintas
// 2.- Crear un programa que lea la info del fichero anterior preguntando al usuario la ruta, con control de errores.
// 3.- Crear un programa que pida el nombre y la ruta de un fichero para borrarlo
// 4.- Crear un programa que pida al usuario el nombre de un fichero para crearlo
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
    ofstream of;

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

    //Ejercicio 3
    //Variables
    string Borrar = "";
    string nombreBorrar = "";
    string rutaBorrar = "";
    string rutaCompleta = "";
    char rutaChar[100] = "";
    char comando[100] = "";
    int i = 0;

    //Preguntamos al usuario el nombre del fichero que desea borrar y la ruta
    cout << "Cual es el nombre del archivo que quieres borrar?" << endl;
    cin >> nombreBorrar;
    cout << "Cual es la ruta de ese fichero?" << endl;
    cin >> rutaBorrar;

    //Completamos la ruta que vamos a enviar a la funcion para borrar el fichero
    rutaCompleta = rutaBorrar + nombreBorrar;
    cout << rutaCompleta << endl;

    //Recordad que para borrar se utiliza ifstream
    fr.open(rutaCompleta); // Comprobamos si se puede abrir

    //Condicional
    if (fr.is_open())
    {
        //existe
        fr.close();

        //Creamos un bucle que va a guardar 
        for (i = 0; i < rutaCompleta.length(); i++)
        {
            //Almacenamos la ruta en el comando 
            rutaChar[i] = rutaCompleta[i];
        }
        //Borramos
        remove(rutaChar);
        cout << "El fichero ha sido borrado correctamente." << endl;
    }
    else 
    {
        //No existe
        cout << "El fichero no existe." << endl;
        cout << endl;
    }

    //Ejercicio 4
    //Inicializamos el nombre de las variables
    string nombreFichero = "";
    string rutaFichero = "";

    cout << "Dime el nombre del fichero que vamos a crear: " << endl;
    cin >> nombreFichero;

    //Añadimos el nombre del fichero a la ruta donde lo vamos a crea rpredeterminadamente
    rutaFichero = "./info/" + nombreFichero + ".txt";

    

    if (of.is_open())
    {
        //Si existe 
        of.close();
        //Informamos que el archivo existe
        cout << "El fichero ya existe." << endl;
        
    }
    else
    {
        //Abrimos para escribir
        of.open(rutaFichero);

        //Si no existe lo creamos
        of << "" <<endl;

        //Informamos que el archivo ha sido creado
        cout << "Elfichero ha sido creado correctamente." << endl;
        of.close();
    }
    
    
    










    return 0;
}