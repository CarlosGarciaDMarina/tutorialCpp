#ifndef AULA_H_
#define AULA_H_

#include "Mesa.h"
#include "Silla.h"

using namespace std;

class Aula
{
private:
    /* data */
protected:
    Mesa me1;
    Mesa me2;
    Silla si1;
    Silla si2;
    Silla si3;
    Silla si4;
    
public:
    Aula(/* args */);
    virtual ~Aula();

    //SILLAS
    const Silla& getSi1() const;
    void setSi1(const Silla &si1);

    const Silla& getSi2() const;
    void setSi2(const Silla &si2);

    const Silla& getSi3() const;
    void setSi3(const Silla &si3);

    const Silla& getSi4() const;
    void setSi4(const Silla &si4);

    //MESAS
    const Mesa& getMe1() const;
    void setMe1(const Mesa &me1);

    const Mesa& getMe2() const;
    void setMe2(const Mesa &me2);
};
//Constructor
Aula::Aula(/* args */)
{
}

//Getters & Setters
//SILLAS
const Silla &Aula::getSi1() const
{
return si1;
}

void Aula::setSi1(const Silla &si1)
{
    this-> si1 = si1;
}





const Silla &Aula::getSi2() const
{
return si2;
}

void Aula::setSi2(const Silla &si2)
{
    this-> si2 = si2;
}






const Silla &Aula::getSi3() const
{
return si3;
}
void Aula::setSi3(const Silla &si3)
{
    this-> si3 = si3;
}





const Silla &Aula::getSi4() const
{
return si4;
}

void Aula::setSi4(const Silla &si4)
{
    this-> si4 = si4;
}




//MESAS
const Mesa &Aula::getMe1() const
{
return me1;
}

void Aula::setMe1(const Mesa &me1)
{
    this-> me1 = me1;
}
const Mesa &Aula::getMe2() const
{
return me2;
}

void Aula::setMe2(const Mesa &me2)
{
    this-> me2 = me2;
}

//Destructor
Aula::~Aula()
{
}




#endif //AULA_H_

