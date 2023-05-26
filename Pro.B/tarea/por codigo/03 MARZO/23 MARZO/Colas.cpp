#include <iostream>
#include <queue>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////
//                           FULL COLAS                                                   //
////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    // CODIGO OCULATO  //
    // queue<int> cola;  // LEEMOS NUMEROS
    // cola.push(1);
    // cola.push(2);
    // cola.push(3);
    // cola.push(4);
    // cola.push(5);

    queue<char> cola; // LEEMOS CARACTERES
    cola.push('A');
    cola.push('B');
    cola.push('C');
    cola.push('D');
    cola.push('E');
    cola.push('F');
    cola.push('G');

    // cola.pop();  // le comentamos el pop para que nos sañga el numero " 1 " y no defrente el " 2 "

    // accedemos al primer elemento de la cola
    cout << "\nPrimer elemento de la cola es: " << cola.front() << endl;

    // accedemos al primer elemento de la cola
    cout << "\nUltimo elemento de la cola es: " << cola.back() << endl;

    // eliminmos el primer elemento de la cola
    cola.pop();

    // accedemos al nuevo primer elemento de la cola
    cout << "\nNuevo primer elemento de la cola: " << cola.front() << endl;

    // Vamos hacer el recorrido usando el while
    while (!cola.empty()) // EL SIGNO ! ESTA NEGAANDO EL DATO ----> QUE JECUTE MIENTRAS SEA FALSO
    {
        // obtener el elemento de frente de la cola
        char elemento = cola.front();

        // imprimimos el elemento ---> NO SE LEERA LA PRIMERA LETRA O NUMERO POR QUE FUE BORRADO EN EL POP ANTERIOR
        cout << elemento << "  ";

        // eliminar el elemento del frente de la cola
        cola.pop();
    }
    cout << endl;

    return 0;
}