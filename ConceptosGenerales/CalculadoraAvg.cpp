// Realizar un programa que calcule la nota media de 3 alumnos de la asignatura ed matematicas
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Metodo main de C++
int main(){

    //Ajustamos los atributos del alumno
    string alumnoUno = "Pedro";
    float notaUno = 4.0f;
    float notaDos = 5.0f;
    float notaTres = 8.0f;
    float resultado = (notaUno + notaDos + notaTres)/3;

    //Esta es la interfaz de la Calculadora
    cout << "|-----------------------------|" << endl;
    cout << "|    Calculadora de AVG       |" << endl;
    cout << "|-----------------------------|" << endl;

    //Aquí escribimos el resultado que nos va a mostrar
    cout << "La nota media del alumno " << alumnoUno << " es: " << resultado << endl;

    return 0;
}