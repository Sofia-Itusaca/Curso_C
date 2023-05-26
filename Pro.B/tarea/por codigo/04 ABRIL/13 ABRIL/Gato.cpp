#include <iostream>
#include <string>
#include <ctime>
#include "Animal.cpp"
using namespace std;

class Gato : Animal
{

private:
    string nombre;
    int vidas;
    bool maulla;
    bool is_domesticado;
    string genero;

public:
    Gato(string _nombre, int _vidas, bool _maulla, bool _is_domesticado, string _genero, string _orejas, string _cola, string _pelaje, string _ojos, int _n_patas, bool _dientes, string _familia) : Animal(_orejas, _cola, _pelaje, _ojos, _n_patas, _dientes, _familia)
    {
        nombre = _nombre;
        vidas = _vidas;
        maulla = _maulla;
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

    int getVidas()
    {
        return vidas;
    }
    void setVidas(int _vidas)
    {
        vidas = _vidas;
    }

    bool getmaulla()
    {
        return maulla;
    }
    void setmaulla(bool _maulla)
    {
        maulla = _maulla;
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
        cout << "los datos del aniaml es: " << getNombre() << "," << getVidas() << "," << getmaulla() << "," << getGenero() << getOrejas() << "," << getCola() << "," << getPelaje() << "," << getOjos() << "," << getN_patas() << "," << getDientes() << "," << getFamilia();
    }
};
