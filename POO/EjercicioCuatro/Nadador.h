//Para realizar el ejercicio 5 tengo que crear la clase nadador, que heredará de Deportista,y ademas tendra los atr: altura y peso. Crea un nadador y agregale parametros
//Cabecera e implementaciones
//Definicion
#ifndef NADADOR_H_
#define NADADOR_H_
//Librerias
#include "Deportista.h"
//Usos
using namespace std;
//Clase
class Nadador: public Deportista
{
private:
    /* data */
protected:
    /* data */
    float peso;
    float altura;
public:
    //Constructor y destructor
    Nadador(/* args */);
    virtual ~Nadador();

    //Getters & Setters
    float getPeso() const;
    void setPeso(float peso);

    float getAltura() const;
    void setAltura(float altura);

    virtual void descripcion()
    {
        cout << "Este deporte consiste en nadar un numero determinado de metros lo mas veloz posible." << endl;
    }

};
//Constructor
Nadador::Nadador(/* args */)
{
}

//Gettes & Setters
//Peso
float Nadador::getPeso() const
{
    return peso;
}

void Nadador::setPeso(float peso)
{
    this-> peso = peso;
}

//Altura
float Nadador::getAltura() const
{
    return altura;
}
void Nadador::setAltura(float altura)
{
    this->altura = altura;
}

//Metodo
/*
void Nadador::descripcion()
{
    this-> tipoDeporte = "Este deporte consiste en nadar un numero determinado de metros lo mas veloz posible.";
}
*/

//Destructor
Nadador::~Nadador()
{
}



//Final de la definicion
 #endif //NADADOR_H_