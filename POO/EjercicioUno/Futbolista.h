// Esta es la cabecera y la implementacion, recuerda que en vs code se implementa todo junto
//Librerias
#ifndef FUTBOLISTA_H_
#define FUTBOLISTA_H_

using namespace std;

class Futbolista
{
private:
    /* data */
protected:
    /*data*/
    int dorsal;
    string nombre;
    string apodo;
    float altura;
public:
    //Constructor y destructor
    Futbolista(/* args */);
    virtual ~Futbolista();

    //Getters y setters
    int getDorsal() const;
    void setDorsal(int dorsal); 

    string getNombre() const;
    void setNombre(string nombre);

    string getApodo() const;
    void setApodo (string apodo);

    float getAltura() const;
    void setAltura (float altura);

};

//Constructor y destructor
Futbolista::Futbolista(/* args */)
{
}

//Getters y setters
int Futbolista::getDorsal() const
{
    return dorsal;
}
void Futbolista::setDorsal(int dorsal)
{
    this-> dorsal = dorsal;
}

string Futbolista::getNombre() const
{
    return nombre;
}

void Futbolista::setNombre(string nombre)
{
    this-> nombre = nombre;
}

string Futbolista::getApodo() const
{
    return apodo;
}
void Futbolista::setApodo(string apodo)
{
    this-> apodo = apodo;
}

float Futbolista::getAltura() const
{
    return altura;
}
void Futbolista::setAltura(float altura)
{
    this-> altura = altura;
}


//Destructor
Futbolista::~Futbolista()
{
}

#endif //FUTBOLISTA_H_
