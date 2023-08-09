#ifndef PERSONA_H_
#define PERSONA_H_

//Librerias
#include <string>

//Using
using namespace std;

//clase
class Persona
{
private:
    /* atribute */
protected:
    /* atribute */
    string nombre;
    string apellidos;
    string ciudad;
    string nacionalidad;
    int edad;
public:
    Persona(/* args */); //Constructor
    Persona(string nombre, string apellidos, string ciudad, string nacionalidad, int edad); //Constructor sobrecargado
    virtual~Persona(); 

    //Getters & Setters
    string getNombre() const;
    void setNombre (string nombre);

    string getApellidos() const;
    void setApellidos(string apellidos);

    string getCiudad() const;
    void setCiudad(string ciudad);

    string getNacionalidad() const;
    void setNacionalidad(string nacionalidad);

    int getEdad() const;
    void setEdad(int edad);

    //Metodo
    void print();

};
//Constructor
Persona::Persona(/* args */)
{
}
//Constructor sobrecargado
Persona::Persona(string nombre, string apellidos, string ciudad, string nacionalidad, int edad)
{
    this->nombre = nombre;
    this->apellidos = apellidos;
    this->ciudad = ciudad;
    this->nacionalidad = nacionalidad;
    this->edad = edad;
}

//Getters & Setters
//Nombre
string Persona::getNombre() const
{
    return nombre;
}
void Persona::setNombre(string nombre)
{
    this->nombre = nombre;
}

//Apellidos
string Persona::getApellidos() const
{
    return apellidos;
}
void Persona::setApellidos(string apellidos)
{
    this->apellidos = apellidos;
}

//Ciudad
string Persona::getCiudad() const
{
    return ciudad;
}
void Persona::setCiudad(string ciudad)
{
    this->ciudad = ciudad;
}

//Nacionalidad
string Persona::getNacionalidad() const
{
    return nacionalidad;
}
void Persona::setNacionalidad(string nacionalidad)
{
    this->nacionalidad = nacionalidad;
}

//Edad
int Persona::getEdad() const
{
    return edad;
}
void Persona::setEdad(int edad)
{
    this->edad = edad;
}

//Métodos
//Este metodo muestra por la pantalla los datos de una persona
void Persona::print()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Apellidos: " << apellidos << endl;
    cout << "Ciudad: " << ciudad << endl;
    cout << "Nacionalidad: " << nacionalidad << endl;
    cout << "Edad: " << edad << endl;  
}


//Destructor
Persona::~Persona()
{
}

//Cerramos
#endif /* PERSONA_H_ */
