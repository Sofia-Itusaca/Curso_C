/*2. Elabore un programa que implemente una clase denominada vehiculo que contenga los siguientes atributos cilindrada de motor
numero de asientos, numero de ruedas, numero de puertas, certificacion de seguridad.
implemente dos clases automoviles y motocicleta que 	hereden los atributos de vehiculo, y contengan atributos de color y marca
se desea contar con un arreglo de 10 automoviles y 5 motocicletas. implementar un metodo para imprimir un reporte con la siguiente estructura
nombre de la tienda, lista de automoviles a detalle y lista motocicletas*/

// librerias
#include <string>
#include <iostream>

using namespace std;

class Vehiculo
{
private:
    // atributos                               son caracteristicas de la clase
    string cilindraje_mot;
    int num_asientos;
    int num_ruedas;
    int num_puertas;
    string cretificacion_segu;

public:
    // constructor
    Vehiculo(string _cilindraje_mot = "", int _num_asientos = 0, int _num_ruedas = 0, int _num_puertas = 0, string _certificacion_segu = "")
    {

        cilindraje_mot = _cilindraje_mot;
        num_asientos = _num_asientos;
        num_ruedas = _num_ruedas;
        num_puertas = _num_puertas;
        cretificacion_segu = _certificacion_segu;
    }

    void setDato1(string _cilindraje_mot, int _num_asientos, int _num_ruedas, int _num_puertas, string _certificacion_segu)
    {
        cilindraje_mot = _cilindraje_mot;
        num_asientos = _num_asientos;
        num_ruedas = _num_ruedas;
        num_puertas = _num_puertas;
        cretificacion_segu = _certificacion_segu;
    }

    string getDataVehiculo()
    {
        return "Cilindraje: " + cilindraje_mot + ", asientos: " + to_string(num_asientos) + ", ruedas: " + to_string(num_ruedas) + ", puertas: " + to_string(num_puertas) + ", Certificacion: " + cretificacion_segu;
    }

    string getcilindraje_mot()
    {
        return cilindraje_mot;
    }
    void setcilindraje_mot(string _cilindraje_mot)
    {
        cilindraje_mot = _cilindraje_mot;
    }

    int getnum_asientos()
    {
        return num_asientos;
    }
    void setnum_asientos(int _num_asientos)
    {
        num_asientos = _num_asientos;
    }

    int getnum_ruedas()
    {
        return num_ruedas;
    }
    void setnum_ruedas(int _num_ruedas)
    {
        num_ruedas = _num_ruedas;
    }

    int getnum_puertas()
    {
        return num_puertas;
    }
    void setnum_puertas(int _num_puertas)
    {
        num_puertas = _num_puertas;
    }
};