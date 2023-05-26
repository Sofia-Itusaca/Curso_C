#include <string>
#include <iostream>
#include <fstream>
#include "Class tienda.cpp"

using namespace std;

int main()
{

    Tienda tienda("Motorin", "AA.VV VILLA PALMAS", "974953614");

    Empleado empleado1("Juan", "Ramoz Dias  ", "Cambio de aceite   ", "25 min");
    Empleado empleado2("Arnol", "Silvestre Bell", "Limpieza de moto  ", "2H");
    Empleado empleado3("David", "Carrion Gomez", "Cambio de camara  ", "1H 30 min");
    Empleado empleado4("Mario", "Matos Reyes", "Engrazado de cadena", "10 min");
    Empleado empleado5("Alex", "Campos Perez", "Ajuste de frenos  ", "30 min");

    Empleado empleados[5] = {empleado1, empleado2, empleado3, empleado4, empleado5};

    Cliente cliente1("Ariana", "Megia Rey  ", 3);
    Cliente cliente2("Martin", "Reyes Flor", 10);
    Cliente cliente3("Cleste", "Mora Diaz  ", 1);
    Cliente cliente4("Julio", "Montez Villar", 7);
    Cliente cliente5("Carlos", "Lozano Ball", 6);

    Cliente clientes[5] = {cliente1, cliente2, cliente3, cliente4, cliente5};

    Repuestos repuestos1("12/04/2020", "Aceite", 550, "Almacen 1", 2000, 15);
    Repuestos repuestos2("01/07/2020", "Camara", 411, "Almacen 3", 1500, 50);
    Repuestos repuestos3("10/08/2020", "Cadena", 80, "Almacen 2", 1200, 45);
    Repuestos repuestos4("02/10/2020", "Frenos", 428, "Almacen 1", 5000, 25);
    Repuestos repuestos5("04/12/2020", "Motor ", 510, "Almacen 3", 2000, 99);

    Repuestos repuesto[5] = {repuestos1, repuestos2, repuestos3, repuestos4, repuestos5};

    ///////////////////////////////////////////////  TXT MENU DIMAMICO    /////////////////////////////////////////////////////////////////

    ofstream archivo("1.MENU DIMAMICO.txt");
    archivo << "\n";
    archivo << "\t" << tienda.getDataTienda();
    archivo << "\n-----------------------------------------------------\n";
    archivo << "\nReportaremos lo siguiente: \n\n";
    archivo << "-Los servicios del taller \n-Empelado y tiempo de ejecucion del servicio \n-Clientes semanales y recurrentes \n-Stock de productos \n-Repuestos vencidos \n\n";
    archivo << "-----------------------------------------------------\n";
    archivo.close();

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////  TXT SERVICIOS    /////////////////////////////////////////////////////////////////

    ofstream archivo2("2.SERVICIOS DEL TALLER.txt");
    archivo2 << "\n";
    archivo2 << "\tLOS SERVICIOS DEL TALLER: ";
    archivo2 << "\n-----------------------------------------------------\n\n";
    archivo2 << "- " << empleado1.getServicios() << "\n";
    archivo2 << "- " << empleado2.getServicios() << "\n";
    archivo2 << "- " << empleado3.getServicios() << "\n";
    archivo2 << "- " << empleado4.getServicios() << "\n";
    archivo2 << "- " << empleado5.getServicios() << "\n";
    archivo2 << "\n-----------------------------------------------------\n";
    archivo2.close();

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////  TXT TIEMPO Y EMPELADO    /////////////////////////////////////////////////////////////

    ofstream archivo3("3.REPORTES.txt");
    archivo3 << "------------------------------------------------------------------------------\n";
    archivo3 << "\n\tEMPRESA: \t" << tienda.getDataTienda();
    archivo3 << "\n\n\tREPORTES SOLICITADOS: ";
    archivo3 << "\n\n------------------------------------------------------------------------------\n";
    archivo3 << "\nEMPLEADO Y TIEMPO DAL DAR EL SERVICIO:\n\n";
    for (int i = 0; i < 5; i++)
    {
        archivo3 << i + 1 << ". " << empleados[i].getDataEmpleado() << "\n";
    }
    archivo3 << "\n------------------------------------------------------------------------------\n";

    ///////////////////////////////////////// TXT CLIENTES MAS COMUNES DE MAYOR A MENOR   ///////////////////////////////////////////////////////

    archivo3 << "\nCLIENTES SEMANALES: \n\n";
    for (int i = 0; i < 5; i++)
    {
        archivo3 << "- " << clientes[i].getDataCliente();
        archivo3 << "\n";
    }

    archivo3 << "\n------------------------------------------------------------------------------\n";
    archivo3 << "\nCLIENTES RECURRENTES: \n\n";
    for (int i = 0; i < 5; i++)
    {
        if (clientes[i].getNumero_compras() > 5)
        {
            archivo3 << "- " << clientes[i].getDataCliente() << "\n";
        }
    }
    archivo3 << "\n------------------------------------------------------------------------------\n";

    /////////////////////////////////////////  TXT STOCK DE PRODUCTOS     ///////////////////////////////////////////////////////

    archivo3 << "\nSTOCK DE PRODUCTOS: \n\n";
    for (int i = 0; i < 5; i++)
    {
        archivo3 << "- " << repuesto[i].getDataRepuestos() << "\n";
    }
    archivo3 << "\n------------------------------------------------------------------------------\n";

    /////////////////////////////////////////  TXT REPUESTOS VENDIDOS     ///////////////////////////////////////////////////////

    archivo3 << "\nREPUESTOS VENDIDOS: \n\n";
    for (int i = 0; i < 5; i++)
    {
        if (repuesto[i].getvendidos() > 38)
        {
            archivo3 << "- " << repuesto[i].getCategoría() << "\tSobran: " << repuesto[i].getCantidad() - repuesto[i].getvendidos() << "\tDe: " << repuesto[i].getCantidad() << "\tUbicado: " << repuesto[i].getUbicacion() << "\n";
        }
    }
    archivo3 << "\n------------------------------------------------------------------------------\n";
    archivo3.close();

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout << "\n---> Revicemos los 3 archivos txt\n\n";
}
