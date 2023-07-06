//Explicacion ficheros de texto
//Librerias
#include <iostream>
#include <fstream> //Para trabajar la entrada/salida estandar con los ficheros de texto

//Usos
using namespace std;

//Funciones
//Esta funcion sirve para escribir en un fichero de texto
void escribirTexto(string url, string texto, bool apend)
{   
    //Creamos la condicion para, o bien añadir lineas a un texto, o bien machacarlo y empezar de 0 
    if (apend == false)
    {
        //Si el append es false quiere decir que quiere que machacar el texto, solo recogemos la url, capturamos las lineas y machacamos lo que haya escrito.
        //llamamos a la funcion para escribir y le pasamos la url
        ofstream fs (url);

        //Preguntamos al usuario y capturamos su respuesta
        //cout << "Que quieres escribir en el fichero ? " << endl;
        //getline(cin, cadenaIntro); //este getline sirve para capturar string mas largos (incluyendo espacios)

        //Machacamos el texto y escribimos
        fs << texto << endl; //Recordar que con fs escribimos
        fs.close(); //Cerramos siempre 
    }
    else
    {
        //Si el apend es true quiere decir que no quiere borrar el texto asique se escribira a continuacion
        //Llamamos a la funcion para escribir, le pasamos la url y ponemos el apend en true
        ofstream fs (url, ofstream::out | ofstream::app);

        //Preguntamos al usuario y capturamos su respuesta
        //cout << "Que linea quieres aniadir al fichero? " << endl;
        //getline(cin, texto);// este getline sirve para capturar string mas largos (incluyendo espacios)

        //Escribimos sin machacar
        fs << texto << endl;
        fs.close();
    }
}

//Esta funcion sirve para leer un fichero de texto
string leerFichero(string url)
{
    //Declaramos las variables
    string lineaFicheroTexto = "";
    string totalLineas = "";

    //Clase para abrir el fichero en modo lectura
    ifstream fr(url);

    if (!fr)
    {
        //si no existe
        return "-1";
    } 
    else
    {
        //si existe
        //Tipico while para recorrer linea a linea, getLine sirve para capturar las lineas del fichero getline(donde lo metes, variable para almacenar)
        while (getline(fr, lineaFicheroTexto)) 
            {
                //Vamos mostrando por pantalla lo que hay escrito
                //cout << lineaFicheroTexto << endl;
                totalLineas = totalLineas + " " + lineaFicheroTexto;
            }   

        //Cerramos el fichero
        fr.close(); 
        return totalLineas;
    }
    
}

