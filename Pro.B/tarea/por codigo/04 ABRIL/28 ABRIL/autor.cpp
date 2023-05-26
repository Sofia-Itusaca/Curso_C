#include <iostream>
#include <string>

using namespace std;

class Autor
{
private:
    string nombres;
    string apellidos;
    string fecha_nac;
    string nacionlidad;

public:
    Autor(string _nombres= "", string _apellidos = "", string _fecha= "")
    {
        nombres = _nombres;
        apellidos = _apellidos;
        fecha_nac = _fecha;
    }

    string getNombres()
    {
        return nombres;
    }
    void setNombre(string _nombres)
    {
        nombres = _nombres;
    }

    string getApellidos()
    {
        return apellidos;
    }
    void setApellidos(string _apellidos)
    {
        apellidos = _apellidos;
    }

    string getFecha_nac()
    {
        return fecha_nac;
    }
    void setFecha_nac(string _fecha)
    {
        fecha_nac = _fecha;
    }

    void imprimir()
    {
        cout << "Autor:" + nombres + "," + apellidos + ", fecha de nacimiento: " + fecha_nac + ", nacionalidad " + nacionlidad;
        cout << "\n";
    }
};