/*/PREGUNTA 1:
Escribir un programa que calcule la suma de los números pares e impares de un arreglo de enteros.*/
////////////////////TERMINADO/////////////////////////////////

#include <iostream>
using namespace std;

void suma_par(int par[], int tamaño)
{
    int suma = 0;
    for (int i = 0; i < tamaño; i++)
    {
        suma += par[i];
    }
    // suma = numero1 + numero2;
    cout << "la sumatoria de los pares es:\n " << suma;
}

void suma_pares_impares(int arreglo[], int tamano, int &suma_pares, int &suma_impares)
{

    suma_pares = 0;
    suma_impares = 0;

    for (int i = 0; i < tamano; i++)
    {

        if (arreglo[i] % 2 == 0)
        {

            suma_pares += arreglo[i];
        }
        else
        {
            suma_impares += arreglo[i];
        }
    }
}

int main()
{
    int arreglo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);
    int suma_pares, suma_impares;
    suma_pares_impares(arreglo, tamano, suma_pares, suma_impares);

    cout << "La suma de los numeros pares es: " << suma_pares << endl;
    cout << "La suma de los numeros impares es: " << suma_impares << endl;

    return 0;
}
