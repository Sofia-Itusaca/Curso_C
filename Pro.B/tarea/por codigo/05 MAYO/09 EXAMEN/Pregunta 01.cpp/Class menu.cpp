#include <iostream>
#include <string>
#include "Class plato.cpp"

using namespace std;

class Menu : Plato
{
private:
    int suma_platos;
    Plato plato;

public:
    Menu(int _suma_platos = 0, string _nombre_plato = "", int _costo_plato = 0, int _num_platos = 0) : Plato(_nombre_plato, _costo_plato, _num_platos)
    {
        suma_platos = _suma_platos;
    }

    void setDatosMenu(int _suma_platos, string _nombre_plato, int _costo_plato, int _num_platos)
    {
        suma_platos = _suma_platos;
    }

    int getSuma_platos()
    {
        return suma_platos;
    }
    void setSuma_platos(int _suma_platos)
    {
        suma_platos = _suma_platos;
    }

    string getDataMenu()
    {
        suma_platos = 4 + 2 + 3 + 5 + 3;

        Plato e("Juane", 15, 4);
        Plato e1("Tacacho con Cecina", 35, 2);
        Plato e2("Ceviche", 42, 3);
        Plato e3("Lomo saltado", 25, 5);
        Plato e4("Pollo a la Parrilla", 25, 3);

        // Plato platillos[5] = {e, e1, e2, e3, e4};

        return "\n *El menu es:\n\n" + e.getDataPlato() + "\n" + e1.getDataPlato() + "\n" + e2.getDataPlato() + "\n" + e3.getDataPlato() + "\n" + e4.getDataPlato() + "*Tenemos " + to_string(suma_platos) + " platos en total. \n";
    }
};

/*int main()
{
    int suma_platoss;
    suma_platoss = 4 + 2 + 3 + 5 + 3;

    Plato e("Juane", 15, 4);
    Plato e1("Tacacho con Cecina", 35, 2);
    Plato e2("Ceviche", 42, 3);
    Plato e3("Lomo saltado", 25, 5);
    Plato e4("Pollo a la Parrilla", 25, 3);

    Plato platilloss[5] = {e, e1, e2, e3, e4};

    cout << "\n *El menu es:\n\n";

    cout << e.getDataPlato() << endl;
    cout << e1.getDataPlato() << endl;
    cout << e2.getDataPlato() << endl;
    cout << e3.getDataPlato() << endl;
    cout << e4.getDataPlato() << endl;

    cout << "\n *Tenemos " << suma_platoss << " platos en total. \n";
}*/