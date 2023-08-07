//Esta es la parte de la cabecera; 

/*
12/07/2023 La clase de Vehiculo.cpp, donde se supone que debverian ir las implementaciones, me esta dando error a la hora de ejecutar el codigo en StartVehiculo.cpp, el error que me 
estaba dando era de que no estaban definidos los getters y setters y el constructor ni destructor. Entonces pensé en implementarlo en la cabecera porque es donde estan las 
definiciones y aqui si me funciona y no me da error. Seguire actualizando segun vaya avanzando en el tutorial.
*/

/*

La clase abstracta esta formada por metodos abstractos, su caracteristica principal es que dentro de una jerarquia (clase que heredan hijos) nosotros podemos definir un metodo 
abstracto que no se implementa en la clase padre sino en la clase hija
En el momento en el que pones un metodo abstracto en una clase, esta clase se vuelve abstracta y no puedes crear objetos de la clase abstracta
*/

#ifndef VEHICULO_H_ //Significa que si la constante de vehiculo h no esta definida entonces se ejecuta todo lo que haya dentro del if, si se defino no se ejecuta
#define VEHICULO_H_

class Vehiculo
{
private:
    /* solo exclusivos desde esta clase no se puede acceder ni desde los hijos ni del exterior */
    int codigo;
protected:
    /* son accesibles desde los hijos(herencia) pero no desde el exterior */
    float precio;
    float velocidad;
    int tipoArranque;
public:
    /* todos pueden acceder, por buenas practicas de programacion es dificil que un atributo sea publico */
    Vehiculo(/* args */); //Esto seria el constructor de la clase
    virtual ~Vehiculo();  //Esto seria el destructor de la clase se ejecuta cuando el objeto se elimina del programa

    float getPrecio() const; //Getter
    void setPrecio(float precio); //Setter

    float getVelocidad() const; //Getter
    void setVelocidad(float velocidad); //Setter

    virtual void arrancar() = 0;//Metodo abstracto, debo definirlo e implementarlo dentro de las clases hijas, si no lo hago dará error


};

Vehiculo::Vehiculo()
{
    this->precio = 0.0f;
    this->velocidad = 0.0f;

}


//Getters y setters
float Vehiculo::getPrecio() const
{
return precio;
}

void Vehiculo::setPrecio(float precio)
{
    this->precio = precio;
}

float Vehiculo::getVelocidad() const
{
return velocidad;
}

void Vehiculo::setVelocidad(float velocidad)
{
    this->velocidad = velocidad;
}
//Destructor
Vehiculo::~Vehiculo()
{
    
}

#endif /*VEHICULO_H_*/