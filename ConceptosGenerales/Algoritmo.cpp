//Realiza un algoritmo para calcular el area de un cuadrado (area = lado x lado)
#include <iostream>
#include <cmath> //metodo para matematicas

using namespace std;

//Metodo main
int main()
{
    //Este algoritmo calculara el area de un cuadrado con el lado escrita por el usuario
    float lado = 0.0f;
    float area = 0.0f;

    //Ahora nos comunicamos con el usuario
    cout << "Introduzca el lado del cuadrado: ";
    cin >> lado; //cin >> sirve como el scanner de java para capturar lo que inserta el usuario

    //Realizamos la operacion 
    area = lado * lado;
    cout << "El área del cuadrado es " << area;
    
    return 0;
}