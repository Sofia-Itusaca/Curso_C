#include <iostream>
#include <string>
#include <fstream>

#include "libro.cpp"
#include "Bibliotecario.cpp"
#include "Biblioteca.cpp"
#include "persona.cpp"

using namespace std;

int main()
{
        Libro lib1, lib2, lib3, lib4, lib5;

        lib1.setDatosLibro("Conocimiento Fisico", "0054122", "Filosofia ", " Artur baltazar ");
        lib2.setDatosLibro("Algebra basica", "0314552", "Matematicas ", " Maria Piña ");
        lib3.setDatosLibro("Ingles intermedio", "0065321", "lengua ", " I.E. UNAS ");
        lib4.setDatosLibro("Matematica II", "0089455", "Matematica ", " Salomon ");
        lib5.setDatosLibro("Las relaciones personales", "0045896", "Filosofia ", " Sara Riche ");

        Usuario usu1, usu2, usu3, usu4, usu5;
        //(string _codigo_usuario,string _apellidos, string _nombres, string _correo, string _dni, string _telefono, string _direccion)
        usu1.setDatoUsuario("0020220064");
        usu2.setDatoUsuario("0020212545");
        usu3.setDatoUsuario("0020203285");
        usu4.setDatoUsuario("0020224512");
        usu5.setDatoUsuario("0020203698");

        Persona pers1, pers2, pers3, pers4, pers5;

        pers1.setDatoPersona(" Gonzales", "Arli ", "arli.gonzales@unas.edu.pe ", " 72640971 ", " 947952312 ", " AA.VV CASTILLO");
        pers2.setDatoPersona(" Perez ", " Moraima ", "Moraima.Perez@unas.edu.pe ", " 78542361 ", " 9634852 ", " AA.VV LA UNION");
        pers3.setDatoPersona(" Campos ", " Marlon ", "Marlon.Campos@unas.edu.pe ", " 63259841 ", "98413255 ", " AA.VV SUPTE");
        pers4.setDatoPersona(" Lopez ", " Maria ", "Maria.Lopez@unas.edu.pe ", " 74253164 ", " 98652314 ", " AA.VV SAN JUAN");
        pers5.setDatoPersona(" Salas ", " Daniel ", "Daniel.Salas@unas.edu.pe ", " 7854123 ", " 96587999 ", " AA.VV LAS PALMAS");

        Biblioteca biblio;

        biblio.setDatoBiblioteca("La Gran Biblioteca", "2522", "AA.VV.", "978453112");

        ofstream archivo("Estudiante Investigador.txt");
        if (!archivo.is_open())
        {
                cout << "Error al abrir el archivo" << endl;
                return 1;
        }

        archivo << "\n";
        archivo << "----------------------" << biblio.getDataBiblioteca() << "-------------------------\n";
        archivo << "\n";
        archivo << "Usuario: " << pers1.getDataPersona() + usu1.getDataUsuario() << "\nLIBROS PRESTADOS:\n"
                << lib1.getDataLibro();
        archivo << "\n";

        archivo << "------------------------------------------------------------------------------------\n";
        archivo << "Usuario: " << pers2.getDataPersona() + usu2.getDataUsuario() << "\nLIBROS PRESTADOS:\n"
                << lib2.getDataLibro() << "\n"
                << lib3.getDataLibro();
        archivo << "\n";

        archivo << "------------------------------------------------------------------------------------\n";
        archivo << "Usuario: " << pers3.getDataPersona() + usu3.getDataUsuario() << "\nLIBROS PRESTADOS:\n"
                << lib4.getDataLibro() << "\n"
                << lib5.getDataLibro();
        archivo << "\n";

        archivo << "------------------------------------------------------------------------------------\n";
        archivo << "Usuario: " << pers4.getDataPersona() + usu4.getDataUsuario() << "\nLIBROS PRESTADOS:\n"
                << lib1.getDataLibro();
        archivo << "\n";

        archivo << "------------------------------------------------------------------------------------\n";
        archivo << "Usuario: " << pers5.getDataPersona() + usu5.getDataUsuario() << "\nLIBROS PRESTADOS:\n"
                << lib2.getDataLibro() << "\n"
                << lib5.getDataLibro() << "\n"
                << lib3.getDataLibro();
        archivo << "\n";
        archivo << "------------------------------------------------------------------------------------\n";

        archivo.close();
}