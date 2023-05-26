// CREAR UNA CLASE CURSO GET SET
// ATRIBUTO, DESCRIBCION, CREDITAJE, PARCIALES, MEDIO CURSO, FINAL.
// pesos

#include <string>
#include <iostream>

using namespace std;

class Curso
{

private:
    // atributos
    string descripcion;
    int creditaje;
    int parcial1;
    int parcial2;
    int medio_curso;
    int fin_curso;

    // metodos y funciones

public:
    // constructor
    Curso(string _descripcion, int _creditaje, int _parcial1, int _parcial2, int _medio_curso, int _fin_curso)
    {
        descripcion = _descripcion;
        creditaje = _creditaje;
        parcial1 = _parcial1;
        parcial2 = _parcial2;
        medio_curso = _medio_curso;
        fin_curso = _fin_curso;
    }

    /// seccion GET ///
    string getDescripcion()
    {
        return descripcion;
    }
    int getCreditaje()
    {
        return creditaje;
    }
    int getParcial1()
    {
        return parcial1;
    }
    int getParcial2()
    {
        return parcial2;
    }
    int getMedio_curso()
    {
        return medio_curso;
    }
    int getFin_curso()
    {
        return fin_curso;
    }

    /// seccion SET ///
    void setDescripcion(int _descripcion)
    {
        descripcion = _descripcion;
    }
    void setCreditaje(int _creditaje)
    {
        creditaje = _creditaje;
    }
    void setParcial1(int _parcial1)
    {
        parcial1 = _parcial1;
    }
    void setparcial2(int _parcial2)
    {
        parcial2 = _parcial2;
    }
    void setMedio_curso(int _medio_curso)
    {
        medio_curso = _medio_curso;
    }
    void setFin_curso(int _fin_curso)
    {
        fin_curso = _fin_curso;
    }

    void imprimir()
    {
        cout << "los datos y fechas del curso son: \t" << descripcion << "\t" << creditaje << "\t" << parcial1 << "\t" << parcial2 << "\t" << medio_curso << "\t" << fin_curso << "\t";
        cout << "\n";
    }
};

int main()
{
    // crear objetos
    Curso est("PROGRAMACION BASICA IS030203B", 5, 15.2, 15.3, 10.4, 21.4);
    est.imprimir();
}