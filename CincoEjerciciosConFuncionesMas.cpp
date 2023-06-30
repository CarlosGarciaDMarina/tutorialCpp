//Aqui vamos a hacer los ejercicios del 6-10
//6.- Crear un programa al que le pasamos nuestro año de nacimiento y el calcula nuestra edad, si le pasamos un año de nacimiento superior al actual devuelve -1
//7.- Crear un programa al que se le pasen dos valores, uno int(>0) y otro string, el int determina cuantas veces va a repetir una cadena, y la cadena será el string
//8.- Crear una funcion llamada contarVocales, a la cual se le pasa un string y te devuelve el numero de vocales que tiene
//9.- Crear un programa que se llame convertirVocales, a la cual se le pasa una cadena y te devulve las vocales en mayus
//10.- Crear un programa que se llame camello, a la cual se le pasa un string y te devuelve las letras pares en mayus y las impares en minus
//Librerias
#include <iostream>
#include <string.h>
#include <cstring>

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
        /*En C++, las comillas simples se utilizan para representar caracteres individuales, mientras que las comillas dobles se utilizan para representar cadenas de caracteres 
        (secuencia de caracteres).*/
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

//Esta funcion te devuelve las vocales de una cadena en mayuscula
string convertirVocales(string cadena2)
{
    //Inicializamos las variables; tolower() sirve para convertir a minuscula; toupper() sirve para convertir a masyusucula; se necesita #include <cstring>
    int i = 0;
    string resultado = "";
    
    //Creamos el bucle que recoora la cadena 
    while (i < cadena2.length())
    {        
        //La condicion sera que por cada caracter que recorra que sea igual a una vocal haga lo siguiente
        if ((cadena2.at(i) == 'a') || (cadena2.at(i) == 'e') || (cadena2.at(i) == 'i') || (cadena2.at(i) == 'o') || (cadena2.at(i) == 'u'))
        {
            //Si encuentra una vocal resultado guardara ese caracter en mayuscula
            resultado += toupper(cadena2.at(i));

        }       
        else
        {
            //Si no es una vocal, lo que hara es convertirlo a minuscula y almacenarlo en resultado
            resultado += tolower(cadena2.at(i));
        }   
        
        i+=1;
    }

    //Devolvemos el resultado de la cadena convertida
    return resultado;    
}

//Esta funcion recibe una cadena y te da las letras mayusculas de las posiciones pares.
string camello(string cadena)
{
    //Declaramos las variables que vamos a necesitar
    int i = 0;
    string resultado = "";
    int resto = 0;

    //Creamos un bucle que recorra la cadena
    while (i < cadena.length())
    {
        //Sumamos una posicion a la posicion y hacemos la operacion de calcular el resto de la division entre la posicion y 2 
        resto = i%2;

        //Establecemos las condiciones para que si el resto es distinto haga lo que nosotros queremos
        if (resto != 0)
        {
            //Si el resto es distinto de cero es por que el numero es impar asique aqui habrá minusculas
            resultado += tolower(cadena.at(i));
        }
        else
        {
            //Si el resto es 0 es porque el numero es par asique aqui habrá mayusculas
            resultado += toupper(cadena.at(i));
        }
        //sumamos 1 a i
        i++;
    }
    

    //Devolvemos el resultado
    return resultado;
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

    /*Ejercicio 9*/
    //Declaramos las variables necesarias
    string cadena2 = "";
    string resultadoCadena = "";

    //Pedimos al usuario una cadena y la capturamos
    cout << "Dame una palabra para convertir las vocales en mayuscula: " << endl;
    cin >> cadena2;

    //Le damos un valor al resultado
    resultadoCadena = convertirVocales(cadena2);

    //mostramos por pantalla el resultado
    cout << "El resultado de la conversion es : " << resultadoCadena << endl;

    /* Ejercicio 10 */
    string cadena3 = "";
    string resultado3 = "";

    //Pedimos al usuario una cadena y la capturamos
    cout << "Dame una palabra para convertirla en camello: " << endl;
    cin >> cadena3;

    //Le damos un valor al resultado
    resultado3 = camello(cadena3);

    //mostramos por pantalla el resultado
    cout << "El resultado de la conversion es : " << resultado3 << endl;
 
    return 0;
}