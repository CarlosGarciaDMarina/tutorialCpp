// 4.- Crear una clase deportista que posea los atr: nombre, dni y edad. Esta clase sera padre de la clase futbolista que posee el atributo dorsal diferente a la clase padre
// tenemos que pedir al usuario los datos e incluirlos en cada objeto.
//Cabecera e implementaciones
// Definicion
#ifndef DEPORTISTA_H_
#define DEPORTISTA_H_

//Usos
using namespace std;

//Clase
class Deportista
{
private:
    /* Atributos */
protected:
    /* Atributos */
    string nombre;
    string dni;
    int edad;
public:
    //Constructor y destructor
    Deportista(/* args */);
    virtual ~Deportista();

    //Getters y setters
    string getNombre() const;
    void setNombre(string nombre);

    string getDni() const;
    void setDni(string dni);

    int getEdad() const;
    void setEdad(int edad);

};
//Constructor
Deportista::Deportista(/* args */)
{
}

//Getters & Setters
//nombre
string Deportista::getNombre() const
{
    return nombre;
}
void Deportista::setNombre(string nombre)
{
    this-> nombre = nombre;
}

//DNI
string Deportista::getDni()const
{
    return dni;
}
void Deportista::setDni(string dni)
{
    this-> dni = dni;
}

//Edad
int Deportista::getEdad() const
{
    return edad;
}
void Deportista::setEdad(int edad)
{
    this-> edad = edad;
}

//Destructor
Deportista::~Deportista()
{
}

#endif //DEPORTISTA_H_