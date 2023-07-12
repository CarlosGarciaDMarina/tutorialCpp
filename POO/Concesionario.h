#ifndef CONCESIONARIO_H_
#define CONCESIONARIO_H_

#include "Coche.h"
#include "Moto.h"

class Concesionario
{
private:
    /* data */
protected:
    Coche c1;
    Coche c2;
    Coche c3;
    Moto m1;
    Moto m2;
public:
    Concesionario(/* args */);
    virtual ~Concesionario();
    const Coche& getC1() const;
    void setC1(const Coche &c1);
    const Coche& getC2() const;
    void setC2(const Coche &c2);
    const Coche& getC3() const;
    void setC3(const Coche &c3);
    const Moto& getM1() const;
    void setM1(const Moto &m1);
    const Moto& getM2() const;
    void setM2(const Moto &m2);

};


Concesionario::Concesionario()
{
}

Concesionario::~Concesionario()
{
}

const Coche &Concesionario::getC1() const
{
// TODO: insert return statement here
return c1;
}

void Concesionario::setC1(const Coche &c1)
{
    this->c1 = c1;
}

const Coche &Concesionario::getC2() const
{
    // TODO: insert return statement here
    return c2;

}

void Concesionario::setC2(const Coche &c2)
{
    this->c2 = c2;

}

const Coche &Concesionario::getC3() const
{
    // TODO: insert return statement here
    return c3;

}

void Concesionario::setC3(const Coche &c3)
{
    this->c3 = c3;

}

const Moto &Concesionario::getM1() const
{
    // TODO: insert return statement here
    return m1;

}

void Concesionario::setM1(const Moto &m1)
{
    this->m1 = m1;
}

const Moto &Concesionario::getM2() const
{
    // TODO: insert return statement here
    return m2;

}

void Concesionario::setM2(const Moto &m2)
{
    this->m2 = m2;
}






#endif /*CONCESIONARIO_H_*/