#ifndef COCHE_H_
#define COCHE_H_

#include "Vehiculo.h"

class Coche: public Vehiculo //: public Vehiculo es para heredar 
{
private:
    /* data */
public:
    Coche(/* args */);//Constructor por defecto, coge los valores de la clase padre
    Coche(float precio, float velocidad); //Constructor polimorfico, se define pasandole unos parametros en especifico, no los coge del padre (Vehiculo.h)
    virtual ~Coche();
    virtual void arrancar();

};

//Constructor y destructor
Coche::Coche(/* args */)
{
}
Coche::Coche(float precio, float velocidad)
{
    this->precio = precio;
    this->velocidad = velocidad;
}

Coche::~Coche()
{
}

//Implementaciones
void Coche::arrancar() 
{
    this->tipoArranque=2;
}



#endif /*COCHE_H_*/