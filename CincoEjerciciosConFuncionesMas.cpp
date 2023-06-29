//Aqui vamos a hacer los ejercicios del 6-10
//6.- Crear un programa al que le pasamos nuestro año de nacimiento y el calcula nuestra edad, si le pasamos un año de nacimiento superior al actual devuelve -1
//7.- Crear un programa al que se le pasen dos valores, uno int(>0) y otro string, el int determina cuantas veces va a repetir una cadena, y la cadena será el string
//8.- Crear una funcion llamada contarVocales, a la cual se le pasa un string y te devuelve el numero de vocales que tiene
//9.-
//10.-
//Librerias
#include <iostream>

//Usos
using namespace std;

//Funciones
//Esta funcion devuelve tu edad solo si no has introducido un fecha de nacimiento superior al año actual
int calculaEdad(int valor1)
{
    //Inicializamos las variables
    int anioActual = 2023;
    int resultado = 0;

    //Establecemos las condiciones para hacer la suma o no
    if (valor1 > anioActual)
    {
        /* Negativo */
        resultado = -1;
    }
    else
    {
       /*realiza la operacion*/
       resultado =  anioActual - valor1;
    }

    /*Devolvemos el resultado*/
    return resultado;
}

//Esta funcion repetira una frase x numero de veces
void repeticionCadena(int repeticion, string cadena)
{
    //Inicializamos las variables
    int i = 0;

    //Creamos el bucle
    while (i<repeticion)
    {
        /*devolvemos la cadena*/
        cout << cadena << endl;
        i++;
    }
    
}

//Esta funcion cuenta las vocales que tiene una cadena
int contarVocales(string cadena1)
{
    //Declaramos las variables
    int i = 0;
    int contador = 0;
    
    //Creamos el bucle
    while (i < cadena1.length())
    {        
        // creamos las condiciones 
        if ((cadena1.at(i) == 'a') || (cadena1.at(i) == 'e') || (cadena1.at(i) == 'i') || (cadena1.at(i) == 'o') || (cadena1.at(i) == 'u'))
        {
            //Si encuentra una vocal sumamos 1 al contador
            contador = contador+1;
        }
        
        else
        {
            //Si es diferente a una vocal no sumará nada
            contador = contador + 0;
        } 
        
        i+=1;
    }

    return contador; 
}






//Funcion principal
int main()
{
    /*Ejercicio 6*/
    //Declaramos las variables
    int anioNac = 0;

    /*Preguntamos al usuario y capturamos*/
    cout << "En que anio has nacido?" << endl;
    cin >> anioNac;

    /*Devolvemos el resultado*/
    cout << "Tienes " << calculaEdad(anioNac) << " anios." << endl;

    /*Ejercicio 7*/
    /*Declaramos las variables*/
    int repeticiones = 0;
    string cadena = "";

    //interactuamos con el usuario
    cout << "Dame una cadena que quieras mostrar: " << endl;
    cin >> cadena;
    cout << "ahora dame el numero de veces que quieres repetirla: " <<endl;
    cin >> repeticiones;

    //Llamamos a la funcion 
    repeticionCadena(repeticiones, cadena);

    /*Ejercicio 8*/
    //Declaramos las variables que necesitamos
    string cadena1 = "";
    int resultado = 0;

    //Pedimos al usuario una cadena y la capturamos
    cout << "Dame una palabra para contar las vocales que tiene: " << endl;
    cin >> cadena1;

    //Le damos un valor al resultado
    resultado = contarVocales(cadena1);

    //mostramos por pantalla el resultado
    cout << "El numero de vocales que tiene " << cadena1 << " es : " << resultado << endl;

    
    
    
    
    
    
    
    return 0;
}