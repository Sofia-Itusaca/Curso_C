#include <iostream>
#include <string>

#include "profesorInvestigador.cpp"

using namespace std;

int main()
{
    PorfesorInvestigador e, e1, e2, e3, e4;

    // 5 DOCENTES
    e.setDatoProfesor("FIIS", "Alex Ramirez Valtazar", "72640971");
    e1.setDatoProfesor("FIME", "Junior Espinoza Salcedo", "56987423");
    e2.setDatoProfesor("ZOO", "Jose Rodriguez Dias", "78542368");
    e3.setDatoProfesor("CSA", "Ariana Mendoza Tello", "47851236");
    e4.setDatoProfesor("RNR", "Ivana Rojas Perez", "87546322");

    e.setDatoInvestigador("4", "0020220064", "software");
    e1.setDatoInvestigador("1", "0020218542", "Circuitos Electricos,");
    e2.setDatoInvestigador("2", "0020202652", "Biologia General");
    e3.setDatoInvestigador("3", "0020220235", "Filosofia de matematicas");
    e4.setDatoInvestigador("0", "0020220000", "Teoria de lo preciso");

    cout << e.getDataProfesor() << e.getDataInvestigador() << endl;
    cout << e1.getDataProfesor() << e1.getDataInvestigador() << endl;
    cout << e2.getDataProfesor() << e2.getDataInvestigador() << endl;
    cout << e3.getDataProfesor() << e3.getDataInvestigador() << endl;
    cout << e4.getDataProfesor() << e4.getDataInvestigador() << endl;
    return 0;
}