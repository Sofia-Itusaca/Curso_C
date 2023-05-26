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
#include <fstream>

#include "EstudianteInvestigador.cpp"

using namespace std;

int main()
{
    EstudianteInvestigador EI1, EI2, EI3, EI4, LB1, LB2, LB3, LB4;

    // 4 EstudianteInvestigador

    EI1.setDatoPersonas("Rodriguez Dias ", "Jose ", 23);
    EI2.setDatoPersonas("Tello Mendoza ", "Ariana ", 25);
    EI3.setDatoPersonas("Espinoza Salcedo ", "Junior ", 22);
    EI4.setDatoPersonas("Perez Ivana ", "Rojas ", 26);

    EI1.setDatoEstudiante("FIME ", " SEGUNDO ");
    EI2.setDatoEstudiante("ZOO ", " PRIMERO ");
    EI3.setDatoEstudiante("CSA ", " SEGUNDO ");
    EI4.setDatoEstudiante("RNR ", " TERCERO ");

    EI1.setDatoInvestigador(" 1 ", " Circuitos Electricos ");
    EI2.setDatoInvestigador(" 2 ", " Biologia General. ");
    EI3.setDatoInvestigador(" 3 ", " Filosofia de matematicas ");
    EI4.setDatoInvestigador(" 2 ", " Teoria de lo preciso ");

    LB1.setLibros_publicados(" Circulo de la Ciencia. ");
    LB2.setLibros_publicados(" Biologia II. ");
    LB3.setLibros_publicados(" Analisis matematico. ");
    LB4.setLibros_publicados(" El conocimiento.");

    ofstream archivo("Estudiante Investigador.txt");
    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    archivo << "\n";
    archivo << "----------------------Estudiante Investigador-------------------------\n";
    archivo << EI1.getDataPersonas() << EI1.getDataEstudiante() << "\n";
    archivo << EI1.getDataInvestigador() << "\n";
    archivo << "----------------------------------------------------------------------\n";
    archivo << "\n";

    archivo << EI2.getDataPersonas() << EI2.getDataEstudiante() << "\n";
    archivo << EI2.getDataInvestigador() << " , " << LB1.setLibros_publicados() << "\n";
    archivo << "----------------------------------------------------------------------\n";
    archivo << "\n";

    archivo << EI3.getDataPersonas() << EI3.getDataEstudiante() << "\n";
    archivo << EI3.getDataInvestigador() << " , " << LB2.setLibros_publicados() << " , " << LB3.setLibros_publicados() << "\n";
    archivo << "----------------------------------------------------------------------\n";
    archivo << "\n";

    archivo << EI4.getDataPersonas() << EI4.getDataEstudiante() << "\n";
    archivo << EI4.getDataInvestigador() << " , " << LB4.setLibros_publicados() << "\n";
    archivo << "----------------------------------------------------------------------\n";
    archivo << "\n";

    archivo.close();
    return 0;
}