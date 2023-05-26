// CUARTA PREGUNTA:  Escribir un programa que encuentre el número mayor, el número menor, el promedio, la media , la mediana ,
//                   cual es el número que se repite más veces de un arreglo de enteros de 10 ítems.
////////////////////TERMINADO/////////////////////////////////
#include <iostream>
using namespace std;

int main()
{
    // declaramos el arreglo de 10.
    int Numero[10] = {5, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Colocamos un 2 nuemors iguales en este caso 5.
    int tamaño = sizeof(Numero) / sizeof(Numero[0]);

    // NUMERO MAYOR ////////////////////////////////////////7
    int mayor = Numero[0];

    for (int i = 1; i < tamaño; i++)
    {
        if (Numero[i] > mayor)
        {
            mayor = Numero[i]; // actualizamos el valor del menor.
        }
    }
    cout << endl
        << "El numero mayor es: " << mayor;
    ////////////////////////////////////////7/////////////////////

    // NUMERO MENOR ////////////////////////////////////////7
    int menor = Numero[0];

    for (int i = 1; i < tamaño; i++)
    {
        if (Numero[i] < menor)
        {
            menor = Numero[i]; // actualizamos el valor del menor.
        }
    }
    cout << endl
         << "El numero menor es: " << menor << endl;
    ////////////////////////////////////////7/////////////////////

    // PROMEDIO  ////////////////////////////////////////7
    float suma;
    for (int i = 0; i < tamaño; i++)
    {
        suma += Numero[i];
    }

    float promedio = suma / tamaño;
    cout << "El promedio del arreglo es: " << promedio;

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
    ////////////////////////////////////////7/////////////////////

    // MEDIANA  ////////////////////////////////////////7
    for (int i = 0; i < tamaño - 1; i++) // PARA HALLAR LA MEDIANA TENEMOS QUE ORDENARLO DE MAYOR A MENOR
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
    } // ya despues de averlo ordenado recien hallamos la mediana

    int mediana;

    mediana = (tamaño - 1) / 2;
    cout << endl
         << "La mediana es: " << Numero[mediana] << endl;
    ////////////////////////////////////////7/////////////////////

    // EL NUMERO QUE SE REPITE ////////////////////////77
    for (int i = 0; i < tamaño - 1; i++)
    {
        for (int j = i + 1; j < tamaño; j++)
        {
            if (Numero[i] == Numero[j])
            {
                cout << "El numero que se repite es: " << Numero[i];
                break;
            }
        }
    }
    ////////////////////////////////////////7/////////////////////

    return 0;
}
