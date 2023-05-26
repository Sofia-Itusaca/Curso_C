#include <iostream>
#include <string>

using namespace std;

class Animal
{
private:
    int codigo;
    string nombre;
    string familia;

public:
    Animal(int _id, string _nombre, string _familia)
    {
        codigo = _id;
        nombre = _nombre;
        familia = _familia;
    }

    int getCodigo()
    {
        return codigo;
    }
    void setCodigo(int _codigo)
    {
        codigo = _codigo;
    }

    string getNombre()
    {
        return nombre;
    }
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }

    string getFamilia()
    {
        return familia;
    }
    void setFamilia(string _familia)
    {
        familia = _familia;
    }

    string getDatos()
    {
        // estamos cambaindo del tipo entero a string al codigo poniendo to_strin(xxxxxx)
        return "codigo" + to_string(codigo) + ", Familia de la especia:" + familia + ", especie" + nombre;
    }

    void imprimir()
    {
        cout << "Codigo: " + to_string(codigo) + ",  Familia de la especie: " + familia + ", Especie: " + nombre + "\n";
    }
};