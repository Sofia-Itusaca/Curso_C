#include <iostream>
using namespace std;

int main()
{

    int Numero[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // declaramos el arreglo.

    int tamaño = sizeof(Numero) / sizeof(Numero[0]);
    cout << "\n"
         << "el tamaño es="
         << tamaño << endl;

    for (int i = 0; i < 10; i++) // Para recorrer la lista se hace uso de for.
    {
        cout << "\n"
             << "El valor del arreglo Numero es[" << i << "]" << Numero[i];
    }

    //////////////////////////////////////////////////////////////////////////////////////////////////
    int Numeros[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}; // declaramos el arreglo.

    int tamaños = sizeof(Numeros) / sizeof(Numeros[0]);
    cout << "\n"
         << "El tamaño grupo 2 es ="
         << tamaños << endl;

    for (int i = 0; i < 10; i++) // Para recorrer la lista se hace uso de for.
    {
        cout << "\n"
             << "El valor del arreglo Numero es[" << i << "]" << Numeros[i];
    }

    // sacamos el menor /////////////////////////////////////////////////////////////////7

    int menor = Numero[0];

    for (int i = 1; i < tamaño; i++)
    {
        if (Numero[i] < menor)
        {
            menor = Numero[i]; // actualizamos el valor del menor.
        }
    }
    cout << endl
         << "El numero menor  es " << menor << endl;

    // sacamos el mayor ///////////////////////////////////////////////////////////////////////////
    int mayor = Numeros[0];

    for (int i = 1; i < tamaño; i++)
    {
        if (Numeros[i] > mayor)
        {
            mayor = Numeros[i]; // actualizamos el valor del menor.
        }
    }
    cout << endl
         << "El numero mayor  es " << mayor;

    // menor a mayor///////////////////////////////////////////////////////////////////////////

    for (int i = 0; i < tamaño - 1; i++)
    {
        for (int j = 0; j < tamaño - i - 1; j++)
        {
            if (Numero[j] > Numero[j + 1])
            {
                int tempo = Numero[j];
                Numero[j] = Numero[j + 1];
                Numero[j + 1] = tempo;
            }
        }
    }
    cout << endl
         << "El arreglo ordenado de menor a mayor es: ";

    for (int i = 0; i < tamaño; i++)
    {
        cout << Numero[i] << " ";
    }

    // mayor a menor///////////////////////////////////////////////////////////////////////////
    for (int i = 0; i < tamaño - 1; i++)
    {
        for (int j = 0; j < tamaño - i - 1; j++)
        {
            if (Numero[j] < Numero[j + 1])
            {
                int tempo = Numero[j];
                Numero[j] = Numero[j + 1];
                Numero[j + 1] = tempo;
            }
        }
    }
    cout << endl
         << "El arreglo ordenado de mayor a menor es: ";
    for (int i = 0; i < tamaño; i++)
    {
        cout << Numero[i] << " ";
    }

    /*float suma;
    for (int i = 0; i < tamaño; i++)
    {
        suma += a[i];
    }
    cout << endl
         << "La suma de los items del arreglo son " << suma << endl;*/

    return 0;
}