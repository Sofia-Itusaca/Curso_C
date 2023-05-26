#include <iostream>
using namespace std;

/*LA CLASE PERSONA DEFINIRA LOS NOMBRES Y APELLIDOS DEL CLIENTE
COMO DEL EMPLEADO SIENDO LLAMADO POR HERENCIA*/

class Persona
{
private:
    string nombre;
    string apellido;

public:
    Persona(string _nombre = "", string _apellido = "")
    {
        nombre = _nombre;
        apellido = _apellido;
    }
    string getNombre()
    {
        return nombre;
    }

    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }

    string getApellido()
    {
        return apellido;
    }

    void setApellido(string _apellido)
    {
        apellido = _apellido;
    }
};