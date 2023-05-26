/*pregunta 01
-Elabore un sistema para restaurantes que contenga como atributos nombre+ direccion+ menu del dia
ventas por delivery y ventas en mesa,
-asi mismo cree una clase plato del dia que contenga como atributos
el nombre del plato,
el costo por plato y
la cantidad de platos del dia,
se le pide que haga una simulacion de ventas
por delivery y en mesa e imprima un reporte, asi mismo debe implementarse que por cada atencion descuente el numero de
platos del menu

considerar diagrama de clases
*/

#include <iostream>
#include <string>

using namespace std;

class Plato
{
private:
    string nombre_plato;
    int costo_plato;
    int num_platos;

public:
    Plato(string _nombre_plato = "", int _costo_plato = 0, int _num_platos = 0)
    {
        nombre_plato = _nombre_plato;
        costo_plato = _costo_plato;
        num_platos = _num_platos;
    }

    void setDatos2(string _nombre_plato, int _costo_plato, int _num_platos)
    {
        nombre_plato = _nombre_plato;
        costo_plato = _costo_plato;
        num_platos = _num_platos;
    }

    string getDataPlato()
    {
        return "-" + nombre_plato + ".... $" + to_string(costo_plato) + ".... Nro platos:" + to_string(num_platos);
    }
    // metodos de getter an setter

    string getNombre_platos()
    {
        return nombre_plato;
    }

    void setnombre_plato(string _nombre_plato)
    {
        nombre_plato = _nombre_plato;
    }

    int getCosto_plato()
    {
        return costo_plato;
    }

    void setCosto_plato(int _costo_plato)
    {
        costo_plato = _costo_plato;
    }

    int getNum_platos()
    {
        return num_platos;
    }

    void setNum_platos(int _num_platos)
    {
        num_platos = _num_platos;
    }

    string ImprimirtDatosPlato()
    {
        return getDataPlato();
    }
};