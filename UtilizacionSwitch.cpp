//Aprendiendo Switch
#include <iostream>

using namespace std;

int main()
{
    //Este algoritmo determina la accion a realizar dependiendo del color de un semaforo
    int color = 0;

    cout << "Intrroduce el color del semaforo" << endl;
    cout << "1.- Rojo" << endl;
    cout << "2.- Amarillo" << endl;
    cout << "3.- Verde" << endl;

    cin >> color;

    //Utilizamos switch, en el condicional del switch no se pueden poner string, solo con int o char
    switch(color)
    {
        case 1:
            cout << "Detengase" << endl;
            break;
        case 2:
            cout << "Pase con precaucion" << endl;
            break;
        case 3:
            cout << "Puede pasar" << endl;
            break;
        default:
            break;
    }




    return 0;
}