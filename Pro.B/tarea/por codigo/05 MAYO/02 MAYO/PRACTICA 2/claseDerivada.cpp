#include <iostream>
#include <string>
#include "persona.cpp"
#include "estudiante.cpp"
#include "empleado.cpp"

using namespace std;

class EstudianteEmpleado : public Persona, public Estudiante, public Empleado
{
    private:
        string codigo_e;
    public:
    EstudianteEmpleado(string _codigo_e="", string _nombre="", string _apellido ="", int _edad=0, string _codigo = "", string _carrera ="", string _puesto ="", float _salario=0): Persona(_nombre, _apellido, _edad), Estudiante(_codigo, _carrera), Empleado(_puesto, _salario){
        codigo_e= _codigo_e;
    }
};

