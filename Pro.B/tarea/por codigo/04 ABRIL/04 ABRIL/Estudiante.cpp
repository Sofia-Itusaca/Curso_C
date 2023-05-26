// librerias
#include <string>
#include <iostream>

using namespace std;

class Estudiante // definimos el nombre de la clase
{
private:
    // atributos                               son caracteristicas de la clase
    string codigo;
    string nombre;
    string apellido;
    string dni;
    int edad;
    // datetime fecha_nacimiento;

    // metodos y funciones                     son para manipular su forma o estructura
public:
    // constructor
    Estudiante(string _nom, string _ap, string _dni, int _edad)
    {

        nombre = _nom;
        apellido = _ap;
        dni = _dni;
        edad = _edad;
        // this.dni= dni
    }

    string getCodigo()
    {
        return codigo;
    }
    string getNombre()
    {
        return nombre;
    }
    string getApellido()
    {
        return apellido;
    }
    string getDni()
    {
        return dni;
    }
    int getEdad()
    {
        return edad;
    }

    void setCodigo(string _codigo)
    {
        codigo = _codigo;
    }
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }
    void setApellido(string _apellido)
    {
        apellido = _apellido;
    }
    void setDni(string _dni)
    {
        dni = _dni;
    }
    // datetime fecha_nacimiento;
    // datetime fecha_nacimiento;
    void setEdad(int _edad)
    {
        edad = _edad;
    }

    void imprimir()
    {
        cout << "los datos de los estudiantes son: \t" << nombre << "\t" << apellido << "\t" << dni << "\t";
        cout << "\n";
    }
};

int main()
{
    // crear objetos
    // Estudiante est = new Estudiante();
    Estudiante est("Jose", "Lopez", "14578544", 16);
    Estudiante est2("Alex", "Aquiles", "72345564", 18);
    Estudiante est3("Oscar", "Martinez", "8756489", 20);
    est.imprimir();
    est2.imprimir();
    est3.imprimir();
    cout << "\n";
    cout << "\n";

    /*cout << "el nombre del estudiante es: " << est.getNombre() << endl;
    cout << "el apellido del estudiante es: " << est.getApellido() << endl;
    cout << "el dni del estudiante es: " << est.getDni() << endl;?*/

    // Actualizar los datos de est3
    est3.setNombre("Anastaio");
    est3.setDni("78956612312");
    est3.setEdad(50);
    est3.imprimir();

    /*modificar el metodo imprimir ()
    ----> edad*/
    // colocamos  edad = _edad; en el constructor

    /*cambiar el nombre est 1 a "jorge el curioso"*/

    est.setNombre("Jorge");
    est.setApellido("el curioso");
    est.imprimir();

    /*cambiar el dni de patrodo
    ---> 5812376*/

    est2.setDni("5812376");
    est2.imprimir();
}

//-glosario instacia e inicializacion
//-SET ES PARA MODIFICAR Y GET ES PARA OBTENER EL ATRIBUTO DE UNA CLASE