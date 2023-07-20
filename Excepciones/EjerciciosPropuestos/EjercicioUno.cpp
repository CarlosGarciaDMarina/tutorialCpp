/* Crear un programa que le pida un numero al usuario. Si el numero es positivo la consola mostrara numero positivo, sino mostrara numero negativo y si escribes un string
mostrara un mensaje de tipo de datos erroneo  */
//Libreria
#include <iostream>

//Using
using namespace std;

//Funciones

//Funcion main
int main()
{
    //Variables
    int num = 0;

    //Pedimos al usuario un numero y lo almacenamos en la variable numero
    cout << "Introduce un numero positivo o negativo: " << endl;
    cin >> num;

    //Abrimos un try-catch para manejar los errores
    try
    {
        //Creamos el condicional para gestionar los errores
        if (cin.fail())
        {
            cout << "Este tipo de datos no es valido, por favor introduce un dato de tipo int." << endl;
        }
        else if (num>=0)
        {
            //En el caso de que el numero sea positivo lanzamos un error de tipo 1
            throw 1;
        }
        else
        {
            //En el caso de que el numero sea negativo lanzamos un error de tipo 2
            throw 2;
        }
    }
    catch(int error)
    {
        if (error == 1)
        {
            //Positivo
            cout << "El numero que has introducido es positivo." << endl;
        }
        else if (error == 2)
        {
            //Negativo
            cout << "El numero que has introducido es negativo." << endl;
        }        
        
    }
    catch(...)   //Para garantizar que si surje un error que no este calculado atras utilizaremos este catch
    {
        //Informamos al usuario
        cout << "Ha ocurrido un error inesperado." << endl;
    }

    return 0;
}