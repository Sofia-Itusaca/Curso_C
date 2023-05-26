// Determinar si un numero es par o impar, impromir la direccion de memoria (hacer uso del if)

#include <iostream>
using namespace std;

int main()
{
    int numer;
    cout << "Ingrese un munero entero\n";
    cin >> numer;

    // si el numero es divisible entre 2 es par y si no es impar.
    if (numer % 2 == 0)
    {
        cout << "El numero es par\n";
    }
    else
    {
        cout << "El numero es impar\n";
    }

    // Para la direccion de memoria colocamos un valor (a) y le pedimos su direccion con (&).
    int a;
    cout << "\nLa direcion de memoria es:"
         << endl
         << &a;

    return 0;
}