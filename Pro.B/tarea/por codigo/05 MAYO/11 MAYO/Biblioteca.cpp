#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Biblioteca 
{
private:
    string codigo;
    string nombre;
    string direccion;
    string telefono;

public:
    Biblioteca(string _nombre = "", string _codigo = "", string _direccion = "", string _telefono = "")
    {
        nombre = _nombre;
        codigo = _codigo;
        direccion = _direccion;
        telefono = _telefono;
    }

    void setDatoBiblioteca(string _nombre, string _codigo, string _direccion, string _telefono)
    {
        nombre = _nombre;
        codigo = _codigo;
        direccion = _direccion;
        telefono = _telefono;
    }

    string getDataBiblioteca()
    {
        return "-" + nombre + ", codigo:" + codigo + " Direccion: " + direccion + "Telefono" + telefono;
    }

    // metodos de getter an setter

    string setNombre()
    {
        return nombre;
    }

    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }

    string getCodigo()
    {
        return codigo;
    }

    void setCodigo(string _codigo)
    {
        codigo = _codigo;
    }

    string getDireccion()
    {
        return direccion;
    }

    void setDireccion(string _direccion)
    {
        direccion = _direccion;
    }

    string getTelefono()
    {
        return telefono;
    }

    void setTelefono(string _telefono)
    {
        telefono = _telefono;
    }
};