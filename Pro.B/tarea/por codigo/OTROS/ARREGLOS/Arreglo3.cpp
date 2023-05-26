// Declara un arreglo de libro de 5
// Hcaer un recorrido para que el usuario ingrese los libros
// imprime arreglo

#include <iostream>
using namespace std;

int main()
{
    int libros;
    cout << "Ingrese el libro de su preferencia: \n-Biologia \n-Desarrollo I \n-Fisica II \n-Matematica basica \n-Lenguaje\n";
    cin >> libros;

    string libro[] = {"-Biologia", "-Desarrollo", "-Fisica II", "-Matematica basica", "-Lenguaje"};
    for (int i = 0; i < 5; i++)
    {
        cout << "\n"
             << "El valos del arreglo es [" << i << "]" << libro[i];
        //<< "El valor del vector NOMBRE es[" << i << "]" << NOMBRE[i];
    }

    return 0;
}
