//Esta es la parte de la cabecera
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
public:
    /* todos pueden acceder, por buenas practicasz de programacion es dificil que un atributo sea publico */
    Vehiculo(/* args */); //Esto seria el constructor de la clase
    virtual ~Vehiculo();  //Esto seria el destructor de la clase se ejecuta cuando el objeto se elimina del programa

    float getPrecio() const; //Getter
    void setPrecio(float precio); //Setter

    float getVelocidad() const; //Getter
    void setVelocidad(float velocidad); //Setter
};

Vehiculo::Vehiculo(/* args */)
{
}

Vehiculo::~Vehiculo()
{
}
#endif /*VEHICULO_H_*/