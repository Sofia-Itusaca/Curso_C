#include <iostream>
#include <stack> // para pila lifo
#include <queue> // para cola fifo

using namespace std;

int main()
{
    stack<int> pila, pila2;
    queue<int> cola;
    int numero = 0;

    cout << "ingrese los valores de una pila \n";
    for (int i = 0; i < 5; i++)
    {
        cout << "ingrese \t";
        cin >> numero;
        pila.push(numero); // agregamos el numero a la pila
        pila2.push(numero);
    }

    // pasando contenido de la pila a cola///

    cout << "ingresando los valores de una pila a una cola \n";
    cout << "...\n";
    for (int i = 0; i < 5; i++)
    {
        /*numero = 0;
        numero = pila.top();
        pila.pop();
        // pila2.push(numero);
        cola.push(numero);*/
        cola.push(pila.top());
        pila.pop();
    }
    // mostrando los valores de la pila ///
    while (!pila2.empty())
    {
        cout << pila2.top() << "\n";
        pila2.pop();
    }

    cout << "mostrando los valores de la cola \n";
    while (!cola.empty())
    {
        cout << cola.front() << "\n";
        cola.pop();
    }

    return 0;
}