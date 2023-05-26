/*pregunta 02
implemente un clase estudiante investigador con herencia multiple,
persona e investigador,
asi mismo el estudiante debe pertenecer a una facultad, y a un semestre,
las investigaciones que realiza el estudiante es por semestre,

se debe imprimir un reporte de investigaciones por estudiante y semestre
imprima como minimo para dos personas

considerar diagrama de clases*/
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Investigador
{
private:
    string especialidad;
    string libros_publicados;

public:
    Investigador(string _libros_publicados = "", string _especialidad = "")
    {
        libros_publicados = _libros_publicados;
        especialidad = _especialidad;
    }

    void setDatoInvestigador(string _libros_publicados, string _especialidad)
    {
        libros_publicados = _libros_publicados;
        especialidad = _especialidad;
    }

    string getDataInvestigador()
    {
        return "Libros publicados:" + libros_publicados + ", Especialidad:" + especialidad;
    }

    // metodos de getter an setter

    string setLibros_publicados()
    {
        return libros_publicados;
    }

    void setLibros_publicados(string _libros_publicados)
    {
        libros_publicados = _libros_publicados;
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