#include <iostream>
#include <string>

#include "claseDerivada.cpp"

using namespace std;

int main()
{
    EstudianteEmpleado e;

    e.setDato1("Jose", "rodriguez", 25);

    cout << e.getDataPersona();
    return 0;
}