#include <iostream>
using namespace std;

void suma_total(int arreglo[], int tamaño)
{
    int suma = 0;
    for (int i = 0; i < tamaño; i++)
    {
        suma += arreglo[i];
    }
    // suma = numero1 + numero2;
    cout << "la sumatoria es: " << suma;
}

int main()
{
    // delclara arreglo forma 1
    // int arreglo[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // forma 2
    // int maximo = 10;
    int arreglo[10];
    int maximo = sizeof(arreglo) / sizeof(arreglo[0]);

    for (int i = 0; i < maximo; i++)
    {
        arreglo[i] = i + 1;
        cout << arreglo[i];
    }
    suma_total(arreglo, maximo);

    return 0;
}