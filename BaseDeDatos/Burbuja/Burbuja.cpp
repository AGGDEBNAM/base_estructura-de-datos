#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


#include "Burbuja.h"

using namespace std;

int main()
{
    cout << "METODO BURBUJA" <<endl;
    Burbuja b;
    b.Menu();
}

Burbuja::Burbuja() 
{
    tope = -1;
}

void Burbuja::Despliega()
{
    for(int i = 0; i <= tope; i++)
        cout << arreglo[i] << "\t";
    cout << endl;
}

bool Burbuja::EsElemento()
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


void Burbuja::Inserta()
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

void Burbuja::Menu() 
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
    burbuja();
    cout << "Arreglo ya ordenado: ";
    Despliega();
}

void Burbuja::burbuja()
{
    for (size_t i = 0; i < tope ; i++)
    {
        for (size_t j = 0; j < tope ; j++)
        {
            if (arreglo[j] > arreglo[j + 1]) {
                int alm = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = alm;
            }
        }
        cout << "Arreglo despues de la iteracion " << i + 1 << " :";
        Despliega();
    }
}