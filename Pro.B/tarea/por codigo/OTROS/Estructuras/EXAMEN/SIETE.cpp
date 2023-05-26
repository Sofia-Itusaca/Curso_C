/*PREGUNTA SIETE:

Escribir un programa que implemente una pila y una cola utilizando una lista enlazada y
realice algunas operaciones básicas con ellas (por ejemplo, push, pop, etc.).

RESPONDIENDO PREGUNTAS:

a. ¿cuales es la estrategia de una pila?

== Mostrar , ejecutar o aplicar la ultima opcion que llege para luego pasar con la penultima.
utilizado por ejemplo en los sitios web al usar el boton de retroceso que sirve para ver la pagina
anterior a la que esta actualmente.
la estrategia de la pila es LIFO ya que es, el primero en entrar es el ultimo en salir

b.¿cual es la estrategia de una cola?

== Mostrar , ejecutar o aplicar lo primera opcion que llega primero para luego pasar con la segunda.
Utilizada por ejemplo en una cola de espera como en bancos y otros lugares donde
se debe de esperar el turno desde el primero al ultimo que llege para ser antendido.
la estrategia de la pila es FIFO ya que es, el primero en entrar es el primero en salir*/

// c. cree una pila con valores ingresados por el usuario, el tamaño de la pila deber ser comomínimo 10
// d. mostrar el contenido de la pila
// e. cree una cola, con los valores de la pila
// f.mostrar el nuevo contenido de la pila y cola

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    // Declaración de la pila y la cola
    stack<int> pila;
    queue<int> cola;
    int x = 0;

    for (int i = 1; i <= 10; i++)
    {
        cout << "introduzca el valor de la pila " << i << endl;
        cin >> x;

        pila.push(x);
    }
    int temp;
    cout << "el contenido de la pila es " << endl;
    for (int i = 1; i <= 10; i++)
    {
        temp = pila.top();
        cout << pila.top() << endl;

        pila.pop();
        cola.push(temp);
    }
    cout << endl;
    cout << "el contenido de la cola es ";
    while (!cola.empty())
    {

        cout << cola.front() << " ";
        cola.pop();
    }
    return 0;
}