#include <iostream>
#include <string>

using namespace std;

class Departamento
{
private:
    string nombre_dep;
    string siglas;

public:
    Departamento(string _nombre_dep = "", string _siglas = 0)
    {
        nombre_dep = _nombre_dep;
        siglas = _siglas;
    }

    void setDatos2(string _nombre_dep, string _siglas)
    {
        nombre_dep = _nombre_dep;
        siglas = _siglas;
    }

    string getDataDepartamento()
    {
        return "nombre_dep: " + nombre_dep + ", siglas: " + siglas;
    }
    // metodos de getter an setter
    string getnombre_deps()
    {
        return nombre_dep;
    }

    void setnombre_deps(string _nombre_deps)
    {
        nombre_dep = _nombre_deps;
    }

    string getsiglas()
    {
        return siglas;
    }

    void setsiglas(string _siglas)
    {
        siglas = _siglas;
    }
};