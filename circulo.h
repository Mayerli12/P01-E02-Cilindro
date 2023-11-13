#ifndef CIRCULO_H
#define CIRCULO_H


class Circulo
{
private:
    double radio;
public:
    Circulo();
    Circulo(double r);
    void setRadio(double newRadio);
    double area();
};

#endif // CIRCULO_H
