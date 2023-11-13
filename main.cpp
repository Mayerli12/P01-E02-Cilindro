#include <iostream>

// Incuir la definición de circulo (Sin esto no funciona)
#include "circulo.h"

#include "cilindro.h"

using namespace std;

int main()
{
    cout << "Práctica #01" << endl;
    cout << "Ejercicio 02: Cilindro" << endl;
    cout << "Autor: Rodrigo Tufiño" << endl << endl;

    // Instancia (creando) objeto circulo
    Circulo c(4.0);
    // Imprimiendo el area del circulo
    cout << "Area: " << c.area() << endl;

    Cilindro cil(4,9);
    cout << "Volumen: " << cil.volumen() << endl;

    return 0;
}
