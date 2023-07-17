//Vamos a hablar de los strings en C++
//Librerias
#include <iostream>

//Usos
using namespace std;

//Funciones

//Funcion main
int main ()
{
    //Variable
    string nombre = "Mortadelo Gutierrez Alonso";
    string nombreDos = "";
    int pos = 8;
    int i = 0;

    cout << nombre[3] << endl; //Nos muestra la posicion 3 del string nombre

    cout << "El tamaño del string es: " << nombre.size() << endl; // la funcion size nos dice el tamaño que tiene un string

    //Si pos es menor que el tamaño del string nos dice que caracter hay en esa posicion, si no, da un mensaje de error
    if (pos < nombre.size())
    {
        //nos muestra la posicion de un caracter en el string
        cout << nombre[pos] << endl;
    }
    else
    {
        //Mensaje de error
        cout << "Posicion fuera de rango" << endl;
    }
    //Bucle que recorre el string
    for (i = 0; i < nombre.size(); i++)
    {
        /* nos muestra cada letra */
        cout << nombre[i] << endl;
    }

    //Tambien podemos acceder a partes ed un string o mejor dicho substring, cuando utilizamos la funcion substr(el primer parametro es el inicio y el ultimo es los que quieres coger)
    cout << "Una parte del string es: " << nombre.substr(1, 2) << endl;
    
    //La funcion find permite buscar la posicion de un conjnto de caracteres o un caracter en un string
    cout << "El conjunto de caracteres lon se encuentra en la posicion: " << nombre.find("lon") << endl;

    //La funcion getLine permite capturar informacion por parte del usuario, esta funcion puede recoger frases enteras mientras que cin solo recoge hasta el primer espacio en blanco
    //getLine tiene dos parametro el primero seria getLine(cin, variable) y es para capturar la informacion edl teclado y luego la variable donde lo vamos a almacenar
    cout << "Introduce tu nombre: " << endl;
    getline(cin, nombreDos);
    cout << "Su nombre es: " << nombreDos << endl;

    //Esta funcion nos dice si un string esta vacio
    if (nombreDos.empty())
    {
        /* code */
        cout << "Debe introducir un nombre de usuario." << endl;
    }
    else
    {
        /* code */
        cout << nombreDos << endl;
    }

    return 0;
}