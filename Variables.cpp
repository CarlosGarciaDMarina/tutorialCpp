#include <iostream>
using namespace std;

int main(){

    string nombre = "Carlos";
    int edad = 32;
    float altura = 1.72f;
    bool estaVivo = true;

    if (estaVivo == true)
    {
        cout << "El señor " + nombre + " esta vivo";
        return 0;
    } 
    else
    {
        cout << "El señor " + nombre + " no está vivo.";
    }
    

}