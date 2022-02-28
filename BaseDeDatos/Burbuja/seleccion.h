#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#ifndef SELECCION_H
#define SELECCION_H

#define TAMARREGLO 20

class Seleccion 
{
private:
    int arreglo[TAMARREGLO];
    int tope;
public:
    Seleccion();
    void seleccion();
    int  Cardinalidad();
    void Despliega();
    bool EsElemento();
    void Inserta();
    void Menu();
};

#endif /* SELECCION_H */