//Esta es la parte de la implementacion
//Librerias
#include "Vehiculo.h" // INclusion del fichero .h

//Implementacion de los metodos
Vehiculo::Vehiculo()
{
    this->precio = 10000.0f;
    this->velocidad = 0.0f;

}
//Getters y setters
float Vehiculo::getPrecio() const
{
return precio;
}

void Vehiculo::setPrecio(float precio)
{
    this->precio = precio;
}

float Vehiculo::getVelocidad() const
{
return velocidad;
}

void Vehiculo::setVelocidad(float velocidad)
{
    this->velocidad = velocidad;
}

Vehiculo::~Vehiculo()
{

}