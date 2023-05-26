#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Persona
{
private:
    string apellido;
    string nombre;
    int edad;

public:
    Persona(string _apellidos = "", string _nombres = "", int _edad = 0)
    {
        apellido = _apellidos;
        nombre = _nombres;
        edad = _edad;
    }

    void setDato1(string _apellidos, string _nombres, int _edad)
    {
        apellido = _apellidos;
        nombre = _nombres;
        edad = _edad;
    }

    string getDataPersona()
    {
        return "apellido: " + apellido + ", nonmbre: " + nombre + ", edad :" + to_string(edad);
    }

    // metodos de getter an setter

    void setApellidos(string _apellidos)
    {
        apellido = _apellidos;
    }

    string getNombres()
    {
        return nombre;
    }

    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }

    int getEdad()
    {
        return edad;
    }

    void setEdad(int _edad)
    {
        edad = _edad;
    }
};