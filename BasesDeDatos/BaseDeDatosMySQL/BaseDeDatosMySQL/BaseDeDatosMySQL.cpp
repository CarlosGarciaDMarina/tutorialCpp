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

    conectar = mysql_init(0);

    if (!mysql_real_connect(conectar, "localhost", "root", "Root", "basedatoscplus", 3306, NULL, 0))
    {
        cout << "Error en la conexion." << endl;
    }
    else
    {
        cout << "Se ha establecido la conexion con exito." << endl;
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
