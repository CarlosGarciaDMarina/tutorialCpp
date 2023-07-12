#ifndef MOTO_H_
#define MOTO_H_

#include "Vehiculo.h"

class Moto: public Vehiculo
{
private:
    /* data */
public:
    Moto(/* args */);
    virtual ~Moto();
    virtual void arrancar();
};

//Constructor y destructor
Moto::Moto(/* args */)
{
}

Moto::~Moto()
{
}

//Implementacion
void Moto::arrancar() 
{
    this->tipoArranque=1;
}


#endif /*MOTO_H_*/
