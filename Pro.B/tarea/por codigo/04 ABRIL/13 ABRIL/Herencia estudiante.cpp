#include <string>
#include <iostream>
#include <ctime>
#include "ESTUDIANTE2.cpp"

using namespace std;

int main()
{
    Estudiante est1("0020220064", "FIIS", "jony.dias@unas.edu.pe", "dias", "jony", "54624517");
    Estudiante est2("0020220104", "FIME", "alvaro.reyes@unas.edu.pe", "reyes", "alvaro", "72649710");
    Estudiante est3("0020220004", "FIME", "kevin.rojas@unas.edu.pe", "rojas", "kevin", "65321785");
    est1.getDatos();
    cout << "\n";
    est2.getDatos();
    cout << "\n";
    est3.getDatos();

    return 0;
}