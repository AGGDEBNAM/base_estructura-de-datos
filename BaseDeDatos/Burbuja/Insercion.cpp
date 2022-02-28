#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


#include "Insercion.h"

using namespace std;

int main()
{
    cout << "METODO Insercion" <<endl;
    Insercion b;
    b.Menu();
}

Insercion::Insercion() 
{
    tope = -1;
}

void Insercion::Despliega()
{
    for(int i = 0; i <= tope; i++)
        cout << arreglo[i] << "\t";
    cout << endl;
}

bool Insercion::EsElemento()
{
int i,j;

    for(i=0;i<tope + 1;i++)
    {
        for(j=i+1;j<tope + 1;j++)
        {
            if(arreglo[i]==arreglo[j])
            {  
                return true;
            }
            else
                return false;
        }
    }
    return 0;
}


void Insercion::Inserta()
{
    for (size_t i = 0; i < tope + 1; i++)
    {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> arreglo[i];
        if(EsElemento() == true)
        {
            i--;
            cout << "ingresaste un numero repetido :/, ingresa otra vez el dato.\n";
        }
    }
}

void Insercion::Menu() 
{   
    int N = 0;
    while (true) 
    {
        cout << "Ingresa el tamanio del arreglo: ";
        cin >> N;
        if (N >= 2 and N <= 20)
            break;
        else
            cout << "Numero invalido, porfavor intenta de nuevo\n";
    }
    tope = N - 1;
    Inserta();
    cout << "Arreglo inicial: ";
    Despliega();
    insercion();
    cout << "Arreglo ya ordenado: ";
    Despliega();
}

void Insercion::insercion()
{
    for (size_t i = 0; i < tope + 1; i++)
    {
        int key = arreglo[i], j = i - 1;
        while (j >= 0 && arreglo[j] > key)
        {
            arreglo[j + 1] = arreglo[j];
            j = j - 1;
        }
        arreglo[j + 1] = key;
        cout << "Arreglo despues de la iteracion " << i + 1 << " :";
        Despliega();
    } 
}