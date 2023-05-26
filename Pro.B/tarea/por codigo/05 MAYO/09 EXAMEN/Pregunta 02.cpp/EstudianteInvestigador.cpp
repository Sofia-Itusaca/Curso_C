#include <iostream>
#include <string>
#include "estudiante.cpp"
#include "investigador.cpp"
#include "persona.cpp"

using namespace std;

class EstudianteInvestigador : public Personas, public Estudiante, public Investigador
{
private:
    string codigo_e;

public:
    EstudianteInvestigador(string _codigo_e = "",string _apellidos= "", string _nombres= "", int _edad= 0, string _nombre = "", string _facultad = "", string _semestre = "", string _especialidad = "", string _libros_publicados = "") : Personas(_apellidos, _nombres, _edad), Estudiante(_semestre, _facultad), Investigador( _especialidad, _libros_publicados)
    {
        codigo_e = _codigo_e;
    }
};
