// Declara 1 arreglo con el precio del producto=5
//  los precios som agregados por teclado
//  imprime el arreglo
//  imprime el valor maximo del arreglo
// imprime el valor maximo del indice del arreglo

#include <iostream>
using namespace std;

int main()
{
     // COLOCAMOS LOS PRODUCTOS Y PEDIMOS QUE SE COLOQUE EL PRECIO/////////////////////////////////////////////////////////77
     string productos[] = {"Lapicero", "notas", "engrampador", "corrector", "borrado"};
     int precio[5];

     /// pedimos el tamaño maximo del indice del producto///////////////////////////////////////////////////////////////7
     int tamaño = sizeof(precio) / sizeof(precio[0]);
     cout << "El tamaño maximo indice del arreglo es: " << tamaño << "\n";

     // Como el precio debe ser introducido por teclado ponemos: ///////////////////////////////////////////////////////////////
     for (int i = 0; i < tamaño; i++)
     {
          cout << "Ingrese el precio de " << productos[i] << endl;
          cin >> precio[i];
     }

     // IMPRIMIMOS EL ARREGLO - LOS PRODUCTOS Y LOS PRECIOS COLOCADOS///////////////////////////////////////////////////////////////7
     for (int i = 0; i < tamaño; i++)
     {
          cout << "los valores del arreglo [" << i << "] son:" << productos[i] << " = " << precio[i] << endl;
     }

     /// pedimos el tamaño maximo de los precios///////////////////////////////////////////////////////////////7
     int valor_max = 0;
     for (int i = 0; i < tamaño; i++)
     {
          if (valor_max < precio[i])
          {
               valor_max = precio[i];
          }
     }
     cout << "\nEl tamaño maximo del arreglo (precios)es: " << valor_max;

     return 0;
}
