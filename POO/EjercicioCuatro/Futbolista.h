//Clase futbolista que hereda de la clase deportista y ademas tiene un atributo dorsal.
//Cabecera e implementacion
//Define
#ifndef FUTBOLISTA_H_
#define FUTBOLISTA_H_
#include "Deportista.h"
//Usos
using namespace std;

//Clase
class Futbolista: public Deportista
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

//Destructor
Futbolista::~Futbolista()
{
}

#endif //FUTBOLISTA_H_