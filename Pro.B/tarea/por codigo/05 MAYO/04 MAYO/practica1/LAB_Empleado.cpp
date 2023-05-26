#include <iostream>
#include <string>
#include "LAB_Persona.cpp"

using namespace std;

class Empleado : Personas
{
private:
    string puesto;
    float sueldo;
    int antiguedad;
    Personas Persona;

public:
    Empleado(string _puesto = "", float _sueldo = 0, int _antiguedad = 0, string _nombre = "", string _apellido = "", string _dni = "", string _fecha_nac = "", int _edad = 0) : Persona(_nombre, _apellido, _dni, _fecha_nac, _edad)
    {
        puesto = _puesto;
        sueldo = _sueldo;
        antiguedad = _antiguedad;
        
    }

    void setDatos2(string _puesto, float _sueldo, int _antiguedad, string _nombre, string _apellido, string _dni, string _fecha_nac, int _edad)
    {
        puesto = _puesto;
        sueldo = _sueldo;
        antiguedad = _antiguedad;
        
    }

    string getDataEmpleado()
    {
        return "puesto: " + puesto + ", sueldo: " + to_string(sueldo) + ", Antiguedad: " + to_string(antiguedad) + getDataPersonas();
    }
    // metodos de getter an setter
    string getPuesto()
    {
        return puesto;
    }

    void setPuesto(string _puestos)
    {
        puesto = _puestos;
    }

    float getSueldo()
    {
        return sueldo;
    }

    void setSueldo(float _sueldo)
    {
        sueldo = _sueldo;
    }

    int getAntiguedad()
    {
        return antiguedad;
    }

    void setAntiguedad(int _antiguedad)
    {
        antiguedad = _antiguedad;
    }
};