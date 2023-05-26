#include <iostream>
#include <string>

using namespace std;
class Persona
{
private:
    string dni;
    string apellido;
    string nombre;
    string correo;
    string telefono;
    string direccion;

public:
    Persona(string _apellidos = "", string _nombres = "", string _correo = "", string _dni = "", string _telefono = "", string _direccion = "")
    {
        apellido = _apellidos;
        nombre = _nombres;
        correo = _correo;
        dni = _dni;
        telefono = _telefono;
        correo = _correo;
    }

    void setDatoPersona(string _apellidos, string _nombres, string _correo, string _dni, string _telefono, string _direccion)
    {
        apellido = _apellidos;
        nombre = _nombres;
        correo = _correo;
        dni = _dni;
        telefono = _telefono;
        correo = _correo;
    }

    string getDataPersona()
    {
        return nombre + apellido + dni + correo + telefono + direccion;
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

    string getcorreo()
    {
        return correo;
    }

    void setcorreo(string _correo)
    {
        correo = _correo;
    }

    string gettelefono()
    {
        return telefono;
    }

    void settelefono(string _telefono)
    {
        telefono = _telefono;
    }

    string getdni()
    {
        return dni;
    }

    void setdni(string _dni)
    {
        dni = _dni;
    }

    string getdireccion()
    {
        return direccion;
    }

    void setdireccion(string _direccion)
    {
        direccion = _direccion;
    }
};