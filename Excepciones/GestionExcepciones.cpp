//Vamos a empezar un tutorial sobre como es la gestion de excepciones en C++
//Librerias
#include <iostream>

//Using
using namespace std;

//Funciones

//Funcion principal
int main()
{
    //Variables
    int num = 0;

    //Pedimos al usuario que introduzca un numero
    cout << "Introduce un numero (1-100): " << endl;
    cin >> num;
    
    //Primer ejemplo de gestion de excepciones TRY-CATCH
    //Nos permite detectar las excepciones y cuando lo detecta se lanza la excepcion y va al codigo que hya en el catch, de no haber excepciones no ejecutara el catch
    try
    {
        if (num<0)
        {
            /* Si el numero es menor que cero, lanzare la excepcion con el throw 1 */ 
            throw 1;
        }
        else if (num > 100)
        {
            /* Si el numero es mayor que cien, lanzare la excepcion con el throw 2 */
            throw 2;
        }
        //En el caso de que el dato sea correcto 
        cout << "Dato correcto" << endl;
    }
    catch(int error) // como el throw que lanzamos desde el try es un valor int, el error que parametrizaremos en el catch debe ser int 
    {
        if (error==1)
        {
            /* Este seria el mensaje de error para informar al usuario en el caso del throw 1 */
            cout << "Ha introducido un numero inferior a 1." << endl;
        }
        if (error == 2)
        {
            /* Este seria el mensaje de error para informar al usuario en el caso del throw 2 */
            cout << "Ha introducido un numero superior a 100." << endl;
        }          
    }
    





    return 0;
}