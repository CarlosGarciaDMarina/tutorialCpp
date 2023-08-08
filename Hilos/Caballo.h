#ifndef CABALLO_H_
#define CABALLO_H_

#include <iostream>
#include <string>
#include <chrono>
#include <random>
#include <thread>

using namespace std;

class Caballo
{
private:
    /* data */
protected:
    /*data*/ 
    string nombre;
    int segundos;
    int id;
    long tiempoFinalizacion;
    
public:
    Caballo(/* args */); // Constructor de la clase
    Caballo(string nombre, int id); 
    virtual ~Caballo();

    string getNombre() const; //Getter
    void setNombre(string nombre); //Setter

    int getSegundos() const; //Getter
    void setSegundos(int segundos); //Setter

    int getId() const; //Getter
    void setId(int id); //Setter

    long getTiempoFinalizacion() const; //Getter
    void setTiempoFinalizacion(long tiempoFinalizacion); //Setter

    void run(); //Metodo

};
//Contructor
Caballo::Caballo(string nombre, int id)
{
    this->nombre= nombre;
    this->id = id;
    this->segundos = 5;
}
Caballo::Caballo()
{
    
}

//Getters & Setters
//Nombre
string Caballo::getNombre() const
{
    return nombre;
}
void Caballo::setNombre(string nombre)
{
    this->nombre = nombre;
}

//ID
int Caballo::getId() const
{
    return id;
}
void Caballo::setId(int id)
{
    this->id = id;
}

//Segundos
int Caballo::getSegundos() const
{
    return segundos;
}
void Caballo::setSegundos(int segundos)
{
    this->segundos = segundos;
}

//Tiempo de finalizacion
long Caballo::getTiempoFinalizacion() const
{
    return tiempoFinalizacion;
}
void Caballo::setTiempoFinalizacion(long tiempoFinalizacion)
{
    this->tiempoFinalizacion = tiempoFinalizacion;
}

//Método
void Caballo::run()
{
    //Abrimos un try-catch para gestionar posibles errores
    try
    {
        // Aplicamos aleatoridad en los segundos en los que va a salir cada caballo

        // Dentro de la función run
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(1, 20);

        segundos = dis(gen);

        //Abrimos condionales
        if (id == 1)
        {
            // Avisamos que sale el caballo
            cout << "Sale " << nombre << endl;

            // Introducimos la pausa al hilo
            this_thread::sleep_for(chrono::milliseconds(segundos*100));

            // Avisamos del resultado
            cout << "El caballo " << nombre << " ha tardado " << segundos << "segundos." << endl;
        }
        else if (id == 2)
        {
            // Avisamos que sale el caballo
            cout << "Sale " << nombre << endl;

            // Introducimos la pausa al hilo
            this_thread::sleep_for(chrono::milliseconds(segundos*100));

            // Avisamos del resultado
            cout << "El caballo " << nombre << " ha tardado " << segundos << "segundos." << endl;        
        }
        else if (id == 3)
        {
            // Avisamos que sale el caballo
            cout << "Sale " << nombre << endl;

            // Introducimos la pausa al hilo
            this_thread::sleep_for(chrono::milliseconds(segundos*100));

            // Avisamos del resultado
            cout << "El caballo " << nombre << " ha tardado " << segundos << "segundos." << endl;        
        }
        else
        {
            // Avisamos que ha ocurrido un error al introducir la id del caballo
            cout << "Ha ocurrido un error." << endl;       
        }
        tiempoFinalizacion = chrono::duration_cast<chrono::milliseconds>(chrono::system_clock::now().time_since_epoch()).count();
    }
    catch(...)
    {
        cout << "Ha ocurrido un error inesperado." << endl;
    }
    
}

//Desctructor
Caballo::~Caballo()
{
}

//Cerramos el if
#endif