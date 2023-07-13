//CABECERA E IMPLEMENTACION
//Definicion
#ifndef SILLA_H_
#define SILLA_H_

//Uso
using namespace std;

//Clase
class Silla
{
private:
    /* data */
protected:
    /* data */
    string tipo;//Madera, hierro, plastico...
    int numPatas;
    int ancho;
    int largo;
    int alto;
public:
    //Constructor y destructor
    Silla(/* args */);
    virtual ~Silla();

    //Getters & Setters
    string getTipo() const;
    void setTipo(string tipo);

    int getNumPatas() const;
    void setNumPatas(int numPatas);

    int getAncho() const;
    void setAncho(int ancho);

    int getLargo() const;
    void setLargo(int largo);

    int getAlto() const;
    void setAlto(int alto);


};
//Constructor
Silla::Silla(/* args */)
{
    this-> numPatas = 4;
    this-> ancho = 10;
    this-> largo = 10;
    this-> alto = 1;
}

//Getters & Setters
string Silla::getTipo() const
{
    return tipo;
}
void Silla::setTipo(string tipo)
{
    this-> tipo = tipo;
}

int Silla::getNumPatas() const
{
    return numPatas;
}
void Silla::setNumPatas(int numPatas)
{
    this-> numPatas = numPatas;
}

int Silla::getAncho() const
{
    return ancho;
}
void Silla::setAncho(int ancho)
{
    this-> ancho = ancho;
}

int Silla::getLargo() const
{
    return largo;
}
void Silla::setLargo(int largo)
{
    this-> largo = largo;
}

int Silla::getAlto() const
{
    return alto;
}
void Silla::setAlto(int alto)
{
    this-> alto = alto;
}

//Destructor
Silla::~Silla()
{
}


#endif /*SILLA_H_*/