//Practicamos el bucle while en CPP
#include <iostream>

using namespace std;

int main()
{
    //Vamos a crear un algoritmo que ponga los numeros pares que hay entre 0 y el numero que le des
    //Inicializamos las variables en 0 
    int i = 0;
    int numUsuario = 0;

    //Pedimos al usuario que introduzca un numero mayor de 0
    cout << "Introduce un numero mayor de 0: " << endl;
    cin >> numUsuario;

    //Creamos la condicion para que funcione
    if (numUsuario > 0)
    {
        i= 0;
        //Creamos el bucle while y le ponemos una condicion
        while (i <= numUsuario)
        {
            cout << i << endl;
            i = i + 2;
        }
    }
    else
    {
        cout << " Valor erroneo" << endl;
    }


    return 0;
}