#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


#include "Seleccion.h"

using namespace std;

int main()
{
    cout << "METODO Seleccion" <<endl;
    Seleccion b;
    b.Menu();
}

Seleccion::Seleccion() 
{
    tope = -1;
}

void Seleccion::Despliega()
{
    for(int i = 0; i <= tope; i++)
        cout << arreglo[i] << "\t";
    cout << endl;
}

bool Seleccion::EsElemento()
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


void Seleccion::Inserta()
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

void Seleccion::Menu() 
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
    seleccion();
    cout << "Arreglo ya ordenado: ";
    Despliega();
}

void Seleccion::seleccion()
{
    int min,i,j,aux;
        for (i=0; i<tope-1; i++) 
        {
              min=i;
              for(j=i+1; j<tope; j++)
                    if(arreglo[min] > arreglo[j])
                       min=j;
                Despliega();
              aux=arreglo[min];
              arreglo[min]=arreglo[i];
              arreglo[i]=aux ;
        }
}