//Vamos a aprender a utilizar un bucle Do While en cpp
#include <iostream>

using namespace std;

int main()
{
    //Vamos a declarar las variables que necesitamos para hacer la practica
    string usuario = "";
    string pass = "";

    //Abrimos el bucle do
    do{
        //Pedimos al usuario sus credenciales
        cout << "Introduzca su usuario: " << endl;
        cin >> usuario;

        cout << "Introduzca su contraseña: " << endl;
        cin >> pass;

    }while( !((usuario == "cliente") && (pass == "acc3s0")));

    cout << "Correcto, tienes acceso." << endl;














    return 0;
}