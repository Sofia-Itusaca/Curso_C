
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

    cout << pila.top() << endl; // CON EL POP NOS PERMIGTE VER EL ULTIMO ELEMENTO PUESTO
    pila.pop();
    cout << pila.top() << endl; // CON EL POP NOS PERMIGTE VER EL PENULTIMO ELEMENTO PUESTO
    pila.pop();
    cout << pila.top() << endl; // CON EL POP NOS PERMIGTE VER EL ANTEULTIMO ELEMENTO PUESTO
    pila.pop();
    cout << pila.top() << endl; // CON EL POP NOS PERMIGTE VER EL TRASANTEPENULTIMO ELEMENTO PUESTO
    pila.pop();
    cout << pila.top() << endl; // CON EL POP NOS PERMIGTE VER EL TRATRASANTEPENULTIMO ELEMENTO PUESTO
    pila.pop();

    // Crear cola de 5 elementos tipo <int> vacíos
    queue<int> cola;
    for (int i = 0; i < 5; i++)
    {
        cola.push(0);
    }

    // Transferir elementos de la pila a la cola
    for (int i = 0; i < 5; i++)
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
        //int numero = cola.front();
        int cola.front();
        //cout << numero << " ";
        cout << cola.front() << " ";
        cola.pop();
    }
    cout << endl;
    return 0;
}
