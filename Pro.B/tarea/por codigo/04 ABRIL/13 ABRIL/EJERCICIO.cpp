#include <string>
#include <iostream>

using namespace std;

class Persona
{

private:
    string apellido;
    string nombre;
    string direccion;
    string dni;
    string nacimiento;

public:
    Persona(string _apellido, string _nombre, string _direccion, string _dni, string _nacimiento)
    {
        apellido = _apellido;
        nombre = _nombre;
        direccion = _direccion;
        dni = _dni;
        nacimiento = _nacimiento;
    }

    string getApellido()
    {
        return apellido;
    }
    void setApellido(string _apellido)
    {
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

    string getdireccion()
    {
        return direccion;
    }
    void setdireccion(string _direccion)
    {
        direccion = _direccion;
    }

    string getDni()
    {
        return dni;
    }
    void setDni(string _dni)
    {
        dni = _dni;
    }

    string getNacimiento()
    {
        return nacimiento;
    }
    void setNacimineto(string _nacimineto)
    {
        nacimiento = _nacimineto;
    }

    void imprimir()
    {
        cout << "los datos de la persona es: "
             << "\t" << apellido << "\t" << nombre << "\t" << dni << "\t" << direccion << "\t" << nacimiento << "\t";
        cout << "\n";
    }
};

int main()
{
    Persona Persona1("Lopez", "Jose", "72640971", "A.A. MONZON", "24/04");
    Persona1.imprimir();
}