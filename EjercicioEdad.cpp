//Vamos a hacer un algoritmo que determine la edad que tienes en funcion de tu año de nacimiento, si introduces un valor erroneo devuelve error
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //Para realizar el ejercicio empezaremos inicializando las variables a 0 
    int anioNac= 0;
    int anioAct = 2023;
    int resultado = 0;

    //Imprimimos por pantalla la peticion y esperamos la respuesta del usuario para capturarla
    cout << "Introduce tu anio de nacimiento: " << endl;
    cin >> anioNac;

    //creamos la condicion
    if (anioNac == 0)
    {
        cout << "Error, debe introducir un valor superior a 0" << endl;
    }
    else
    {
        resultado = anioAct - anioNac;
        cout << "Usted nacio en " << anioNac << ", y como estamos en " << anioAct << " usted tiene " << resultado << " anios." << endl;
    }

    cout << endl;

    //Introducir un numero entre el rango de 0-10, si no esta en el rango lanza error
    int num1 = 0;

    //Pedimos al usuario que introduzca el numero
    cout << "Introduce un numero entre el rango de 1-10: " << endl;
    cin >> num1;

    //Creamos la condicion
    if ((num1 > 0) && (num1 < 11))
    {
    cout << "Correcto, el numero " << num1 << " esta dentro del rango mencionado." << endl;
    }
    else
    {
        cout << "Error, el numero " << num1 << " no esta dentro del rango mencionado" << endl;
    }

    cout << endl;

    //Variacion del mismo ejercicio
    int num2 = 0;

    //Pedimos al usuario que introduzca el numero
    cout << "Introduce un numero entre el rango de 1-10: " << endl;
    cin >> num2;

    //Creamos la condicion
    if ((num2 == 5) || (num2 == 10))
    {
    cout << "Acertaste, el numero " << num2 << " es uno de los numeros target" << endl;
    }
    else
    {
        cout << "Fallaste, el numero " << num2 << " no es uno de los numeros target" << endl;
    }

    cout << endl;

    //Variacion del mismo ejercicio
    int num3 = 0;

    //Pedimos al usuario que introduzca el numero
    cout << "Introduce un numero par: " << endl;
    cin >> num3;

    //Creamos la condicion
    if (num3%2 == 0)
    {
        cout << "Acertaste, el numero " << num3 << " es un par" << endl;
    }
    else
    {
        cout << "Fallaste, el numero " << num3 << " no es par" << endl;
    }


   



    return 0;
}