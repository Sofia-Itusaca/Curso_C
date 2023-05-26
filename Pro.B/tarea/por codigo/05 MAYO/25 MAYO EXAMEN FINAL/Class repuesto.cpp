// librerias
#include <string>
#include <iostream>

using namespace std;

class Repuestos // definimos el nombre de la clase
{
private:
    // atributos                               son caracteristicas de la clase
    string fecha_registro;
    string categoría;
    int vendidos;
    string ubicacion;
    int cantidad;
    int precio;
    // metodos y funciones                     son para manipular su forma o estructura
public:
    // constructor
    Repuestos(string _fecha_registro = "", string _categoría = "", int _vendidos = 0, string _ubicacion = "", int _cantidad = 0, int _precio = 0.0)
    {
        fecha_registro = _fecha_registro;
        categoría = _categoría;
        vendidos = _vendidos;
        ubicacion = _ubicacion;
        cantidad = _cantidad;
        precio = _precio;
    }

    void setDatosRepuestos(string _fecha_registro, string _categoría, int _vendidos, string _ubicacion, int _cantidad, int _precio)
    {
        fecha_registro = _fecha_registro;
        categoría = _categoría;
        vendidos = _vendidos;
        ubicacion = _ubicacion;
        cantidad = _cantidad;
        precio = _precio;
    }

    string getDataRepuestos()
    {
        return "F.Ingreso: " + fecha_registro + " \t " + categoría + "\t Ubicado: " + ubicacion + "\t N: " + to_string(cantidad) + "\tS/: " + to_string(precio) + "\tSe vendio: " + to_string(vendidos);
    }

    ///////////////////////////////GET AND SET ///////////////////////////////////////////

    string getFecha_registro()
    {
        return fecha_registro;
    }
    void setFecha_registro(string _fecha_registro)
    {
        fecha_registro = _fecha_registro;
    }

    string getCategoría()
    {
        return categoría;
    }
    void setCategoría(string _categoría)
    {
        categoría = _categoría;
    }

    int getvendidos()
    {
        return vendidos;
    }
    void setvendidos(int _vendidos)
    {
        vendidos = _vendidos;
    }

    string getUbicacion()
    {
        return ubicacion;
    }
    void setUbicacion(string _ubicacion)
    {
        ubicacion = _ubicacion;
    }

    int getCantidad()
    {
        return cantidad;
    }
    void setCantidad(int _cantidad)
    {
        cantidad = _cantidad;
    }

    int getPrecio()
    {
        return precio;
    }
    void setPrecio(int _precio)
    {
        precio = _precio;
    }
};