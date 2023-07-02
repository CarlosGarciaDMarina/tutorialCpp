//Vamos a crear un programa que te pida un numero y te devulva su tabla de multiplicar
#include <iostream>
using namespace std;
int main()
{
    //Creamos e inicilalizamos los strings
    int num1 = 0;
    int i = 0;

    //Pedimos al usuario el numero
    cout << "Dame un numero: " << endl;
    cin >> num1;

    //Establecemos que la condicion sea cuando i alcance 10
    while (i<=10)
    {
        //mostramos por pantalla que el numero introducido por el usuario se multiplique por i que recorrera desde 0 hasta 10
        cout << num1 * i << endl;
        i++;
    }
    

    return 0;
}