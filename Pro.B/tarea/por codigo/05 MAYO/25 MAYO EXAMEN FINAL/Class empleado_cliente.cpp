#include <string>
#include <iostream>
using namespace std;

class Empleado
{
private:
    string nombre;
    string apellido;
    string servicios;
    string tiempo;

public:
    Empleado(string _nombre = "", string _apellido = "", string _servicios = "", string _tiempo = "")
    {
        nombre = _nombre;
        apellido = _apellido;
        servicios = _servicios;
        tiempo = _tiempo;
    }

    void setDatosEmpleado(string _nombre, string _apellido, string _servicios, string _tiempo)
    {
        nombre = _nombre;
        apellido = _apellido;
        servicios = _servicios;
        tiempo = _tiempo;
    }

    string getDataEmpleado()
    {
        return nombre + " " + apellido + "\t Realiza: " + servicios + "\t Demora: " + tiempo;
    }

    ///////////////////////////////GET AND SET ///////////////////////////////////////////

    string getNombre()
    {
        return nombre;
    }
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }

    string getApellido()
    {
        return apellido;
    }
    void setApellido(string _apellido)
    {
        apellido = _apellido;
    }

    string getServicios()
    {
        return servicios;
    }
    void setServicios(string _servicios)
    {
        servicios = _servicios;
    }

    string getTiempo()
    {
        return tiempo;
    }
    void setTiempo(string _tiempo)
    {
        tiempo = _tiempo;
    }
};

class Cliente
{
private:
    string nombre;
    string apellido;
    int numero_compras;

public:
    Cliente(string _nombre = "", string _apellido = "", int _numero_compras = 0)
    {
        nombre = _nombre;
        apellido = _apellido;
        numero_compras = _numero_compras;
    }

    void setDatosCliente(string _nombre, string _apellido, int _numero_compras)
    {
        nombre = _nombre;
        apellido = _apellido;
        numero_compras = _numero_compras;
    }

    string getDataCliente()
    {
        return nombre + " " + apellido + " " + "\t Compras semanales: "+ to_string(numero_compras);
    }

    ///////////////////////////////GET AND SET ///////////////////////////////////////////

    string getNombre()
    {
        return nombre;
    }
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }

    string getApellido()
    {
        return apellido;
    }
    void setApellido(string _apellido)
    {
        apellido = _apellido;
    }

    int getNumero_compras()
    {
        return numero_compras;
    }
    void setNumero_compras(int _numero_compras)
    {
        numero_compras = _numero_compras;
    }
};