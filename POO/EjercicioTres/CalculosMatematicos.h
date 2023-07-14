//Cabecera e implementacion
//Definicion
#ifndef CALCULOSMATEMATICOS_H_
#define CALCULOSMATEMATICOS_H_
#include "Estadio.h"
//Usos
using namespace std;

//Clases
class CalculosMatematicos: public Estadio
{
private:
    /* data */
protected:
    /* data */

public:
    CalculosMatematicos(/* args */);
    virtual ~CalculosMatematicos();

    virtual float sumar(float num1, float num2);
    virtual float multiplicar(float num1, float num2);

    
};
//Constructor
CalculosMatematicos::CalculosMatematicos(/* args */)
{
}

//Metodos
float CalculosMatematicos::sumar(float num1, float num2)
{
    return num1 + num2;
}

float CalculosMatematicos::multiplicar(float num1, float num2)
{
    return num1 * num2;
}


//Destructor
CalculosMatematicos::~CalculosMatematicos()
{
}

#endif //CALCULOSMATEMATICOS_H_