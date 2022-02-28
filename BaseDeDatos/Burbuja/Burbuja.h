#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#ifndef BURBUJA_H
#define BURBUJA_H

#define TAMARREGLO 20

class Burbuja 
{
private:
    int arreglo[TAMARREGLO];
    int tope;
public:
    Burbuja();
    void burbuja();
    int  Cardinalidad();
    void Despliega();
    bool EsElemento();
    void Inserta();
    void Menu();
};

#endif /* BURBUJA_H */
