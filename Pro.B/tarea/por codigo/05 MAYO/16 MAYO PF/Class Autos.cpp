#include <iostream>
using namespace std;

/*LA CLASE AUTO OBTIENE LOS DATOS DE CADA AUTO PARA FACILITAR SU VENTA,
COMO SU MARCA, MODELO Y SU PRECIO*/

class Autos
{
private:
    string marca;
    string modelo;
    float precio;

public:
    Autos(string marc = "", string model= "", float prec = 0.0)
    {
        marca = marc;
        modelo = model;
        precio = prec;
    }
    string getMarca()
    {
        return marca;
    }
    void setMarca(string marc)
    {
        marca = marc;
    }
    string getModelo()
    {
        return modelo;
    }
    void setModelo(string model)
    {
        modelo = model;
    }
    float getPrecio()
    {
        return precio;
    }
    void setPrecio(float prec)
    {
        precio = prec;
    }

    string MostrarClaseAutos(){
        string mostrar = marca + " " + modelo;
        return mostrar;
    }
};