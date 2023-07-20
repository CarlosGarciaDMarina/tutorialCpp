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
    bool salir = false;

    while (!salir)
    {
        //Primer ejemplo de gestion de excepciones TRY-CATCH
        //Nos permite detectar las excepciones y cuando lo detecta se lanza la excepcion y va al codigo que hya en el catch, de no haber excepciones no ejecutara el catch
        try
        {
            //Pedimos al usuario que introduzca un numero
            cout << "Introduce un numero (1-100): " << endl;
            cin >> num;

            //si encuentra un error de tipo
            if (cin.fail())
            {
                cout << "El dato introducido no es correcto y no se corresponde en tipo." << endl;
                break; //Para romper el bucle
            }
            
            //Creamos un condicional para detectar distintos errores que podemos preveer
            if (num<1)
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
            salir = true;
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
        catch(...)//Esta version de catch captura errores que son inesperados
        {
            cout << "Error inesperado" << endl;
        }

    //Fin del while
    }
    
    //Si salir es true nos dará el dato correcto
    if (salir)
    {
        //Como es true nos da el dato correcto
        cout << "Dato correcto." << endl;
    }
    else
    {
        //Como hemos salido por el break salir sigue siendo false entonces informamos del error
        cout << "El programa ha finalizado debido a un error." << endl;
    }

    return 0;
}