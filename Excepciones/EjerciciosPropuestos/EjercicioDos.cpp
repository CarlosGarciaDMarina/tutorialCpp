/*Crear un programa que cree dos variablesde tipo string llamadas numero 1S y numero2S. Despues las tenemos que convertir a tipo float para sumarlas y mostrar el resultado
por la consola. En caso de que el usuario no introduzca un valor numerico la consola mostrará un mensaje de error de tipos y el programa finalizará*/
//Librerias
#include <iostream>

//Using
using namespace std;

//Funcion

//Funcion main
int main()
{
    //Variables 
    float num1 = 0;
    float num2 = 0;
    float respuesta = 0; 

    //Vamos a encerrarlos en un try-catch para gestion de errores
    try
    {
        //Iniciamos las variables que pide el ejercicio
        string numero1S = "";
        string numero2S = "";  

        //Informamos al usuario de que las variables han sido creadas        
        cout << "Las variables han sido creadas." << endl;

        //Preguntamos al usaurio y lo almacenamos en una variable
        cout << "Introduce el primer numero para sumar: " << endl;
        cin >> numero1S;
        cout << "Introduce el segundo numero para sumar: " << endl;
        cin >> numero2S;

        //Convertimos los datos a float
        num1 = stof(numero1S);
        num2 = stof(numero2S);

        //Hacemos el calculo y lo almacenamos en la variable respuesta
        respuesta = num1 + num2;

        //Mostramos la respuesta
        cout << "La suma de los valores " << num1 << " y " << num2 << " es : " << respuesta << endl;
        
    }
    catch(...) //capturamos cualquier tipo de error inesperado
    {
        //Error
        cout << "Error inesperado." << endl;
    }

    return 0;
}