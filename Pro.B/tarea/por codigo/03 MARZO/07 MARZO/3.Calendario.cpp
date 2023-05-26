#include <iostream>
using namespace std;

int main()
{
    // Pedimos un numero para luego mostrarle en que mes se encuentra ese numero.
    cout << "Ingrese un numero de 1 al 12\n";
    int numero;
    cin >> numero;

    switch (numero)
    {
    case 1:
        cout << "Hoy es Enero";
        break;

    case 2:
        cout << "Hoy es Febrero";
        break;

    case 3:
        cout << "Hoy es Marzo";
        break;

    case 4:
        cout << "Hoy es Abril";
        break;

    case 5:
        cout << "Hoy es Mayo";
        break;

    case 6:
        cout << "Hoy es Junio";
        break;

    case 7:
        cout << "Hoy es Julio";
        break;

    case 8:
        cout << "Hoy es Agosto";
        break;

    case 9:
        cout << "Hoy es Setiembre";
        break;

    case 10:
        cout << "Hoy es Octubre";
        break;

    case 11:
        cout << "Hoy es Noviembre";
        break;

    case 12:
        cout << "Hoy es Diciembre";
        break;

    // Si el numero escogido no esta entre el 1- 12 le señala un error .
    default:
        cout << "Ingresas una opcion invalida";
    }

    return 0;
}