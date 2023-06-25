//Crear un programa que pida al usuario 3 numeros que sumen 50
#include <iostream>

using namespace std;

int main()
{
    //Primero creamos las variables que vamos a necesitar
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int suma = 0;

    //Hacemos un cout para pedirle al usuario 3 numeros y guardar sus respuestas
    cout << "Dame 3 numeros entre 1 y 50" << endl;
    cout << "Dame el primero" << endl;
    cin >> num1;
    cout << "Dame el segundo" << endl;
    cin >> num2;
    cout << "Dame el tercero" << endl;
    cin >> num3;

    //Realizamos la operacion
    suma = num1 + num2 + num3;
    
    //Creamos las condiciones para el ejercicio
    if (suma<50)
    {
        cout << "Uy, has quedado por debajo, tu numero es " << suma << " y el objetivo era 50." << endl;
    }
    else if (suma==50)
    {
        cout << "Acertaste!!! tu numero es " << suma << " y el objetivo era 50." << endl;        
    }
    else
    {
        cout << "Te has pasado, tu numero es " << suma << " y el objetivo era 50." << endl;
    }
    
     
    return 0;
}