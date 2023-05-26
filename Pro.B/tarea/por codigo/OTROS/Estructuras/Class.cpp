// librerias
#include <string>
#include <iostream>

using namespace std;

class curso // definimos el nombre de la clase
{
private:
    // atributos                               son caracteristicas de la clase
    string codigo;
    string descripcion;
    int credito;
    float nota1;
    float nota2;
    float nota3;
    // datetime fecha_nacimiento;

    // metodos y funciones                     son para manipular su forma o estructura
public:
    // constructor
    curso(string _codigo, string _descripcion, int _credito)
    {

        codigo = _codigo;
        descripcion = _descripcion;
        credito = _credito;
    }

    string getCodigo()
    {
        return codigo;
    }
    void setCodigo(string _codigo)
    {
        codigo = _codigo;
    }

    string getdescipcion()
    {
        return descripcion;
    }
    void setDescripcion(string _descripcion)
    {
        descripcion = _descripcion;
    }

    int getCredito()
    {
        return credito;
    }
    void setCredito(int _credito)
    {
        credito = _credito;
    }

    void imprimir()
    {
        cout << "los datos de los estudiantes son: \t" << codigo << "\t" << descripcion << "\t" << credito << "\t" << nota1 << "\t" << nota2 << "\t" << nota3 << "\t";
        cout << "\n";
    }
};