//Funcion main
int main()
{   
    //Declaramos las variables
    //URL predeterminada para esta practica ./info/ficherocpp.txt
    string url = "";
    string sino = "";
    string texto = "";
    int mensajeSystem = 0;
    string contenidoFichero = "";
    char rutaChar [100] = "";
    char comando [100] = "";
    int respuesta = 0;
    int i = 0;
    bool apend = true;
    bool salir = false;
    ifstream fr;

    /*
    //Llamamos a la funcion de escritura
    escribirTexto(url, apend);

    //Llamamos a la funcion de lectura
    leerFichero (url);
    */
    
    do
    {
        //Interfaz del programa
        cout << endl;
        cout << "|-------------------------------------|" << endl;
        cout << "|       Gestion de Ficheros S.A       |" << endl;
        cout << "|-------------------------------------|" << endl;
        cout << "|0.- Salir del programa               |" << endl;
        cout << "|1.- Leer fichero                     |" << endl;
        cout << "|2.- Escribir en fichero              |" << endl;
        cout << "|3.- Borrar un fichero                |" << endl;
        cout << "|4.- crear una carpeta                |" << endl;
        cout << "|5.- Borrar una carpeta               |" << endl;
        cout << "|6.- Listar archivos                  |" << endl;
        cout << "|-------------------------------------|" << endl;
        cout << "Bienvenido al programa de gestion de ficheros, Que desea hacer hoy ?" << endl;
        cin >> respuesta;
        cout << endl;

        switch (respuesta)
        {
        case 0:
            //Salimos del programa
            salir = true;
            break;
        case 1:
            //Leemos el fichero
            cout << "Introduce la ruta del fichero que quieras leer: " << endl;
            cin >> url;
            contenidoFichero = leerFichero(url); //Metemos lo que nos devuelve la funcion en nuestra variable
            fr.open(url); //Comprobamos si se puede abrir

            //Si se abre leemos lo que hay en contenidoFichero, sino el fichero no existe
            if (fr.is_open())
            {
                //Ruta valida
                //Llamamos a la funcion
                cout << "El contenido del fichero es: " << endl;
                cout << contenidoFichero << endl;
                cout << endl;

            }
            else
            {
                //Error
                cout << "El fichero no existe." << endl;
            }
            
            break;
        case 2:
            //Escribimos en el fichero
            //Pedimos la url al usuario
            cout << "Introduce la ruta del fichero donde quieres escribir: " << endl;
            cin >> url;
            
            //Le preguntamos si quiere machacar el texto que ya hay en la ruta o no
            cout << "Quieres machacar el texto ? y/n" << endl;
            cin >> sino;

            //Dependiendo de su respuesta hara una cosa u otra
            if (sino == "y")
            {
                //Machacamos el texto
                apend = false;

                //Preguntamos al usuario y capturamos su respuesta
                cout << "Que quieres escribir en el fichero ? " << endl;
                cin.get(); //Si no ponemos esto nos captura el intro del cout y no escribe nada
                getline(cin, texto); //este getline sirve para capturar string mas largos (incluyendo espacios)

                //Llamamos a la funcion
                escribirTexto(url, texto, apend);
                cout << "fichero escrito correctamente."<<endl;
            }
            else if (sino == "n")
            {
                //No machacamos el texto
                apend = true;

                //Preguntamos al usuario y capturamos su respuesta
                cout << "Que linea quieres aniadir al fichero? " << endl;
                cin.get(); //Si no ponemos esto nos captura el intro del cout y no escribe nada
                getline(cin, texto); //este getline sirve para capturar string mas largos (incluyendo espacios)
                
                //Llamamos a la funcion
                escribirTexto(url, texto, apend);
                cout << "fichero escrito correctamente."<<endl;

            }
            else
            {
                //Opcion no valida
                cout << "Opcion erronea." << endl;
                cout<<endl;
            }
                        
            break;
            
        case 3:
            //Borrar un fichero
            cout << "Escribe la ruta del fichero a borrar: " << endl;
            cin >> url;
            fr.open(url); //Abrimos la url

            //creamos la condicion para que si se pueda abrir haga una cosa o sino muestre un error
            if (fr.is_open())
            {
                //El fichero existe
                fr.close();

                //Va ir contando cada letra del string y las va a ir almacenando en ruta char 
                for (i=0; i<url.length(); i++)
                {
                    /* code */
                    rutaChar[i] = url[i];

                }
                remove(rutaChar);
                cout << "El fichero ha sido borrado correctamente" << endl;
              
            }
            else
            {
                //El fichero no existe
                cout << "El fichero no existe"<< endl;
                cout << endl;
            }
            
            break;
        
        case 4:
            //Crear carpeta
            //Capturamos la ruta donde quiere crea la carpeta
            cout << "Escribe la ruta donde quieras crear la carpeta" << endl;
            cin >> url;

            //Añadimos la sentencia para generar la carpeta, la barra delante se pone porque es un caracter de escape y sirve para, 
            //dentro de unas comillas dobles, poner comillas dobles
            url = "mkdir \"" + url + "\"";
            cout << url << endl;
            
            //Hacemos un bucle for para que recorra la url y la almacene dentro de comando
            for (i=0; i<url.length(); i++)
            {
                /* code */
                comando[i] = url[i];

            }

            //Con system hacemos que el sistema ejecute un comando, lo vamos a meter dentro de la variable para saber que mensaje devuelve y saber si es un error o no
            mensajeSystem = system(comando); //System devuelve 0 si el comando se ha realizado correctamente
            
            //Creamos las condiciones en las que se va a mostrar un mensaje u otro, 0 es que esta bien y 1 es que no.
            if (mensajeSystem == 0)
            {
                //Todo esta bien asique mostramos por pantalla
                cout << "Directorio creado correctamente." <<endl;
            }
            else
            {
                //Error mostramos mensajes de error
                cout << "Ha ocurrido un error." << endl;
            }
            
            //Salto de linea que hacemos por mejor legibilidad
            cout << endl;
            break;
        case 5:
            //Eliminar carpeta
            cout << "Escribe la ruta donde quieras borrar la carpeta" << endl;
            cin >> url;

            //En vez de mkdir usaremos rmdir para borrar la carpeta
            url = "rmdir \"" + url + "\"";
            cout << url << endl;

            //Hacemos un bucle for para que recorra la url y la almacene dentro de comando
            for (i=0; i < url.length(); i++)
            {
                comando[i] = url[i];
            }

            //Con system hacemos que el sistema ejecute un comando, lo vamos a meter dentro de la variable para saber que mensaje devuelve y saber si es un error o no
            mensajeSystem = system(comando); //System devuelve 0 si el comando se ha realizado correctamente
            
            cout << mensajeSystem << endl;

            //Creamos las condiciones en las que se va a mostrar un mensaje u otro, 0 es que esta bien y sino es 0 mostramos error
            if (mensajeSystem == 0)
            {
                //Todo esta bien asique mostramos por pantalla
                cout << "Directorio borrado correctamente." <<endl;
            }
            else
            {
                //Error mostramos mensajes de error
                cout << "Ha ocurrido un error." << endl;
            }

            //Salto de linea que hacemos por mejor legibilidad
            cout << endl;
            break;
        case 6:
            //Listar archivos
            cout << "Escribe la ruta del directorio a listar: " << endl;
            cin >> url;

            //Creamos el comando
            url = "dir \"" + url + "\"";

            //Creamos el mismo for que en los casos anteriores 
            for ( i = 0; i < url.length(); i++)
            {
                /* code */
                comando[i] = url[i];
            }

            mensajeSystem = system(comando);
            cout << mensajeSystem << endl;
            cout << endl;
            cout << "Fin del listado." << endl;
            cout << endl;
            


            break;
             
        default:
            cout << "Por favor, introduce una opcion valida."<<endl;
            break;
        }



    } while (salir == false);
    











    return 0;
}