//Vamos a aprender a usar condicionales anidados
#include <iostream>

using namespace std;

int main()
{
    //Declaramos las variables
    string usuario = "";
    string pass = "";

    //Pedimos los datos al usuario
    cout << "Introduzca su usuario" << endl;
    cin >> usuario;
    cout << "Introduzca su contrasenia" << endl;
    cin >> pass;

    if (usuario == "cliente")
    {
        if (pass == "acc3s0")
        {
            cout << "Correcto, tienes acceso" << endl;
        }
        else
        {
            cout << "Lo siento, no tienes acceso" << endl;
        }
        
    }
    else
    {
        cout << "Lo siento, no tienes acceso" << endl;
    }



}