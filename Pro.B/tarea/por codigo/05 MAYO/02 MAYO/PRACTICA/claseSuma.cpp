#include <iostream>
#include <string>

using namespace std;

class ClaseSuma
{
private:
    int numero1;
    int numero2;

public:
    ClaseSuma(int _numero1 = 0, int _numero2 = 0)
    {
        numero1 = _numero1;
        numero2 = _numero2;
    }
    int getNumero1()
    {
        return numero1;
    }
    void setNumero1(int _numero1)
    {
        numero1 = _numero1;
    }

    int getNumero2()
    {
        return numero2;
    }
    void setNumero2(int _numero2)
    {
        numero2 = _numero2;
    }

    void imprimir()
    {
        cout << "La suma de los numeros es: " + to_string(numero1 + numero2);
    }
};