//Ejercicio para introducior una palabra y voltearla con for
#include <iostream>

using namespace std;

int main()
{   
    //Declaramos las variables
    string cadena = "";
    int i =0;

    //Pedimos al usuario que introduzca una cadena
    cout << "Introduzca una cadena para darle la vuelta"<< endl;
    cin >> cadena;

    //Mostramos ela cadena introducida
    cout << "La cadena introducida es: " << cadena << endl;
    cout << "La cadena tiene una longitud de: " << cadena.length() << endl;
    cout << "El carácter en la posicion 1 es: " << cadena.at(0) << endl;

    //Mostramos letra a letra con bucle for
    for(i=0; i<cadena.length(); i++)
    {
        cout << cadena.at(i) << " - ";

    }

    cout << endl;

        for(i=cadena.length()-1; i>=0; i--)
    {
        cout << cadena.at(i) << " - ";

    }

    cout << endl;

    cout << "Subcadena: " << cadena.substr(1,4);











    return 0;
}