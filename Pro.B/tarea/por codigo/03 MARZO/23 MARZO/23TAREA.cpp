#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    stack<int> mi_pila;
    queue<int> mi_cola;
    int elementos_pila[5] = {1, 2, 3, 4, 5};

    // Insertar elementos en la pila
    for (int i = 0; i < 5; i++)
    {
        mi_pila.push(elementos_pila[i]);
    }

    // Transferir elementos de la pila a la cola
    while (!mi_pila.empty())
    {
        mi_cola.push(mi_pila.top());
        mi_pila.pop();
    }

    // Imprimir elementos de la cola
    while (!mi_cola.empty())
    {
        cout << mi_cola.front() << " ";
        mi_cola.pop();
    }

    return 0;
}
