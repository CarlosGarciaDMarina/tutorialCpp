//Crear un programa que almacene precios de diferentes productos.
/*Asigna a precio3 la suma de precio1 y precio2; asigna a precio4 la multiplicacion de precio3 y precio4; asigna a precio3 la resta de precio4 menos precio2;
*asigna a precio4 la resta de precio4 -1*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Creacion de las variables y le damos un valor inicial
    float precio1 = 12.2f;
    float precio2 = 4.5f;
    float precio3 = 7.8f;
    float precio4 = 26.4f;

    //Ajustamos su valor segun el enunciado
    precio3 = precio1 + precio2;
    precio4 = precio3 * precio4;
    precio3 = precio4 - precio2;
    precio4 = precio4 - 1;

    cout << "El resultado de los diferentes precios es: " << precio1 << " , " << precio2 << " , " << precio3 << " , " << precio4 << endl;

    cout << endl;

    //Ejercicio con strings, declaramos strings diferentes y las mostramos por pantalla
    //Creamos las strings y les damos un valor inicial
    string nombre = "Juan";
    string apellido = "Alvarez";
    int edad = 42;
    float altura = 1.75f;

    cout << "Nombre: " << nombre << endl << "Apellido es: " << apellido << endl << "Edad es: " << edad << endl << "Altura es: " << altura << endl;

    //Ejercicio con algoritmos simples, crear un programa que muestre la edad de una persona a traves de su año de nacimiento
    //inicializmos las variables que vamos a usar
    int anioNac = 0;
    int anioAct = 2023;

    //Le pedimos los datos y los almacenamos en la variable
    cout << "Introduzca su anio de nacimiento: " << endl;
    cin >> anioNac;

    //Realizamos la formula
    int edadUser = anioAct - anioNac;

    //Mostramos por pantalla su edad actual
    cout << "Usted nacio en el anio " << anioNac << " y estamos en el anio " << anioAct << " por lo que usted tiene " << edadUser << " anios." << endl;
    cout << endl;

    //Ejercicio de conversion de datos.
    //Creamos las variables
    string num1 = "34";
    int num2 = 2;
    float num3 = 23.5;

    int suma = 0;
    int valor1 = 0;
    int valor2 = 0;

    //Realizamos los diferentes castings
    //Primer casting de float a int
    valor1 = (int) num3;
    valor2 = stoi(num1);
    suma = valor1 + num2 + valor2;

    cout << "El resultado de sumar los numeros: " << valor2 << ", " << num2 << ", " << valor1 << " es: " << suma << endl;

    //Creamos un programa que obtenga un numero entero a partir de los siguientes parametros
    //inicializamos las variables con los parametros del enunciado
    int primerValor = 3;
    int resultado = 0;
    resultado = primerValor * primerValor;

    //Mostramos su valor en la consola
    cout << "El cuadrado de 3 es: " << resultado << endl;

    //Realizamos su siguiente operacion
    resultado = primerValor * primerValor * primerValor;
    
    //Mostramos su valor en la consola
    cout << "El cubo de 3 es: " << resultado << endl;

    //Realizamos su siguiente operacion
    //La funcion pow sirve para elevar un numero a x 
    resultado = pow(primerValor, 10);
    
    //Mostramos su valor en la consola
    cout << "El elevado a 10 de 3 es: " << resultado << endl;
    cout << endl;

    //Creamos un programa que tenga dos variables int y calcule su raiz cuadrada de la suma de esos dos numeros
    //inicializamos las variables
    int variableNum1 = 23;
    int variableNum2 = 34;
    int resultado1 = 0;

    //Realizamos la operacion
    resultado1 = (23 + 34);

    //La funcion sqrt sirve para calcular una raiz cuadrada y round sirve para redondear de una manera mas precisa
    resultado1 = round(sqrt(resultado1));

    //Mostramos por pantalla el resultado
    cout << "El resultado es: " << resultado1 << endl;







    return 0;
}