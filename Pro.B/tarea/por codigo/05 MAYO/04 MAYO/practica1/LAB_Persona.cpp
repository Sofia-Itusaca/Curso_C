/* Implemente una clase persona que contenga como atributos nombres, apellidos, dni, fecha nacimiento, edad.
asi mismo implemente una clase empleado que herede de persona, los atributos de empleado son puesto, sueldo y antigudni
.cree una clase departamento con los atributos de nombre y siglas que contenga un arreglo de 10 empleados registrados */

#include <iostream>
#include <string>

using namespace std;
class Personas
{
private:
    string apellido;
    string nombre;
    string dni;
    string fecha_nac;
    int edad;

public:
    Personas(string _apellidos = "", string _nombres = "", string _dni = "", string _fecha_nac = "", int _edad = 0)
    {
        apellido = _apellidos;
        nombre = _nombres;
        dni = _dni;
        fecha_nac = _fecha_nac;
        edad = _edad;
    }

    void setDato1(string _apellidos, string _nombres, string _dni, string _fecha_nac, int _edad)
    {
        apellido = _apellidos;
        nombre = _nombres;
        dni = _dni;
        fecha_nac = _fecha_nac;
        edad = _edad;
    }

    string getDataPersonas()
    {
        return ", nombre: " + nombre + ", apellido: " + apellido + ", dni: " + dni + ", Fecha de nacimiento: " + fecha_nac + ", Edad: " + to_string(edad);
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

    string getdni()
    {
        return dni;
    }

    void setdni(string _dni)
    {
        dni = _dni;
    }

    string getFecha_nac()
    {
        return fecha_nac;
    }

    void setFecha_nac(string _fecha_nac)
    {
        fecha_nac = _fecha_nac;
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