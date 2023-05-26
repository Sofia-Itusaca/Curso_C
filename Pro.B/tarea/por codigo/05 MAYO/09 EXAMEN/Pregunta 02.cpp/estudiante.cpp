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

class Estudiante
{
private:
    string semestre;
    string facultad;

public:
    Estudiante(string _facultad = "", string _semestre = "")
    {
        facultad = _facultad;
        semestre = _semestre;
    }

    void setDatoEstudiante(string _facultad, string _semestre)
    {
        facultad = _facultad;
        semestre = _semestre;
    }

    string getDataEstudiante()
    {
        return " Facultad: " + facultad + ", semestre:" + semestre;
    }

    // metodos de getter an setter

    void setFacultad(string _facultad)
    {
        facultad = _facultad;
    }

    string getsemestres()
    {
        return semestre;
    }

    void setsemestre(string _semestre)
    {
        semestre = _semestre;
    }
};