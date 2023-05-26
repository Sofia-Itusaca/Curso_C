#include <iostream>
using namespace std;

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

int division(int a, int b)
{
    int c = a / b;
    return c;
}

int main()
{
    cout << "ingrese una opcion: \n 1: suma \n 2:resta \n 3: multiplicacion \n 4: division \n";
    int opcion;
    cin >> opcion;

    cout << "ingrese valor 1";
    int a;
    cin >> a;
    cout << "ingrese valor 2";
    int b;
    cin >> b;

    int resultado = 0;

    swicht(opcion)
    {
    case 1:
        resultado = suma(a, b);
        cout << "\n";
        cout << resultado;
        cout << "\n";
        break;

    case 2:
        resultado = resta(a, b);
        cout << "\n";
        cout << resultado;
        cout << "\n";
        break;

    case 3:
        resultado = multiplicacion(a, b);
        cout << "\n";
        cout << resultado;
        cout << "\n";
        break;

    case 4:
        resultado = division(a, b);
        cout << "\n";
        cout << resultado;
        cout << "\n";
        break;

    default:
        cout << "Ingrese una opcion valida";
        break;
    }

    return 0;
}
