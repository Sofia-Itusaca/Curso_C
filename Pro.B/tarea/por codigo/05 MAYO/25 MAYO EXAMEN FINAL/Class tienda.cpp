#include <string>
#include <iostream>
#include "Class empleado_cliente.cpp"
#include "Class repuesto.cpp"

using namespace std;

class Tienda
{
private:
    string nombre_tienda;
    string direccion;
    string numero;

public:
    Tienda(string _nombre_tienda = "", string _direccion = "", string _numero = "")
    {
        nombre_tienda = _nombre_tienda;
        direccion = _direccion;
        numero = _numero;
    }

    void setDatosTienda(string _nombre_tienda, string _direccion, string _numero)
    {
        nombre_tienda = _nombre_tienda;
        direccion = _direccion;
        numero = _numero;
    }

    string getDataTienda()
    {
        return nombre_tienda + " \t " + direccion + " \t " + "N: " + numero;
    }

    ///////////////////////////////GET AND SET ///////////////////////////////////////////

    string getNombreTienda()
    {
        return nombre_tienda;
    }
    void setNombreTienda(string _nombre_tienda)
    {
        nombre_tienda = _nombre_tienda;
    }

    string getDireccion()
    {
        return direccion;
    }
    void setDireccion(string _direccion)
    {
        direccion = _direccion;
    }

    string getNumero()
    {
        return numero;
    }
    void setNumero(string _numero)
    {
        numero = _numero;
    }
};