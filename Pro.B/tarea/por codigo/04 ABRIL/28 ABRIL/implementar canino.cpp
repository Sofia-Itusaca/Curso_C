#include <iostream>
#include <string>
#include "Canino.cpp"

using namespace std;

int main()
{

    Canino can1(4, "perro", 1, "canino", "mamifero");
    Canino can2(4, "lobo", 1, "canino", "mamifero");
    Canino can3(4, "perro", 1, "canino", "mamifero");

    Canino canes[3] = {can1, can2, can3};

    for (int i = 0; i < 3; i++)
    {
        canes[i].imprimir();
    }

    string nombre_can, color;
    for (int i = 0; i < 3; i++)
    {
        nombre_can = "";
        color = "";
        cout << "ingrese el nombre del can\n";
        cin >> nombre_can;
        canes[i].setNombre_canino(nombre_can);
        cout << "ingrese eñ color de can \n";
        cin >> color;
        canes[i].setPelaje_color(color);
    }
    for (int i = 0; i < 3; i++)
    {
        canes[i].imprimir();
    }

    cout << "******************************\n";
    // imprimir los del tipo perro
    for (int i = 0; i < 3; i++)
    {
        if (canes[i].getTipo() == "perro")
        {
            canes[i].imprimir();
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (canes[i].getTipo() == "lobo")
        {
            canes[i].imprimir();
        }
    }

    return 0;
}