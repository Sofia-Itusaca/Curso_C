#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Profesor
{
private:
    string nombre;
    string dni;
    string facultad;

public:
    Profesor(string _facultad = "", string _nombres = "", string _dni = "")
    {
        facultad = _facultad;
        nombre = _nombres;
        dni = _dni;
    }

    void setDatoProfesor(string _facultad, string _nombres, string _dni)
    {
        facultad = _facultad;
        nombre = _nombres;
        dni = _dni;
    }

    string getDataProfesor()
    {
        return "Facultad: " + facultad + ", Nombre:" + nombre + ", Dni:" + dni;
    }

    // metodos de getter an setter

    void setFacultad(string _facultad)
    {
        facultad = _facultad;
    }

    string getNombres()
    {
        return nombre;
    }

    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }

    string getDni()
    {
        return dni;
    }

    void setDni(string _dni)
    {
        dni = _dni;
    }
};