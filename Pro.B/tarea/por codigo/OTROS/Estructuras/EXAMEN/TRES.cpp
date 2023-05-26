// TERCERA PREGUNTA : Escribir un programa que solicite al usuario un arreglo y
//   luego ordene el arreglo de mayor a menor y de menor a mayor .
////////////////////TERMINADO/////////////////////////////////
#include <iostream>
using namespace std;

int main()
{
    // Solicitamos al usuario que ingrese 5 elementos (numeros).
    cout << "VAMOS A INGRESAR 5 NUMEORS PARA NUESTRO ARREGLO\n";

    int numeros[5];
    int tamaño = sizeof(numeros) / sizeof(numeros[0]);
    for (int i = 0; i < tamaño; i++) // colocamos el for para pedir las veces que se necesiten para colocar un numero.
    {
        cout << "ingrese los numeros:" << endl;
        cin >> numeros[i];
    }

    // MENOR A MAYOR  ///////////////////////////////////////

    for (int i = 0; i < tamaño - 1; i++)
    {
        for (int j = 0; j < tamaño - i - 1; j++)
        {
            if (numeros[j] > numeros[j + 1])
            {
                int tempo = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = tempo;
            }
        }
    }
    cout << endl
         << "Su arreglo ordenado de menor a mayor es: ";

    for (int i = 0; i < tamaño; i++)
    {
        cout << numeros[i] << " ";
    }

    // MAYOR A MENOR ///////////////////////////////////////

    for (int i = 0; i < tamaño - 1; i++)
    {
        for (int j = 0; j < tamaño - i - 1; j++)
        {
            if (numeros[j] < numeros[j + 1])
            {
                int tempo = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = tempo;
            }
        }
    }
    cout << endl
         << "Su arreglo ordenado de mayor a menor es: ";
    for (int i = 0; i < tamaño; i++)
    {
        cout << numeros[i] << " ";
    }

    return 0;
}