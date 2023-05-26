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

using namespace std;
class Personas
{
private:
    string apellido;
    string nombre;
    int edad;

public:
    Personas(string _apellidos = "", string _nombres = "", int _edad = 0)
    {
        apellido = _apellidos;
        nombre = _nombres;
        edad = _edad;
    }

    void setDatoPersonas(string _apellidos, string _nombres, int _edad)
    {
        apellido = _apellidos;
        nombre = _nombres;
        edad = _edad;
    }

    string getDataPersonas()
    {
        return "Estudiente: " + nombre + apellido + to_string(edad)+ " años,";
    }

    // metodos de getter an setter

    void setApellidos(string _apellidos)
    {
        apellido = _apellidos;
    }

    string getNombres()
    {
        return nombre;
    }

    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }

    int getEdad()
    {
        return edad;
    }

    void setEdad(int _edad)
    {
        edad = _edad;
    }
};