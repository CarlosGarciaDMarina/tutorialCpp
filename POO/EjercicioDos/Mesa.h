//CABECERA E IMPLEMENTACION
//Definicion
#ifndef MESA_H_
#define MESA_H_

//Uso
using namespace std;

//Clase
class Mesa
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
    Mesa(/* args */);
    virtual ~Mesa();

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
Mesa::Mesa(/* args */)
{
    this-> ancho = 20;
    this-> largo = 20;
    this-> alto = 2;
}

//Getters & Setters
string Mesa::getTipo() const
{
    return tipo;
}
void Mesa::setTipo(string tipo)
{
    this-> tipo = tipo;
}

int Mesa::getNumPatas() const
{
    return numPatas;
}
void Mesa::setNumPatas(int numPatas)
{
    this-> numPatas = numPatas;
}

int Mesa::getAncho() const
{
    return ancho;
}
void Mesa::setAncho(int ancho)
{
    this-> ancho = ancho;
}

int Mesa::getLargo() const
{
    return largo;
}
void Mesa::setLargo(int largo)
{
    this-> largo = largo;
}

int Mesa::getAlto() const
{
    return alto;
}
void Mesa::setAlto(int alto)
{
    this-> alto = alto;
}

//Destructor
Mesa::~Mesa()
{
}


#endif /*MESA_H_*/