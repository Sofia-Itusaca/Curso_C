/*PREGUNTA NUEVE:

Escriba un programa que solicite al usuario ingresar un número entero positivo y luego imprima
la secuencia de números desde 1 hasta el número ingresado, pero reemplazando los múltiplos de 3 por la palabra "Fizz"
y los múltiplos de 5 por la palabra "Buzz".Si el número es múltiplo tanto de 3 como de 5, imprimir "FizzBuzz".*/

////////////////////TERMINADO/////////////////////////////////

#include <iostream>
using namespace std;

// esta funcion es para hacer el cambio de "Fizz" y de "Buzz"
void cambio(int num)
{
    cout << "los numeros son : \n";
    for (int i = 1; i <= num; i++)
    {
        if (i % 3 == 0)
        {
            // entran los multiplos de 3
            if (i % 5 == 0)
            {
                // entran solo los ultipols de 3 y 5
                cout << "FizzBuzz" << endl;
            }
            else
            {
                // entran los multiplos unicamente de 3
                cout << "Fizz" << endl;
            }
        }
        else if (i % 5 == 0)
        {
            // entran solo los multiplos de 5
            if (i % 3 == 0)
            {
                // entran solo los ultipols de 5 y 3
                cout << "FizzBuzz" << endl;
            }
            else
            {
                // entran los multiplos unicamente de 5
                cout << "Buzz" << endl;
            }
        }
        else
        {
            cout << i << endl;
        }
    }
}
int main()
{
    int num;
    cout << "Ingrese un numero:" << endl;
    cin >> num;
    // llamamos a la funcion mencionada
    cambio(num);
    return 0;
}