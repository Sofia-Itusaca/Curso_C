#include <iostream>
#include "claseSuma.cpp"

using namespace std;

class ClaseOpera
{
private:
    string mensaje;

public:
    ClaseOpera(string _mensaje = "")
    {
        mensaje = _mensaje;
    }
    void imprimir(int numero1, int numero2)
    {
        ClaseSuma c;
        c.setNumero1(numero1);
        c.setNumero2(numero2);
        c.imprimir();
    }
};