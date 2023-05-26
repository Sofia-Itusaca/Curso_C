#include <iostream>
#include <string>
#include "animal.cpp"

using namespace std;

class Canino : Animal
{
private:
    int num_patas;
    string tipo;
    string pelaje_color;
    string nombre_canino;

public:
    Canino(int num_patas, string _tipo, int _codigo, string _nombre, string _familia) : Animal(_codigo, _nombre, _familia)
    {
        num_patas = num_patas;
        tipo = _tipo;
    }

    int getNum_patas()
    {
        return num_patas;
    }
    void setNum_patas(int _patas)
    {
        num_patas = _patas;
    }

    string getTipo()
    {
        return tipo;
    }
    void setTipo(string _tipo)
    {
        tipo = _tipo;
    }

    string getPelaje_color()
    {
        return pelaje_color;
    }
    void setPelaje_color(string _pelaje)
    {
        pelaje_color = _pelaje;
    }

    string getNombre_canino()
    {
        return nombre_canino;
    }
    void setNombre_canino(string _nombre)
    {
        nombre_canino = _nombre;
    }

    void imprimir()
    {
        cout << "Especie: " + getNombre() + ", Familia : " + getFamilia() + ", tipo: " + tipo + ", nombre: " + nombre_canino + ", color: " + pelaje_color;
        cout << "\n";
    }
};