#include <iostream>
#include "Class Persona.cpp"
using namespace std;

/*EN ESTE ARCHIVO EXISTEN 2 CLASES UNO DE CLIENTE Y OTRA DE EMPELADO LLAMANDO LOS DATOS DE PERSONA*/
class Cliente : Persona
{
private:
    string numero_persona;
    string dni;

public:
    Cliente(string _numero_persona="",string _dni = "", string _nombre="", string _apellido="") : Persona(_nombre, _apellido)
    {
        numero_persona = _numero_persona;
        dni = _dni;
    }
    // metodos de getter an setter
    string getNumeroPersona()
    {
        return numero_persona;
    }

    void setNumeroPersona(string _numero_persona)
    {
        numero_persona = _numero_persona;
    }

    string getDni()
    {
        return dni;
    }

    void setDni(string _dni)
    {
        dni = _dni;
    }
    string getDatosCliente(){
        return getNombre()+ " "+ getApellido();
    }

};

class Empleado : Persona
{
private:
    int codigo;
    int cantidad_vendidos;

public:
    Empleado(int _codigo= 0,int _cantidad_vendidos=0,string _nombre="",string _apellido=""): Persona (_nombre,_apellido)
    {
        codigo = _codigo;
        cantidad_vendidos = _cantidad_vendidos;
    }
    int getCodigo()
    {
        return codigo;
    }
    void setCodigo(int _codigo)
    {
        codigo = _codigo;
    }

    int getCantidadVendidos()
    {
        return cantidad_vendidos;
    }
    void setCantidadVendidos(int _cantidad_vendidos)
    {
        cantidad_vendidos = _cantidad_vendidos;
    }
    
    string getDatosEmpleado(){
        return getNombre()+ " "+ getApellido() ;
    }

};