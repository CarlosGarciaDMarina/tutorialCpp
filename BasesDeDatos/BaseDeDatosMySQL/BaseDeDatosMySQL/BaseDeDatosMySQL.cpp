// BaseDeDatosMySQL.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <mysql.h>
using namespace std;

int main()
{
    //Estrcuturas necesarias para establecer una conexion
    MYSQL* conectar; //Establecer conexion con la base de datos
    MYSQL_RES* res; //Obtener registros
    MYSQL_ROW row; //Me permite acceder a los campos de cada uno de los registros

    string consulta = "";
    const char* c; //Convertiremos el string de conexion en este tipo de dato, nos obliga el programa
    int result = 0;

    conectar = mysql_init(0);

    if (!mysql_real_connect(conectar, "localhost", "root", "Root", "basedatoscplus", 3306, NULL, 0))
    {
        cout << "Error en la conexion." << endl;
    }
    else
    {
        cout << "Se ha establecido la conexion con exito." << endl;

        /* INSERT*/
        //Hacemos la consulta, convertimos la consulta en char* y luego mysql_query es la funcion para hacer una consulta en la base de datos(conexion, tipo de dato) 
        consulta = "INSERT INTO usuarios (nombre, edad) VALUES ('Gura', 10)";
        c = consulta.c_str();
        result = mysql_query(conectar, c);

        if (!result)
        {
            cout << "Insercion correcta" << endl;
        }
        else
        {
            cout << "Ha ocurrido un error al insertar un dato" << endl;
        }

        /*UPDATE*/
        consulta = "UPDATE usuarios SET edad = 13 WHERE id = 5";
        c = consulta.c_str();
        result = mysql_query(conectar, c);

        if (!result)
        {
            cout << "Actualizacion correcta" << endl;
        }
        else
        {
            cout << "Ha ocurrido un error al actualizar un dato" << endl;
        }

        /* DELETE */
        consulta = "DELETE FROM usuarios WHERE id = 3";
        c = consulta.c_str();
        result = mysql_query(conectar, c);

        if (!result)
        {
            cout << "El dato ha sido borrado con exito" << endl;
        }
        else
        {
            cout << "Ha ocurrido un error al borrar un dato" << endl;
        }

        /* SELECT */
        consulta = "SELECT * FROM usuarios";
        c = consulta.c_str();
        result = mysql_query(conectar, c);

        if (!result)
        {
            cout << "Mostrando los datos recibidos: " << endl;
            cout << endl;
            res = mysql_store_result(conectar);//Con esto vamos a obtener un array de registros

            //Bucle while para ir recogiendolos
            while (row=mysql_fetch_row(res)) //ROW se encarga de separarlos por campos, los divide en columnas y luego tenemos que llamarlo de manera independiente
            {
                cout << "ID: " << row[0] << " - " << "Nombre: " << row[1] << " - " << "Edad: " << row[2] << "." << endl;
            }
        }
        else
        {
            cout << "Ha ocurrido un error al recibir un dato" << endl;
        }

        /* Cuando terminemos las consultas SIEMPRE cerramos la conexion */
        cout << endl;
        cout << "Cerramos la conexion " << endl;
        mysql_close(conectar);


    }


 
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
//  Username: root
//  pass: Root
//  port: 3306
