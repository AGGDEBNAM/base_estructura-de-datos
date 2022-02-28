#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#ifndef INSERCION_H
#define INSERCION_H

#define TAMARREGLO 20

class Insercion 
{
private:
    int arreglo[TAMARREGLO];
    int tope;
public:
    Insercion();
    void insercion();
    int  Cardinalidad();
    void Despliega();
    bool EsElemento();
    void Inserta();
    void Menu();
};

#endif /* Insercion_H */