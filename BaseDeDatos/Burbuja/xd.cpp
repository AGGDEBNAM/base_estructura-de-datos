#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
                                                                   
bool elementoRepetido(vector<int> arreglo, int i, int element) {
    vector<int>::iterator it;
    it = find(arreglo.begin(), arreglo.begin() + i, element);
    if ((it != arreglo.begin() + i)) {
        return false;
    }
    else
        return true;
}

void imprimeArreglo(vector<int> arreglo) {
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    
    cout << "\n";
}

void llenarArreglo(vector<int>& arreglo) {
    cout << "Llenando arreglo de " << arreglo.size() << " elementos\n";
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> arreglo[i];
        if (!(elementoRepetido(arreglo, i, arreglo[i])))
        {
            i--;
            cout << "ingresaste un numero repetido :/, ingresa otra vez el dato.\n";
        }
    }
}

void insertionSort(vector<int> &arreglo) {
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        int key = arreglo[i], j = i - 1;
        while (j >= 0 && arreglo[j] > key)
        {
            arreglo[j + 1] = arreglo[j];
            j = j - 1;
        }
        arreglo[j + 1] = key;
        cout << "Arreglo despues de la iteracion " << i + 1 << " :";
        imprimeArreglo(arreglo);
    } 
}

void swap(int* j, int* i) {
    int temp = *j;
    *j = *i;
    *i = temp;
}

void selectionSort(vector<int>& arreglo) {
    int min_index = 0;
    size_t j = 0, i = 0;
    for (i = 0; i < arreglo.size() - 1; i++)
    {
        min_index = i;
        for (j = i + 1; j < arreglo.size(); j++)
        {
            if (arreglo[j] < arreglo[min_index])
                min_index = j;
        }
        swap(&arreglo[min_index], &arreglo[i]);
        cout << "Arreglo despues de la iteracion " << i + 1 << " :";
        imprimeArreglo(arreglo);
    }
}

void bubbleSort(vector<int>& arreglo) {
    for (size_t i = 0; i < arreglo.size() - 1; i++)
    {
        for (size_t j = 0; j < arreglo.size() - i - 1; j++)
        {
            if (arreglo[j] > arreglo[j + 1]) {
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
        cout << "Arreglo despues de la iteracion " << i + 1 << " :";
        imprimeArreglo(arreglo);
    }
}
void menu() {
    int N = 0;
    while (true) {
        cout << "Ingresa el tamanio del arreglo: ";
        cin >> N;
        if (N >= 2 and N <= 20)
            break;
        else
            cout << "Numero invalido, porfavor intenta de nuevo\n";
    }
    vector<int> arreglo(N);
    llenarArreglo(arreglo);
    cout << "Arreglo inicial: ";
    imprimeArreglo(arreglo);
    selectionSort(arreglo);
    cout << "Arreglo ya ordenado: ";
    imprimeArreglo(arreglo);
}

int main()
{
    int min,i,j,aux;
        for (i=0; i<tope-1; i++) 
        {
              min=i;
              for(j=i+1; j<n; j++)
                    if(arreglo[min] > arreglo[j])
                       min=j;
              aux=arreglo[];
              arreglo[min]=A[i];
              arreglo[i]=aux ;
        }
}