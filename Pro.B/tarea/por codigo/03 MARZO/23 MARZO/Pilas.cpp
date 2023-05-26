#include <iostream>
#include <vector>
#include <stack>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////
//                           FULL PILAS                                                   //
////////////////////////////////////////////////////////////////////////////////////////////

class Pila
{
private:
    vector<int> elementos;

public:
    void push(int elemento)
    {
        elementos.push_back(elemento);
    }

    void pop()
    {
        elementos.pop_back();
    }

    int top()
    {
        return elementos.back();
    }

    bool empty()
    {
        return elementos.empty();
    }
};

int main()
{
    Pila pila;
    // COLOCAMOS EL NUMERO DE PILAS QUE DECIEMOS ,EJEMPLO DE 1 A 5
    pila.push(1); // LA PRIMERA PILA
    pila.push(2);
    pila.push(3);
    pila.push(4);
    pila.push(5);               // EL 5 ES LA ULTIMA PILA
    cout << pila.top() << endl; // Output: 3 // CON EL POP NOS PERMIGTE VER EL ULTIMO ELEMENTO PUESTO
    pila.pop();
    cout << pila.top() << endl; // Output: 2 // CON EL POP NOS PERMIGTE VER EL PENULTIMO ELEMENTO PUESTO
    pila.pop();
    cout << pila.top() << endl;
    pila.pop();
    cout << pila.top() << endl;
    pila.pop();
    cout << pila.top() << endl;
    pila.pop();

    cout << endl;

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // METODO ABREVIDO - LIBRERIA ////////////////////////////////////////////////////////////////////////////////////////////

    //------COMANDO OCULTO-----------
    // stack<int> mi_pila; // LEEMOS NUMEROS
    // mi_pila.push(4);
    // mi_pila.push(5);
    // mi_pila.push(6);
    // cout << endl;

    stack<char> mi_pila; // LEEMOS LETRAS----->cambiamos de un numero a una letra (CARACTERES)
    mi_pila.push('A');
    mi_pila.push('B');
    mi_pila.push('C');
    cout << endl;

    // recorrido de la pila//////////////////////////////////////////////////////////////////////////////////
    while (!mi_pila.empty()) // EL SIGNO ! ESTA NEGAANDO EL DATO ----> QUE JECUTE MIENTRAS SEA FALSO
    {
        cout << mi_pila.top() << " ";
        mi_pila.pop();
    }
    cout << endl;
    return 0;
}