//Libreria
#include <iostream>
#include "Caballo.h"
#include <string>

//Namespace
using namespace std;

//Funciones

//Funcion main
int main(int argc, char const *argv[])
{
    try
    {

        //Variables
        long tiempoCaballo1 = 0;
        long tiempoCaballo2 = 0;
        long tiempoCaballo3 = 0;
        

        //Creamos los objetos
        Caballo ca1("Juan", 1);
        Caballo ca2("Pedro", 2);
        Caballo ca3("Cristina", 3);

        //Pruebas
        cout << "El nombre del primer caballo es: " << ca1.getNombre() << " y su id es: " << ca1.getId() << " y sus segundos es: " << ca1.getSegundos() << endl;
        cout << "El nombre del segundo caballo es: " << ca2.getNombre() << " y su id es: " << ca2.getId() << " y sus segundos es: " << ca2.getSegundos() << endl;
        cout << "El nombre del tercer caballo es: " << ca3.getNombre() << " y su id es: " << ca3.getId() << " y sus segundos es: " << ca3.getSegundos() << endl;

        //Llamamos a la funcion de los hilos e iniciamos los hilos
        thread t(&Caballo::run, &ca1);
        thread t2(&Caballo::run, &ca2);
        thread t3(&Caballo::run, &ca3);

        // Esperamos a que los hilos terminen
        t.join();
        t2.join();
        t3.join();
        
        // Obtenemos los tiempos de finalizacion de cada uno
        tiempoCaballo1 = ca1.getTiempoFinalizacion();
        tiempoCaballo2 = ca2.getTiempoFinalizacion();
        tiempoCaballo3 = ca3.getTiempoFinalizacion();

        // Condicionales para saber quien ha ganado
        if (tiempoCaballo1 < tiempoCaballo2 && tiempoCaballo1 < tiempoCaballo3)
        {
            /* El caballo 1 ha ganado */
            cout << "El caballo ganador es " << ca1.getNombre() << endl;
        }
        else if (tiempoCaballo2 < tiempoCaballo1 && tiempoCaballo2 < tiempoCaballo3)
        {
            /* El caballo 2 ha ganado */
            cout << "El caballo ganador es " << ca2.getNombre() << endl;
        }
        else if (tiempoCaballo3 < tiempoCaballo1 && tiempoCaballo3 < tiempoCaballo2)
        {
            /* El caballo 3 ha ganado */
            cout << "El caballo ganador es " << ca3.getNombre() << endl;
        }
        else
        {
            /* En caso de empate */
            cout << "Ha habido un empate." << endl;
        }
    }
    catch(...)
    {
        cout << "Ha ocurrido un error." << endl;
    }
    
    return 0;
}
