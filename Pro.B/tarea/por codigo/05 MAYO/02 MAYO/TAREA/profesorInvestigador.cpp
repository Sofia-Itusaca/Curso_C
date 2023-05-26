#include <iostream>
#include <string>
#include "profesor.cpp"
#include "investigador.cpp"

using namespace std;

class PorfesorInvestigador : public Profesor, public Investigador
{
private:
    string codigo_e;

public:
    PorfesorInvestigador(string _codigo_e = "", string _nombre = "", string _dni = "", string _facultad = "", string _codigo = "", string _especialidad = "", string _libros_publicados = "") : Profesor(_nombre, _dni, _facultad), Investigador(_codigo, _especialidad, _libros_publicados)
    {
        codigo_e = _codigo_e;
    }
};
