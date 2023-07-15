//Clase futbolista que hereda de la clase deportista y ademas tiene un atributo dorsal.
//Cabecera e implementacion
//Define
#ifndef FUTBOLISTA_H_
#define FUTBOLISTA_H_
#include "Deportista.h"
#include "IDeporte.h"

//Usos
using namespace std;

//Clase
class Futbolista: public Deportista, public IDeporte
{
private:
    /* data */
protected:
    /* data */
    int dorsal;
public:
    //Constructor y destructor
    Futbolista(/* args */);
    virtual ~Futbolista();

    //Getters & Setters
    int getDorsal() const;
    void setDorsal(int dorsal);

    virtual void descripcion()
    {
        cout << "Este deporte consiste en marcar el mayor numero de goles usando las piernas en 90 minutos." << endl;
    }

    virtual void mostrarInfo();



};
//Constructor
Futbolista::Futbolista(/* args */)
{
}

//Getters & Setters
//Dorsal
int Futbolista::getDorsal() const
{
    return dorsal;
}
void Futbolista::setDorsal(int dorsal)
{
    this-> dorsal = dorsal;
}

//Metodos
/*
void Futbolista::descripcion()
{
    this->tipoDeporte = "Este deporte consiste en marcar el mayor numero de goles usando las piernas en 90 minutos." ;
}
*/
void Futbolista::mostrarInfo()
{
    cout << "Esta es la informacion del futbolista que me has pedido: " << endl;
    cout << "Su dorsal es: " << this->dorsal << endl;
}

//Destructor
Futbolista::~Futbolista()
{
}

#endif //FUTBOLISTA_H_