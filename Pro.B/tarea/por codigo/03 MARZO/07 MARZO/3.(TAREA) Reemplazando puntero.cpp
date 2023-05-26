//  reemplazar el valor del ejercicio anterior con el valor 53 atravez de puntero (inicializando la direccion de puntero*p=a;----------*p=53;)
#include <iostream>
using namespace std;

// copiamos el codigo del ejercicio par o impar y le cambiamos el la direcion de puntero.
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

    // Para cambiar la direccion de memoria colocamos un valor a = 5 (que pudo aver sido cualquier valor).
    int a;
    int *p;
    a = 5;
    p = &a;
    *p = 53; // damos el valor que queremos que nos muestre a *p y luego lo mostramos.
    cout << "\nLa direcion de memoria es:"
         << endl
         << a;

    return 0;
}