#include "circulo.h"

void Circulo::setRadio(double newRadio)
{
    radio = newRadio;
}

double Circulo::area()
{
    const double PI = 3.14159265;
    return (PI * radio * radio);
}

Circulo::Circulo()
{

}

Circulo::Circulo(double r) : radio(r)
{}
