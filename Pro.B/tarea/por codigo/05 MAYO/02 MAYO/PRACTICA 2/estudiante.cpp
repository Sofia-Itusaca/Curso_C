#include <iostream>
#include <string>

using namespace std;

class Estudiante
{
private:
    string carrera;
    string codigo;

public:
    Estudiante(string _carrera = "", string _codigo = "")
    {
        carrera = _carrera;
        codigo = _codigo;
    }
    void setDato3(string _carrera, string _codigo)
    {
        carrera = _carrera;
        codigo = _codigo;
    }

    string getDataEstudiante()
    {
        return "codigo: " + codigo + "carrera: " + carrera;
    }

    // metodos de getter an setter
    string getCarreras()
    {
        return carrera;
    }

    void setCarreras(string _carrera)
    {
        carrera = _carrera;
    }

    string getCodigos()
    {
        return codigo;
    }

    void setCodigo(string _codigo)
    {
        codigo = _codigo;
    }
};