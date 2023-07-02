// Conversion de datos 
//Librerias
#include <iostream>
#include <string> //Necesaria para convertir string
#include <cmath> //Necesaria para mas precision en operaciones matematicas

using namespace std;

//Método main 
int main()
{
    int numero = 10;
    string edad = "56";
    float n1 = 10.0f;
    bool valorBooleano = false;

    //int to string
    edad = to_string(numero);

    //string to int
    numero = stoi(edad);

    //float to string
    edad = to_string(n1);

    //string to float
    n1 = stof(edad);

    //boolean to string recuerda que en C++ False es un 0 y True es un 1
    edad = to_string(valorBooleano);

    //string to boolean
    if (edad == "1")
    {
        valorBooleano = true;
    }
    else
    {
        valorBooleano = false;
    }

    //int to float
    n1 = (float) numero;

    //float to int con la libreria cmath siempre redondea de 5 para arriba sera un numero mas y de 4 hacia abajo se mantendra el numero, 
    //sin esta libreria no es tan preciso y tiende a mantener
    numero = (int) n1;
    numero = round(n1);// round es para redondear




    return 0;
}