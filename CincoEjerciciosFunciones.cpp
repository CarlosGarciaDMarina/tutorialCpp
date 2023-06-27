//Vamos a hacer 5 ejercicios para practicar con funciones
//1.- Crear una funcion que te salude
//2.- Mejorar la funcion de saludar, ahora le pasaremos un string y lo mostrará por pantalla
//3.- Crear un programa que le pases dos valores y los sume
//4.- Crear un programa que contenga una funcion llamada esPositivo, se le pasa un int y te devuleve un boolean indicando si es mayoor o igual a 0.
//5.- Crear un programa que sume dos valores positivos, solo sumara si ambos son positivos, sino devolvera -1. En este ejc 0 es un valor positivo.
//Librerias
#include <iostream>

//Usos
using namespace std;

//Funciones
//En el primer ejercicio esta era un tipo void y tenia lo que esta comentado, ahora esta modificada
//A esta funcion le pasas un string y te devuelve un saludo
string saludar(string saludo)
{
    //Iniciamos las variables
    //string saludo = "";
    string resultado = "";

    //Pedimos un saludo al usuario y lo mostramos por pantalla
    //cout << "Como vas a saludar hoy?" << endl;
    //cin >> saludo;
    //cout << saludo << ", visitante" << endl;

    //Sumamos el saludo que nos ha dado la funcion global y le añadimos el toque de la funcion
    resultado = saludo + ", visitante";

    //Devolvemos el saludo completo
    return resultado;

}

//Esta funcion sirve para sumar dos valores que le pases
float sumar(float num1, float num2)
{
    return num1 + num2;
}

//Esta funcion sirve para saber si un numero es positivo o no lo es
bool esPositivo(int valor)
{
    //declaramos la variable
    bool positivo = false;

    //Este condicional nos devuelve un valor positivo/negativo dependiendo del valor que le pasemos
    if (valor >= 0)
    {
        //positivo
        positivo = true;
    }
    else
    {
        //Negativo
        positivo = false;
    }

    //Devuelve el resultado
    return positivo;
    
}

//Esta funcion suma los numeros solo si son positivos sino no
int sumaPositiva(int valor1, int valor2)
{
    //Declaramos las variables
    int resultado = 0;

    //Creamos la condicion
    if ((valor1 >= 0)&&(valor2>=0))
    {
        //Positivo
        resultado = valor1 + valor2;
    }
    else
    {
        //Negativo
        resultado = -1;
    }

    //Devolvemos el resultado
    return resultado;
}

//Funcion Main
int main()
{
    /*Ejercicio 1 y 2*/
    //Declaramos las variables que vamos a necesitar
    string saludo = "";
    //Pedimos un saludo al usuario y lo mostramos por pantalla
    cout << "Como vas a saludar hoy?" << endl;
    cin >> saludo;
    
    //Llamamos a la funcion
    cout << saludar(saludo) << endl;


    /*Ejercicio 3*/

    //Declaramos las variables del ejc 3
    float num1 = 0.0f;
    float num2 = 0.0f;
    float resultado = 0.0f;

    //Pedimos dos valores al usuario y lo mostramos por pantalla
    cout << "Dame el primer numero: " << endl;
    cin >> num1;  
    cout << "Dame el segundo numero: " << endl;
    cin >> num2;   

    //Llamamos a la funcion
    resultado = sumar(num1, num2);  

    //Mostramos los resultados por pantalla
    cout << "La suma de los numeros " << num1 << " y " << num2 << " es: " << resultado<< endl;
    
    /*Ejercicio 4*/
    //Declaramos la variable y la inicializamos en 0
    int valor=0;

    //Pedimos un valor al usuario y lo guardamos
    cout << "Dame un numero para saber si es positivo o negativo: " << endl;
    cin >> valor;

    //Creamos una condicion que si el valor es 1(True) nos dice que es positivo y 0(false) que nos dice que es negativo
    if (esPositivo(valor) == 1)
    {
        //Positivo
        cout << "El numero que me has dado es positivo" << endl;
    }
    else
    {
        //Negativo
        cout << "El numero que me has dado es negativo" << endl;
    }

    /*Ejercicio 5*/
    //Declaramos las 2 variables que vamos a necesitar
    int valor1 = 0;
    int valor2 = 0;

    //Le pedimos al usuario dos valores y los capturamos
    cout << "Dame el primer valor: " << endl;
    cin >> valor1;
    cout << "Dame el segundo valor: " << endl;
    cin >> valor2;
    
    //Creamos la condicion para mostrar por pantalla un resultado u otro
    if (sumaPositiva(valor1, valor2)>0)
    {
        //Funcionó!
        cout << "La suma de los valores " << valor1 << " y " << valor2 << " es: " << sumaPositiva(valor1, valor2) << endl;
    }
    else
    {
        //-1
        cout << sumaPositiva(valor1, valor2) << endl;
    }
    
    return 0;
}