#include <iostream>
#include <string>
#include <ctime>
#include "Animal.cpp"
using namespace std;

class Perro : Animal
{

private:
    string nombre;
    bool ladra;
    bool is_domesticado;
    string genero;

public:
    Perro(string _nombre, bool _ladra, bool _is_domesticado, string _genero, string _orejas, string _cola, string _pelaje, string _ojos, int _n_patas, bool _dientes, string _familia) : Animal(_orejas, _cola, _pelaje, _ojos, _n_patas, _dientes, _familia)
    {
        nombre = _nombre;
        ladra = _ladra;
        is_domesticado = _is_domesticado;
        genero = _genero;
    }

    string getNombre()
    {
        return nombre;
    }
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }

    bool getLadra()
    {
        return ladra;
    }
    void setLadra(bool _ladra)
    {
        ladra = _ladra;
    }

    string getGenero()
    {
        return genero;
    }
    void setGenero(string _genero)
    {
        genero = _genero;
    }

    void getDatos()
    {
        cout << "los datos del aniaml es: " << getNombre() << "," << getLadra() << "," << getGenero() << getOrejas() << "," << getCola() << "," << getPelaje() << "," << getOjos() << "," << getN_patas() << "," << getDientes() << "," << getFamilia();
    }
};