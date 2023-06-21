// Conversion de datos 
//Librerias
#include <iostream>
#include <string>

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


    return 0;
}