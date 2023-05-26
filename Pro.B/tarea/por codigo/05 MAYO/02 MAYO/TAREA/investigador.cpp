#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Investigador
{
private:
    string codigo;
    string especialidad;
    string libros_publicados;

public:
    Investigador(string _libros_publicados = "", string _codigo = "", string _especialidad = "")
    {
        libros_publicados = _libros_publicados;
        codigo = _codigo;
        especialidad = _especialidad;
    }

    void setDatoInvestigador(string _libros_publicados, string _codigo, string _especialidad)
    {
        libros_publicados = _libros_publicados;
        codigo = _codigo;
        especialidad = _especialidad;
    }

    string getDataInvestigador()
    {
        return ", libros publicados:" + libros_publicados + ", codigo:" + codigo + ", especialidad:" + especialidad;
    }

    // metodos de getter an setter

    void setlibros_publicados(string _libros_publicados)
    {
        libros_publicados = _libros_publicados;
    }

    string getcodigo()
    {
        return codigo;
    }

    void setcodigo(string _codigo)
    {
        codigo = _codigo;
    }

    string getEspecialidad()
    {
        return especialidad;
    }

    void setEspecialidad(string _especialidad)
    {
        especialidad = _especialidad;
    }
};