#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Animal
{

protected:
    string orejas;
    string cola;
    string pelaje;
    string ojos;
    int n_patas;
    bool dientes;
    string familia;

public:
    Animal(string _orejas, string _cola, string _pelaje, string _ojos, int _n_patas, bool _dientes, string _familia)
    {
        orejas = _orejas;
        cola = _cola;
        pelaje = _pelaje;
        ojos = _ojos;
        n_patas = _n_patas;
        dientes = _dientes;
        familia = _familia;
    }
    // metodos de getter an setter
    string getOrejas()
    {
        return orejas;
    }
    void setOrejas(string _orejas)
    {
        orejas = _orejas;
    }

    string getCola()
    {
        return cola;
    }
    void setCola(string _cola)
    {
        cola = _cola;
    }

    string getPelaje()
    {
        return pelaje;
    }
    void setPlelaje(string _pelaje)
    {
        pelaje = _pelaje;
    }

    string getOjos()
    {
        return ojos;
    }

    void setOjos(string _ojos)
    {
        ojos = _ojos;
    }

    int getN_patas()
    {
        return n_patas;
    }

    void setN_patas(int _n_patas)
    {
        n_patas = _n_patas;
    }

    bool getDientes()
    {
        return dientes;
    }

    void setDientes(bool _dientes)
    {
        dientes = _dientes;
    }

    string getFamilia()
    {
        return familia;
    }

    void setFamilia(string _familia)
    {
        familia = _familia;
    }
};
