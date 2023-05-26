#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    // Crear pila de 5 elementos tipo <int>
    stack<int> pila;
    pila.push(1);
    pila.push(2);
    pila.push(3);
    pila.push(4);
    pila.push(5);

    cout << pila.top() << endl;
    pila.pop();
    cout << pila.top() << endl;
    pila.pop();
    cout << pila.top() << endl;
    pila.pop();
    cout << pila.top() << endl;
    pila.pop();
    cout << pila.top() << endl;
    pila.pop();

    // Crear cola de 5 elementos tipo <int> vacíos
    queue<int> cola;
    for (int i = 0; i < 5; i++)
    {
        cola.push(0);
    }

    // Transferir elementos de la pila a la cola
    while (!pila.empty())
    {
        cola.push(pila.top());
        pila.pop();
    }

    // accedemos al primer elemento y al ultimo
    cout << "\nPrimer elemento: " << cola.front() << endl;
    cout << "\nUltimo elemento: " << cola.back() << endl;

    // Imprimir elementos de la cola
    while (!cola.empty())
    {
        int numero = cola.front();
        cout << numero << " ";
        cola.pop();
    }
    cout << endl;
    return 0;
}
