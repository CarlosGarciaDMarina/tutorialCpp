//Vamos a mostrar como hacer una funcion recursiva
//Librerias
#include <iostream>

//Usos
using namespace std;

//Funciones
//Siempre que llamemos recursivamente a una funcion tenemos que asegurarnos de que hay un punto donde termina la funcion
int cuentaAtras(int num)
{

    if (num == 0)
    {
        //Se termina la funcion
        return 1;
    }
    else
    {
        //Muestra el numero por pantalla
        cout << num << endl;

        //Al numero introducido le restamos 1 (de este modo irá restando números hasta que su valor sea 0 y vaya al if)
        num = num - 1;

        //Ejecutamos la funcion
        cuentaAtras(num);
    }


    return 1;
}

int main()
{
    //Inicializamos las variables
    int numero=0;

    //Pedimos al usuario un numero y lo guardamos
    cout << "Introduzca un numero para la cuenta atras: " << endl;
    cin >> numero;

    //Mostramos un texto para diferenciar en el resultado el numero introducido y el numero de inicio de la cuenta atras
    cout << "Inicia la cuenta atras: " << endl;

    //Mostramos la cuenta atras
    cuentaAtras(numero);


    return 0;
}