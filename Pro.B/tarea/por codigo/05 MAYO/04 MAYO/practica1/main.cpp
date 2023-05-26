#include <iostream>
#include <string>

#include "LAB_Empleado.cpp"
#include "LAB_Persona.cpp"

using namespace std;

int main()
{
    Empleado e, e1, e2, e3, e4, e5, e6, e7, e8, e9;

    e.setDatos2("Jefe", 2.500, 4, "Ana", "Itusaca", "72640971", "29/04/2004", 19);
    e1.setDatos2("Admi", 3.500, 3, "Arli", "Zalar", "454575455", "29/04/2004", 25);
    e2.setDatos2("Gerente", 1.500, 1, "Yonel", "Ramoz", "4578211", "29/04/2004", 41);
    e3.setDatos2("Subgerente", 1.200, 5, "Loren", "Diaz", "2745445", "29/04/2004", 33);
    e4.setDatos2("Jefe", 2.300, 2, "Oscar", "Campos", "6854312", "29/04/2004", 24);
    e5.setDatos2("Jefe", 2.000, 1, "Lola", "Laberiano", "57575575", "29/04/2004", 20);
    e6.setDatos2("Jefe", 1.000, 3, "Estify", "Rivera", "545457545", "29/04/2004", 31);
    e7.setDatos2("Jefe", 3.000, 2, "Noe", "Rocas", "57985238", "29/04/2004", 29);
    e8.setDatos2("Jefe", 4.500, 2, "Ani", "Vasquez", "12458863", "29/04/2004", 27);
    e9.setDatos2("Jefe", 4.000, 1, "Mario", "Bargas", "45863354", "29/04/2004", 35);

    cout << e.getDataEmpleado() << endl;
    cout << e1.getDataEmpleado() << endl;
    cout << e2.getDataEmpleado() << endl;
    cout << e3.getDataEmpleado() << endl;
    cout << e4.getDataEmpleado() << endl;
    cout << e5.getDataEmpleado() << endl;
    cout << e6.getDataEmpleado() << endl;
    cout << e7.getDataEmpleado() << endl;
    cout << e8.getDataEmpleado() << endl;
    cout << e9.getDataEmpleado() << endl;

    Empleado empleados[10] = {e, e1, e2, e3, e4, e5, e6, e7, e8, e9};

    return 0;
}