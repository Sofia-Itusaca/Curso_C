#include <iostream>
#include <string>

using namespace std;

class Clase01
{
private:
    int valor;

public:
    Clase01(int _valor = 0)
    {
        valor = _valor;
    }
    int getValor()
    {
        return valor;
    }
    void setValor(int _valor)
    {
        valor = _valor;
    }

    void imprimir()
    {
        cout << "El valores es: " + to_string(valor);
    }
};