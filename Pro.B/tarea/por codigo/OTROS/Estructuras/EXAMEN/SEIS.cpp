// PREGUNTA SEIS: Escribir un programa que lea una lista de palabras y las ordene alfabéticamente.

/*Escribir un programa que implemente una pila y una cola utilizando una lista enlazada y
 reliace algunas operaciones basicas con ella.

 a. cual es la estrategia de una pila
 la estrategia de la pila es LIFO ya que es, el primero en entrar es el ultimo en salir

 b. cual  es la estrategia de la cola
 la estrategia de la pila es FIFO ya que es, el primero en entrar es el primero en salir

c. cree una pila con valores ingresados por el usuario, el tamaño de la pila debe ser como minimo 10
d. desmostrar el contenido de la pila
e. cree una cola, con los valores de la pila
f. mostrar el nuevo contenido de la pila y cola
 */

#include <iostream>
#include <string>
#include <stdlib.h>
#include <string.h>
using namespace std;

void IngresarNombres(char datos[][50], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        fflush(stdin);
        cout << "nombre " << i + 1 << " : ";
        gets(datos[i]);
    }
}

void Imprimir_Nombres(char datos[][50], int cantidad)
{
    cout << "los nombres en orden son : " << endl;

    char temp[50];
    for (int i = 0; i < cantidad; i++)
    {
        for (int j = i; j < cantidad; j++)
        {
            // comparamos los arrelos de nombres
            if (strcmp(datos[i], datos[j]) > 0)
            {
                strcpy(temp, datos[i]);
                strcpy(datos[i], datos[j]);
                strcpy(datos[j], temp);
            }
        }
    }
    for (int i = 0; i < cantidad; i++)
    {
        cout << i + 1 << ". " << datos[i] << endl;
    }
}
int main()
{
    int Cant; // cantidad de nombres a ingresar

    cout << "Cuantas palabras desea ingresar " << endl;
    cin >> Cant;

    char Nombres[Cant][50];
    IngresarNombres(Nombres, Cant);
    Imprimir_Nombres(Nombres, Cant);

    return 0;
}