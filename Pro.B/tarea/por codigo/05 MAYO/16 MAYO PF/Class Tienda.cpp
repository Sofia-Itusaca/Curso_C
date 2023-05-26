#include <iostream>
#include "Class Autos.cpp"
#include "Class Cliente_Empleado.cpp"
using namespace std;

/*LA CLASE TIENDA NOS DA LOS DATOS , NOMBRE , UBICACION ,
N° TELEFONICO ENTRE OTROS DATOS*/

class Tienda
{
private:
    string nombre_tienda;
    string direccion;
    string numero;
    Empleado empleado;
    Autos autos;
    Cliente cliente;

public:
    Tienda(string _nombre_tienda = "", string _direccion = "", string _numero = "")
    {

        nombre_tienda = _nombre_tienda;
        direccion = _direccion;
        numero = _numero;
    }
    string getNombreTienda()
    {
        return nombre_tienda;
    }
    void setNombreTienda(string _nombre_tienda)
    {
        nombre_tienda = _nombre_tienda;
    }
    string getDireccion()
    {
        return direccion;
    }
    void setDireccion(string _direccion)
    {
        direccion = _direccion;
    }
    string getNumero()
    {
        return numero;
    }
    void setNumero(string _numero)
    {
        numero = _numero;
    }
    Empleado getEmpleado()
    {
        return empleado;
    }
    void setEmpleado(Empleado _empleado)
    {
        empleado = _empleado;
    }
    Cliente getCliente()
    {
        return cliente;
    }
    void setCliente(Cliente _cliente)
    {
        cliente = _cliente;
    }
    Autos getAutos()
    {
        return autos;
    }
    void setAutos(Autos _autos)
    {
        autos = _autos;
    }
};
