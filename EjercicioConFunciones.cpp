//Vamos a hacer un ejercicio que nos de la nota media de entre 3 notas
//Librerias
#include <iostream>

//Usos
using namespace std;

//Funciones

float capturaNota(int posicion)
{
    //Inicializamos la variable
    float nota = 0.0f;

    //Pedimos al usuario la nota y la capturamos
    cout << "Introduce el valor de la nota " << posicion << ": " << endl;
    cin >> nota;

    //La devolvemos
    return nota;
}

//Esta funcion va a recoger 3 numeros y va a devolver la nota media
float notaMedia(float num1, float num2, float num3)
{
    //Inicializamos la variable
    float resultado =0.0f;

    //Realizamos la operacion
    resultado = (num1+num2+num3)/3;

    //Devolvemos el resultado
    return resultado;

}

//Funcion main
int main()
{
    //Inicializamos las variables que necesitemos
    float media = 0.0f;
    float nota1 = 0.0f;
    float nota2 = 0.0f;
    float nota3 = 0.0f;

    //Llamamos a la funcion y le pasamos los parametros
    nota1 = capturaNota(1);
    nota2 = capturaNota(2);
    nota3 = capturaNota(3);
    
    //Mostramos las notas para saber si se han almacenado bien
    cout << "La nota 1 del alumno es: " << nota1 << " la nota 2 es " << nota2 << " y la nota 3 es " << nota3 << endl;

    //Pasamos los datos a la funcion de la nota media
    media = notaMedia(nota1, nota2, nota3);

    //Mostramos por pantalla el resultado
    cout << "La nota media del alumno es: " << media << endl;


    return 0;
}