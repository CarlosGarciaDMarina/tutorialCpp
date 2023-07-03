//Tutorial sobre la gestion de los ficheros binarios en C++; Para saber el tipo de fichero binario que es se indican en los dos primeros bits
//Librerios
#include <iostream>
#include <fstream>

//Usos
using namespace std;

//Funciones
//Esta funcion deduce que tipo de fichero binario esta abriendo
string deducirTipoFichero(string ruta)
{   
    //Variables
    int byteLeido = 0;
    int byteLeido2 = 0;
    string tipoFichero = "";

    //Ahora vamos a leer el fichero, cambiamos el ios::out por el ios::in para indicarles que es de entrada de datos
    fstream fin(ruta, ios::binary | ios::in);

    //Vamos a hacer un condicional para controlar los errores
    if (fin.is_open())
    {
        //Si lo abre
        fin.read((char *) &byteLeido, sizeof(char)); //Almacenamos en byteLeido  
        fin.read((char *) &byteLeido2, sizeof(char)); //Almacenamos en byteLeido2

        if (byteLeido == 255 && byteLeido2 == 216)
        {
            //JPG
            tipoFichero = "JPG";
        }
        else if (byteLeido == 137 && byteLeido2 == 80)
        {
            //PNG
            tipoFichero = "PNG";
        }
        else
        {
            //Error fichero desconocido
            tipoFichero = "-1";
        }
    }
    else
    {
        //Si no lo abre error de tipo fichero no existe o no se ha podido abrir
        tipoFichero = "-2";
    }
    
    fin.close();//Cerramos el fichero despues trabajar con el 
    
    return tipoFichero;
}

string escribirImagen (string ruta, string frase)
{
    //Variables
    char letra = '0';
    char letraLeida = '0';
    int i = 0;

    //Para abrir el fichero en modo de escritura usamos fstream, si el fichero no existe lo va a crear, y el app es para que no machaque la imagen
    fstream fout(ruta, ios::binary | ios::out | ios::app);

    if (fout.is_open())
    {
        //si el fichero se abre
        //Creamos un bucle para que esriba los numeros dentro del fichero
        for ( i = 0; i <= frase.length(); i++)
        {
            // el char * es la manera de acceder a los bytes dentro de un fichero, le indica una posicion en la memorio con el &i, 
            // despues hay que indicarle el tamaño del dato con el tipo entre parentesis
            fout.write((char *) &frase[i], sizeof(char));
        }
        fout.close(); //Hay que cerrar el fichero como siempre que trabajamos con ficheros
        cout << "Texto camuflado correctamente" << endl;
    }
    else
    {   
        //Si el fichero no se abre
        cout << "El fichero no se puede abrir." << endl;
    }

    return frase;
}




//Funcion principal
int main()
{
    //Inicializamos las variables con las que vamos a trabajar
    string ruta = "";
    int opcion = 0;
    string tipoFichero = "";
    string frase = "";
    string resultado = "";

 

    do
    {
        cout << " ______________________________________________" << endl;
        cout << "|----------Tipos de ficheros binarios----------|" << endl;
        cout << "|----------------------------------------------|" << endl;
        cout << "|0.- Salir del programa                        |" << endl;
        cout << "|1.- Deducir tipo de fichero                   |" << endl;
        cout << "|2.- Escribir en una imagen                    |" << endl;
        cout << "|----------------------------------------------|" << endl;
        cout << "|Seleccione una opcion:                        |" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            //Deducir tipo
            cout << "Escribe la ruta del fichero: " << endl;
            cin >> ruta;

            //Metemos lo que nos devuelve la funcion en la variable que hemos creado para almacenarlo
            tipoFichero = deducirTipoFichero(ruta);

            //Condicional para controlar tipos de errores
            if (tipoFichero == "-1" || tipoFichero == "-2")
            {
                //no existeo no puede abrirse
                cout << "Formato no existe o no puede abrirse" <<endl;
                cout << endl; //Mayor legibilidad
            }
            else
            {
                //Funciona
                //Lo mostramos por pantalla
                cout << "El tipo de fichero es: " << tipoFichero <<endl;
                cout << endl; //Mayor legibilidad
            }
            break;
        case 2:
            //Escribir en una imagen
            //Pedimos al usuario la frase y la ruta
            cout << "Introduce la frase que quieres camuflar en la imagen" << endl;
            getline(cin,frase);//Este es para capturar el intro
            getline(cin, frase);
            cout << "Introduce la ruta de la imagen" << endl;
            cin >> ruta;

            //Capturamos lo que devuelve la funcion
            resultado = escribirImagen(ruta, frase); 
            break;
        
        default:
            cout << endl; //Mayor legibilidad
            cout << "Opcion erronea" << endl; //Cuando introduces un numero que no esta en el listado
            cout << endl; //Mayor legibilidad
            break;
        }





    } while (opcion !=0);
    cout << endl; //Mayor legibilidad
    cout<< "Fin del programa" << endl; //Acaba el programa

    
    


    return 0;
}