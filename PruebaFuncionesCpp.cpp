//Librerias
#include <iostream>
#include <string.h>
#include <cstring>

//Usos
using namespace std;

//Funciones
string convertirMayus(string cad)
{
    int longitud = cad.length();

    for (int i = 0; i < longitud; i++)
    {
        cad[i] = toupper(cad[i]);
    }
        
    return cad;

}

//Funcion principal
int main()
{
    //Para convertir a mayuscula
    //Variables
    char cadena[] = "carlos";
    strupr(cadena);

    //Mostramos resultado por pantalla
    cout<<cadena<<endl;
    cout<<endl;

    //para convertir a minucula
    //Variables
    char cadenaMinus[] = "CARLOS";
    strlwr(cadenaMinus);

    //Mostramos por pantalla
    cout<<cadenaMinus<<endl;
    cout<<endl;

    //Variables
    string cadenaIntro = "";
    string resultado1 = "";

    //Mostramos por pantalla
    cout << "Introduce una cadena: "<< endl;
    //La funcion getline(cin, string) recoge strings largos
    getline(cin, cadenaIntro);

    //Almacenamos en resultado1
    resultado1= convertirMayus(cadenaIntro);

    //Mostramos por pantalla
    cout << resultado1 << endl;








    return 0;
}