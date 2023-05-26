//  Determinar si un numero es primo e imprimir la direccion de memoria. ( )
#include <iostream>
using namespace std;

int main()
{
    // Un numero primo solo se debe  divirse entre 1 y su mismo valor, si no , no es primo.

    int numer;
    cout << "ingrese un numero entero\n";
    cin >> numer;

    // se tiene que poner una variable de recorrido para verificar
    // que el numero colado no es divisible por otro numero que no sea 1 o si mismo.

    bool primo(int numer);
    {
        int contador = 2;
        int final = numer - 1; // El numero 1 es primo pero para que nos ayude en el codigo lo restamos y nos saldria entero las visiones.
        bool primo = true;

        while (contador < final) // Controlamos el final del contador para que le resultado de que se pueden dividir mas numeros sea demostrado.
        {
            if (numer % contador == 0)
            {
                contador = final - 1;
                bool primo = false;
                cout << "El numero no es primo";
            }
            else
            {
                cout << "El numero es primo";
                break; // Damos un break para que esta opcion no se retita varias veces en un mismo plano.
            }
            contador++;
        }
    }
    return 0;
}
