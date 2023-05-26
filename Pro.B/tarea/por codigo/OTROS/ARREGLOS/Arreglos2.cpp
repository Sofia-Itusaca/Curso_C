// Declarar un arreglo de 5 productos-
// Remplazar el producto de la posicion 3 por computadora
// imprimir el arreglo

#include <iostream>
using namespace std;

int main()
{

    string producto[] = {"Ram", "Maus", "Teclado", "Pc", "Tablet"};
    cout << "Producto inicia : " << producto[3];
    producto[3] = " Computadora";
    cout << "\nProducto cambiado:" << producto[3];

    for (int i = 0; i < 5; i++)
    {
        cout << "\n"
             << "El valor del arreglo b es[" << i << "]" << producto[i];
    }
    return 0;
}