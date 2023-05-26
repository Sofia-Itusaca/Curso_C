#include <string>
#include <iostream>
#include <Vehiculo.cpp>

using namespace std;

class Automoviles : Vehiculo
{
private:
    string cilindraje_mot;
    int num_asientos;
    int num_ruedas;
    int num_puertas;
    string cretificacion_segu;
    Vehiculo Vehiculo;

public:
    // constructor
    Automoviles(string _cilindraje_mot = "", int _num_asientos = 0, int _num_ruedas = 0, int _num_puertas = 0, string _certificacion_segu = "")
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

    string getDataAutomoviles()
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
