#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Empleado
{
private:
    string puesto;
    float salario;

public:
    Empleado(string _puestos = "", float _salario = 0)
    {
        puesto = _puestos;
        salario = _salario;
    }

    void setDatos2(string _puestos, float _salario)
    {
        puesto = _puestos;
        salario = _salario;
    }

    string getDataEmpleado()
    {
        return "puesto: " + puesto + ", salaraio: " + to_string(salario);
    }
    // metodos de getter an setter
    string getPuestos()
    {
        return puesto;
    }

    void setPuestos(string _puestos)
    {
        puesto = _puestos;
    }

    float getSalarios()
    {
        return salario;
    }

    void setSalario(float _salario)
    {
        salario = _salario;
    }
};