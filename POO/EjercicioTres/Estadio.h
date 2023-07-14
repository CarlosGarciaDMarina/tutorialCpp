//Cabecera e implementacion
//Definicion
#ifndef ESTADIO_H_
#define ESTADIO_H_

//Usos
using namespace std;

//Clase
class Estadio
{
private:   
    //Atributos
    
protected:
    //Atributos
    string nombre;
    int numAsiento;
    int preAsiento;
    float ganancias;

public:
    //Constructor
    Estadio(/* args */);
    virtual ~Estadio();

    //Getters & Setters
    string getNombre() const;
    void setNombre(string nombre);

    int getNumAsiento() const;
    void setNumAsiento(int numAsiento);

    int getPreAsiento() const;
    void setPreAsiento(int preAsiento);

    float getGanancias() const;
    void setGanancias(float ganancias);

};

//Constructor
Estadio::Estadio(/* args */)
{
}

//Getters & Setters
//nombre
string Estadio::getNombre() const
{
    return nombre;
}
void Estadio::setNombre(string nombre)
{
    this-> nombre = nombre;
}

//numAsiento
int Estadio::getNumAsiento() const
{
    return numAsiento;
}
void Estadio::setNumAsiento(int numAsiento)
{
    this-> numAsiento = numAsiento;
}

//preAsiento
int Estadio::getPreAsiento() const
{
    return preAsiento;
}
void Estadio::setPreAsiento(int preAsiento)
{
    this-> preAsiento = preAsiento;
}

//ganancias
float Estadio::getGanancias() const
{
    return ganancias;
}
void Estadio::setGanancias(float ganancias)
{
    this-> ganancias = ganancias;
}

//Destructor
Estadio::~Estadio()
{
}

//Final de la definicion
#endif //ESTADIO_H_