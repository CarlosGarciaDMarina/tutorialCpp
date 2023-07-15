//7.- Para el ultimo ejercicio vamos a crear una clase interfaz que se llamara IDeporte.h, esta clase tendra un metodo que lo heredaran las clases nadador y futbolista. 
//Este metodo muestra la info de los atributos de la clase
//En las clases interfaz solo se escriben los metodos que van a utilizar las demas clases, esta clase sirve solo para eso.
#ifndef IDEPORTE_H_
#define IDEPORTE_H_

//Usos
using namespace std;

//Clase
class IDeporte
{
private:
    /* data */
protected:
    /* data */
public:
    //Constructor y destructor
    IDeporte(/* args */);
    virtual ~IDeporte();
    //Metodo
    virtual void mostrarInfo()=0;

};
//Constructor
IDeporte::IDeporte(/* args */)
{
}
//Destructor
IDeporte::~IDeporte()
{
}

//Cerramos la definicion
#endif //IDEPORTE_H_