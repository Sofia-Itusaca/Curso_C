// CALCULAR EL AREA DE UN RECTANGULO

#include <iostream>
using namespace std;

int main()
{
    // Pedimos al usuario el valor de sel ldo y base de un rectangulo.
    cout << "Calculemos el area de un rectangulo \n";
    cout << "Ingrese su lado:\n";
    int lado;
    cin >> lado;

    cout << "Ingrese su base:\n";
    int base;
    cin >> base;

    // Definimos su area y la calculamos
    int area;
    area = lado * base;

    // Le colocamos el mensaje y su area al final .
    cout << "El area del triangulo es: ";
    cout << area;

    return 0;
}