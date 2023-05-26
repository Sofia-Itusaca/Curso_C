#include <iostream>
using namespace std;

int main()
{
     int a[3];
     a[0] = 1;
     a[1] = 2;
     a[2] = 3;

     string b[] = {"Hugo", "paco", "Luis", "Juanito", "Cesar"};
     cout << b[3];
     b[1] = "\nClara";
     cout << b[1];
     cout << "\n"
          << a[2];

     for (int i = 0; i < 3; i++)
     {
          // cout << "\nEl vamor se repite: " << i;
          cout << "\n"
               << "El valor del vector a es[" << i << "]" << a[i];
     }

     string NOMBRE[] = {"Hugo", "paco", "Luis", "Juanito", "Cesar"};
     for (int i = 0; i < 5; i++)
     {
          cout << "\n"
               << "El valor del vector NOMBRE es[" << i << "]" << NOMBRE[i];
     }

     //  Int a[5]
     //  Int a[x]
     //        |---> Tamaño maximo => 5
     //        |---> valor maximo del indice > x-1= 4

     int tamaño = sizeof(a) / sizeof(a[0]);
     int tamaño2 = sizeof(NOMBRE) / sizeof(NOMBRE[0]);
     cout << "\n"
          << "El tamaño maximo es: " << tamaño;
     cout << "\n"
          << "El tamaño maximo es: " << tamaño2;

     for (int i = 0; i < tamaño; i++)
     {
          cout << "\n"
               << "El valor del vector a es[" << i << "]" << a[i];
     }

     for (int i = 0; i < tamaño2; i++)
     {
          cout << "\n"
               << "El valor del vector NOMBRE es[" << i << "]" << NOMBRE[i];
     }
     return 0;
}

// El nombre puede ser cualquier dato, en este caso le colocamos "b[]"

// TIPO DE DATO:   NOMBRE    TAMAÑO
//    int           b          [5];
//   string         b          [5];
//   float          b          [5];
//    bool          b          [5];
//   char           b          [5];

// para imprimir algo de este dato [] se le coloca el numero que esta posicionado
// iniciando por el    0 ,   1,     2 ...
//          b[3] = {"Juan", "jose" , "luis"};
