//Vamos a crear con el bucle for y while un programa que repita una cadena 10 veces
#include <iostream>
using namespace std;
int main()
{
    //Primero creamos el string con la frase que vamos a repetir e inicializamos i en 0
    string frase = "Frase repetida";
    int i = 0;

    cout << "Este es el apartado del While" << endl;
    while (i<10)
    {
        //Siempre que i sea menor que 10 va a mostrar por pantalla la frase
        cout << frase << endl;
        i+=1; // cada vez que muestre la frase 1 vez i se sumará 1 hasta que cumpla la condicion
    }

    cout << endl;
    cout << "Este es el apartado del For" << endl;
    for ( i = 0; i < 10; i++)
    {
        cout << frase << endl; //Funciona del mismo modo que el while siempre que i sea menos de 10 imprime por pantalla
    }
    
    //Vamos a realizar otro ejercicio, este es el ejercicio 7 y se trata de crear un programa que pida un numero entre el 1 y el 100 al usuario
    //si el numero esta fuera de rango mostrara el msj de error;en caso de introducir un numero en el rango, por ejemplo el 30 el programa mostrara desde el 30 hasta el 100.
    //Creamos e inicializamos las variables con las que vamos a trabajar
    int num1 =0;

    //Le pedimos al usuario un numero y lo guardamos 
    cout << "Dame un numero entre el 1 y el 100" << endl;
    cin >> num1;

    if ((num1>0) && (num1<=100))
    {
        for ( i = num1; i <= 100; i++)
        {
            //Mostramos el numero del usuario por pantalla
            cout << i << endl;
        }       
    }
    else
    {   
        //Mensaje de error
        cout << "Error, este numero esta fuera del rango mencionado." << endl;
    }

    //Vamos a crear un programa que va a mostrar por pantalla letra a letra la cadena que le pasemos
    //Creamos e inicializamos las variables
    string cadena = "";

    //Vamos a pedir al usuario que nos de una cadena
    cout << "Escribe una palabra: " << endl;
    cin >> cadena;


    for ( i = 0; i < cadena.length(); i++)
    {
        cout << cadena.at(i) << endl;
    }

    for ( i = 0; i < cadena.length(); i++)
    {
        cout << cadena.at(i);
        if (i < cadena.length()-1)
        {
            cout << " - ";
        }
        
    }


    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}