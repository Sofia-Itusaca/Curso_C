// PREGUNTA CINCO: Escriba un programa que simule una calculadora con
//          funciones básicasde suma, resta, división y multiplicación,  el usuario deberá escoger que operación va a realizar
////////////////////TERMINADO/////////////////////////////////
#include <iostream>
using namespace std;

// COLOCMOS  EN FUNCIONES : SUMA , RETA , MULTIPLICACION Y DIVISION

int suma(int a, int b)
{
    int c = a + b;
    return c;
}

int resta(int a, int b)
{
    int c = a - b;
    return c;
}

int multiplicacion(int a, int b)
{
    int c = a * b;
    return c;
}

float division(float a, float b) // colocamos un float por que el resultado puede ser un decimal
{
    float c = a / b;
    return c;
}

int main()
{
    cout << "ingrese una opcion: \n 1: suma \n 2: resta \n 3: multiplicacion \n 4: division \n";
    int opcion;
    cin >> opcion;

    cout << "ingrese valor 1\n";
    float a;
    cin >> a;
    cout << "ingrese valor 2\n";
    float b;
    cin >> b;

    float resultado = 0;

    switch (opcion)
    {
    case 1:
        resultado = suma(a, b);
        cout << "\n";
        cout << "El resultado de la suma es: " << resultado;
        cout << "\n";
        break;
    case 2:
        resultado = resta(a, b);
        cout << "\n";
        cout << "El resultado de la resta es: " << resultado;
        cout << "\n";
        break;
    case 3:
        resultado = multiplicacion(a, b);
        cout << "\n";
        cout << "El resultado de la multiplicacion es: " << resultado;
        cout << "\n";
        break;
    case 4:
        resultado = division(a, b);
        cout << "\n";
        cout << "El resultado de la division es: " << resultado;
        cout << "\n";
        break;

    default:
        cout << "Ingrese una opcion valida";
        break;
    }

    return 0;
}
