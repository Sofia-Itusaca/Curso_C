#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Persona
{
private:
    string apellido;
    string nombre;
    string direcion;
    string dni;
    string fecha_nacimiento;

public:
    Persona(string _apellidos, string _nombres, string _dni)
    {
        apellido = _apellidos;
        nombre = _nombres;
        dni = _dni;
    }
    // metodos de getter an setter
    string getApellidos()
    {
        return apellido;
    }

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

    string getDireccion(){
        return direcion;
    }

    void setDireccion(string _direccion){
    direcion= _direccion; 
    }

    string getDNI(){
        return dni;
    }

    void setDNI(string _dni){
    dni= _dni; 
    }
};

