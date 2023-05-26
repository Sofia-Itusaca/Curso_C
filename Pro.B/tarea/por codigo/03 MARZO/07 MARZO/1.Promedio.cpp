// hacer un programa que calcule el promedio de 3 notas y calcular si esta aprobado o no, considerando que 10.5 es aprobado.

#include <iostream>
using namespace std;

int main()
{
    // double = es usado para numeros decimales.
    double prom;

    // Hacemos pedido de las 3 notas.
    cout << "Ingrese su primera nota \n";
    double nota1;
    cin >> nota1;

    cout << "Ingrese su segunda nota\n";
    double nota2;
    cin >> nota2;

    cout << "Ingrese su tercera nota\n";
    double nota3;
    cin >> nota3;

    // Calculamos el promedio de las notas introducidas.
    prom = (nota1 + nota2 + nota3) / 3;

    // Establecemos si el alumno esta aprobado o desaprobado colocandole su promedio al final.
    if (prom > 10.5)
    {
        cout << "Usted esta aprobado con un promedio de: ";
        cout << prom;
    }
    else
    {
        cout << "Usted esta desaprobado con un promedio de: ";
        cout << prom;
    }

    return 0;
}
