#include <iostream>
using namespace std;

int main()
{
    // creamos el tamaño del arreglo y se hace un bucle para solicitar los datos y ponerlos en su respectivo arreglo//////////////////

    int a[5];
    int tamanio = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < tamanio; i++)
    {
        cout << "ingrese los valores" << endl;
        cin >> a[i];
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // Numero menor del arreglo ///////////////////////////////////////////////////////////////////7////////////////////////////////////

    int menor = a[0];                 // asigamos la variable menor como a[0]
    for (int i = 1; i < tamanio; i++) // ponemos que el bucle comience en 1 porque el 0 ya lo tenemos asignado
    {
        if (a[i] < menor) // usamos el if para hacer una comparacion del primer arreglo a[1] si es "menor" que a[0] osea la variable menor
        {
            menor = a[i]; // el arreglo que cumpla esta condicion se convierte en el nuevo menor
        }
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////

    // Numero mayor del arreglo /////////////////////////////////////////////////////////////////////7////////////////////////////////////
    int mayor = a[0]; // asigamos la variable mayor como a[0]
    for (int i = 1; i < tamanio; i++)
    {
        if (a[i] > mayor) // usamos el if para hacer una comparacion del primer arreglo a[1] si es "mayor" que a[0] osea la variable mayor
        {
            mayor = a[i]; // el arreglo que cumpla esta condicion se convierte en el nuevo mayor
        }
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // imprimimos cada variables de los bucles anteriores///////////////////////////////////////////////////////////////////////////////
    cout << "el numero menor es " << menor << endl;
    cout << "el numero mayor es " << mayor << endl;
    // imprimimos esto para el siguiente bucle
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // Numeros se repiden en el arreglo ////////////////////////////////////////////////////////////////////////////////////////////////
    for (int i = 0; i < tamanio - 1; i++)
    {
        for (int j = i + 1; j < tamanio; j++)
        {
            if (a[i] == a[j])
            {
                cout << "los numeros que se repiten en el arreglo son: " << a[i];
                break;
            }
        }
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // menor a mayor ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    for (int i = 0; i < tamanio - 1; i++)
    {
        for (int j = 0; j < tamanio - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tempo = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tempo;
            }
        }
    }
    cout << endl
         << "El arreglo ordenado de menor a mayor es: ";

    for (int i = 0; i < tamanio; i++)
    {
        cout << a[i] << " ";
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////7//

    // mayor a menor//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    for (int i = 0; i < tamanio - 1; i++)
    {
        for (int j = 0; j < tamanio - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                int tempo = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tempo;
            }
        }
    }
    cout << endl
         << "El arreglo ordenado de mayor a menor es: ";
    for (int i = 0; i < tamanio; i++)
    {
        cout << a[i] << " ";
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // HALLAMOS EL PROMEDIO////////////////////////////////////////////////////////////////////////////////////

    float suma;
    for (int i = 0; i < tamanio; i++)
    {
        suma += a[i];
    }
    cout << endl
         << "La suma de los elementos del arreglo son " << suma << endl;

    float promedio = suma / tamanio;
    cout << "El promedio del arreglo es: " << promedio;

    for (int i = 0; i < tamanio - 1; i++)
    {
        for (int j = 0; j < tamanio - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tempo = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tempo;
            }
        }
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // PARA HALLAR LA MEDIANA TENEMOS QUE ORDENARLO DE MAYOR A MENOR

    for (int i = 0; i < tamanio - 1; i++)
    {
        for (int j = 0; j < tamanio - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tempo = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tempo;
            }
        }
    }

    // HALLAMOS LA  MEDIANA////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int mediana;

    mediana = (tamanio - 1) / 2;
    cout << endl
         << "La mediana es: " << a[mediana];
    //}
    a[mediana] = 25;
    cout << endl
         << "El nuevo valor de la media es: " << a[mediana];
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    return 0;
}