/*pregunta 01
-Elabore un sistema para restaurantes que contenga como atributos
nombre,
direccion,
menu del dia
ventas por delivery
y ventas en mesa,

-asi mismo cree una clase plato del dia que contenga como atributos
el nombre del plato,
el costo por plato y
la cantidad de platos del dia,
se le pide que haga una simulacion de ventas
por delivery y en mesa e imprima un reporte, asi mismo debe implementarse que por cada atencion
descuente el numero de
platos del menu

considerar diagrama de clases
*/

#include <iostream>
#include <string>
#include <fstream>

#include "Class plato.cpp"
#include "Class restarurante.cpp"

using namespace std;

int main()
{
    Restaurante restaurant("EL SABROSO", "AV.SIEMPRE VIVA 142" /*, 7, 10*/);

    /////////////////////////////////////////////////////////////////////////////

    int suma_platos;
    suma_platos = 4 + 2 + 3 + 5 + 3;

    Plato e("Juane", 15, 4);
    Plato e1("Tacacho con Cecina", 35, 2);
    Plato e2("Ceviche", 42, 3);
    Plato e3("Lomo saltado", 25, 5);
    Plato e4("Pollo a la Parrilla", 25, 3);

    Plato platillos[5] = {e, e1, e2, e3, e4};

    ofstream archivo("Boleta.txt");

    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    archivo << "\t" << restaurant.ImprimirtDatosRestaurante() << "\n";
    archivo << "************************************\n";

    cout << "*El menu es: \n";

    cout << "1" << e.getDataPlato() << endl;
    cout << "2" << e1.getDataPlato() << endl;
    cout << "3" << e2.getDataPlato() << endl;
    cout << "4" << e3.getDataPlato() << endl;
    cout << "5" << e4.getDataPlato() << endl;

    archivo << "*El menu es: \n";

    archivo << "1" << e.getDataPlato() << endl;
    archivo << "2" << e1.getDataPlato() << endl;
    archivo << "3" << e2.getDataPlato() << endl;
    archivo << "4" << e3.getDataPlato() << endl;
    archivo << "5" << e4.getDataPlato() << endl;

    archivo << "\n *Tenemos " << suma_platos << " platos en total. \n";

    //////////////////////////////////////////////////////////////////////

    cout << "\n¿Que plato decea ordenar? \n";
    int orden;
    cin >> orden;
    cout << "cuantos platos?\n";
    int cantidad;
    cin >> cantidad;

    switch (orden)
    {
    case 1:
        cout << "ordeno: " << cantidad << " platos de " << e.getDataPlato() << "\n";
        cout << "Nro de platos restantes es: " << suma_platos - cantidad;
        archivo << "\nordeno: " << cantidad << " platos de " << e.getDataPlato() << "\n";
        archivo << "Nro de platos restantes es: " << suma_platos - cantidad;
        cout << "\n¿Sera recibido en 1.Mesa o 2.Delivery? \n";
        int recibir1;
        cin >> recibir1;
        switch (recibir1)
        {
        case 1:
            cout << "El plato esta siendo enviado a la mesa\n";
            cout << "Pagara $" << e.getCosto_plato() * e.getNum_platos() << "\n";
            archivo << "El plato esta siendo enviado a la mesa\n";
            archivo << "Pagara $" << e.getCosto_plato() * e.getNum_platos() << "\n";
            break;
        case 2:
            cout << "El plato esta siendo llevado por el conductor\n";
            cout << "Pagara $" << e.getCosto_plato() * e.getNum_platos() << "\n";
            archivo << "El plato esta siendo llevado por el conductor\n";
            archivo << "Pagara $" << e.getCosto_plato() * e.getNum_platos() << "\n";
            break;
        default:
            break;
        }

        break;

    case 2:
        cout << "\nordeno: " << cantidad << " platos de " << e1.getDataPlato() << "\n";
        cout << "Nro de platos restantes es: " << suma_platos - cantidad;
        archivo << "\nordeno: " << cantidad << " platos de " << e1.getDataPlato() << "\n";
        archivo << "Nro de platos restantes es: " << suma_platos - cantidad;
        cout << "\n¿Sera recibido en 1.Mesa o 2.Delivery? \n";
        int recibir2;
        cin >> recibir2;

        switch (recibir2)
        {
        case 1:
            cout << "El plato esta siendo enviado a la mesa\n";
            cout << "Pagara $" << e1.getCosto_plato() * e1.getNum_platos() << "\n";
            archivo << "El plato esta siendo enviado a la mesa\n";
            archivo << "Pagara $" << e1.getCosto_plato() * e1.getNum_platos() << "\n";
            break;
        case 2:
            cout << "El plato esta siendo llevado por el conductor\n";
            cout << "Pagara $" << e1.getCosto_plato() * e1.getNum_platos() << "\n";
            archivo << "El plato esta siendo llevado por el conductor\n";
            archivo << "Pagara $" << e1.getCosto_plato() * e1.getNum_platos() << "\n";
            break;

        default:
            break;
        }
        break;

    case 3:
        cout << "\nordeno: " << cantidad << " platos de " << e2.getDataPlato() << "\n";
        cout << "Nro de platos restantes es: " << suma_platos - cantidad;
        archivo << "\nordeno: " << cantidad << " platos de " << e2.getDataPlato() << "\n";
        archivo << "Nro de platos restantes es: " << suma_platos - cantidad;
        cout << "\n¿Sera recibido en 1.Mesa o 2.Delivery? \n";
        int recibir3;
        cin >> recibir3;

        switch (recibir3)
        {
        case 1:
            cout << "El plato esta siendo enviado a la mesa\n";
            cout << "Pagara $" << e2.getCosto_plato() * e2.getNum_platos() << "\n";
            archivo << "El plato esta siendo enviado a la mesa\n";
            archivo << "Pagara $" << e2.getCosto_plato() * e2.getNum_platos() << "\n";
            break;
        case 2:
            cout << "El plato esta siendo llevado por el conductor\n";
            cout << "Pagara $" << e2.getCosto_plato() * e2.getNum_platos() << "\n";
            archivo << "El plato esta siendo llevado por el conductor\n";
            archivo << "Pagara $" << e2.getCosto_plato() * e2.getNum_platos() << "\n";
            break;

        default:
            break;
        }
        break;

    case 4:
        cout << "\nordeno: " << cantidad << " platos de " << e3.getDataPlato() << "\n";
        cout << "Nro de platos restantes es: " << suma_platos - cantidad;
        archivo << "\nordeno: " << cantidad << " platos de " << e3.getDataPlato() << "\n";
        archivo << "Nro de platos restantes es: " << suma_platos - cantidad;
        cout << "\n¿Sera recibido en 1.Mesa o 2.Delivery? \n";
        int recibir4;
        cin >> recibir4;

        switch (recibir4)
        {
        case 1:
            cout << "El plato esta siendo enviado a la mesa\n";
            cout << "Pagara $" << e3.getCosto_plato() * e3.getNum_platos() << "\n";
            archivo << "El plato esta siendo enviado a la mesa\n";
            archivo << "Pagara $" << e3.getCosto_plato() * e3.getNum_platos() << "\n";
            break;
        case 2:
            cout << "El plato esta siendo llevado por el conductor\n";
            cout << "Pagara $" << e3.getCosto_plato() * e3.getNum_platos() << "\n";
            archivo << "El plato esta siendo llevado por el conductor\n";
            archivo << "Pagara $" << e3.getCosto_plato() * e3.getNum_platos() << "\n";
            break;

        default:
            break;
        }
        break;

    case 5:
        cout << "\nordeno: " << cantidad << " platos de " << e4.getDataPlato() << "\n";
        cout << "Nro de platos restantes es: " << suma_platos - cantidad;
        archivo << "\nordeno: " << cantidad << " platos de " << e4.getDataPlato() << "\n";
        archivo << "Nro de platos restantes es: " << suma_platos - cantidad;
        cout << "\n¿Sera recibido en 1.Mesa o 2.Delivery? \n";
        int recibir5;
        cin >> recibir5;

        switch (recibir5)
        {
        case 1:
            cout << "El plato esta siendo enviado a la mesa\n";
            cout << "Pagara $" << e4.getCosto_plato() * e4.getNum_platos() << "\n";
            archivo << "El plato esta siendo enviado a la mesa\n";
            archivo << "Pagara $" << e4.getCosto_plato() * e4.getNum_platos() << "\n";
            break;
        case 2:
            cout << "El plato esta siendo llevado por el conductor\n";
            cout << "Pagara $" << e4.getCosto_plato() * e4.getNum_platos() << "\n";
            archivo << "El plato esta siendo llevado por el conductor\n";
            archivo << "Pagara $" << e4.getCosto_plato() * e4.getNum_platos() << "\n";
            break;

        default:
            break;
        }
        break;
    }
    archivo << "************************************\n";

    archivo.close();

    return 0;
}