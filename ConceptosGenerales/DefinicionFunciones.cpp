//Vamos a hacer un tutorial de creacion de funciones en el lenguaje C++
#include <iostream>
using namespace std;

//Para declarar una funcion se hace fuera del apartado main, como va a devolver un float la declaramos con un float
//ademas para que una funcion llame a la otra tiene que ser declarada primero
float areaCuadrado2(float l)
{
    //Inicializamos la variable de area
    float area=0.0f;

    //realizamos la operacion
    area = l * l;

    //mostramos el resultado
    return area;
}

//Como la funcion area cuadrado llama a la de area cuadrado 2, tenemos que ordenarlas de tal forma que primero este escrita a la que va a llamar
//Recuerda que cuando una funcion se inicializa con void es porque no va a devolver nada
void areaCuadrado()
{
    //Inicializamos la variable de area
    float lado=0.0f;
    float area=0.0f;
    
    //Pedimos por pantalla al usuario que nos de el lado del cuadrado
    cout << "Introduzca el lado del cuadrado: " << endl;
    cin >> lado;

    //realizamos la operacion
    area = areaCuadrado2(lado);

    //mostramos el resultado
    cout << "El lado introducido es: "<< lado << " y el area del cuadrado es: " << area << endl;

}

//Creamos la funcion del area edl triagunlo y la definimos usando el tipo de dato que va a devolver 
float areaTriangulo(float base, float altura)
{
    //inicializamos las variables de la funcion
    float area = 0.0f;
    area = (base * altura) / 2.0f;
    return area;

}

//Vamos a crear una funcion para saludar
string saludo(string nombre)
{
    //IMPORTANTE: aqui se utiliza el + para agregar contenido a una frase, en cout se utiliza <<
    return "Bienvenido a mi programa, " + nombre;
}

//Vamos a crear una funcion que va a hacer es machacar un string. Con el simbolo & le indicamos que cualquier modificacion que haga dentro de la funcion se verá afectado en   
//la variable global, osea lo que le pasemos a la funcion sobreescribirá el dato que le demos. 
//Ahora la documentaremos de manera oficial:
/*
*   @param esta funcion tienen un único parametro llamado cad (parámetro por referencia).
*   @return muestra un texto informativo de que el proceso se ha realizado correctamente.
*   @author CarlosGarciaDMarina.
*/
void borrarCadena(string &cad)
{
    cad="Borrado";
    cout << "Cadena borrada con exito" << endl;

}

//Funcion main
int main()
{
    //Este algoritmo me permite calcular el area de un cuadrado
    cout << "Inicio del programa principal" << endl;

    //Hacemos la llamada de la funcion
    areaCuadrado();

    cout << "Fin del programa principal" << endl;

    cout << endl;

    //vamos a aprovechar el codigo para crear otro ejercicio que va a consistir en calcular el area de un triangulo rectangulo
    cout << "Inicio del programa secundario" << endl;

    //inicializamos las variables 
    float areaTrian = 0.0f;
    float baseTriangulo = 0.0f;
    float alturaTriangulo = 0.0f;

    //Pedimos los datos por pantalla al usuario
    cout << "Introduzca la base del triangulo: " << endl;
    cin >> baseTriangulo;
    cout << "Introduzca la altura del triangulo: " << endl;
    cin >> alturaTriangulo;

    //Llamamos a la funcion y le pasamos los datos
    areaTrian = areaTriangulo(baseTriangulo, alturaTriangulo);

    //Mostramos el resultado por pantalla
    cout << "El base introducida es "<< baseTriangulo << ", la altura introducida es "<< alturaTriangulo << " y el area del triangulo es: " << areaTrian << endl;

    cout << "Fin del programa secundario" << endl;

    cout << endl;
 
    //vamos a aprovechar el codigo para crear otro ejercicio que va a consistir en devolver un string
    cout << "Inicio del programa secundario v2" << endl;
    
    //Llamamos a la funcion
    cout << saludo(" Visitante.") << endl;

    cout << "Fin del programa secundario v2" << endl;

    cout << endl;

    //vamos a aprovechar el codigo para crear otro ejercicio que va a consistir en machacar un string
    cout << "Inicio del programa secundario v3" << endl;
    
    //Vamos a incializar las variables que necesitamos para la practica
    string nombre = "Pedro";

    //Mostramos el nombre almacenado en el string
    cout << "El valor de nombre es: " << nombre << endl;
    
    //Ahora usamos la funcion para machacar el nombre y mostramos por pantalla si lo ha machacado
    borrarCadena(nombre);
    cout << "El valor de nombre tras llamar a la funcion es: " << nombre << endl;

    cout << "Fin del programa secundario v3" << endl;

    cout << endl;


    return 0;
}
