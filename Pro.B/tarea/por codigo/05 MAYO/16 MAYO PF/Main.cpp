#include <iostream>
#include <fstream>
#include <iomanip>
#include "Class Tienda.cpp"
using namespace std;

int main()
{
    int contra2, i = 4, a = 0, b = 0;
    int contra1 = 1234;
    int selec_empleado, accion, codigo;
    float sueldo = 1200;
    int elegir_marca, elegir_modelo;
    float suma = 0.0, total_comisiones = 0.0, sueldo_total = 0.0;

    Tienda tienda("AUTOLAND", "Av. Tomas Valle, Independencia", "969365258");

    Empleado empleado1(202301, 5, "Oscar Jesus", "Chavez Carrion");
    Empleado empleado2(202302, 4, "Ana Sofia", "Itusaca Laberiano");
    Empleado empleado3(202303, 7, "Jose Carlos", "Laurencio Palomino");

    Autos auto_01("HYUNDAI", "ACCENT", 56'962);
    Autos auto_02("HYUNDAI", "ELANTRA", 79'382);
    Autos auto_03("HYUNDAI", "VENUE", 73'088);
    Autos auto_04("HYUNDAI", "NEW CRETA", 79'838);
    Autos auto_05("HYUNDAI", "NEW SANTA FE", 121'088);
    Autos auto_06("MITSUBISHI", "ECLIPSE CROSS", 112'062);
    Autos auto_07("MITSUBISHI", "GRAND OUTLANDER", 159'562);
    Autos auto_08("MITSUBISHI", "NEW MONTERO SPORT", 187'463);
    Autos auto_09("MITSUBISHI", "ALL NEW XPANDER", 73'088);
    Autos auto_10("MITSUBISHI", "NEW ASX", 78'713);
    Autos auto_11("NISSAN", "FRONTIER", 102'505);
    Autos auto_12("NISSAN", "SENTRA", 79'002);
    Autos auto_13("NISSAN", "PATROL", 317'262);
    Autos auto_14("NISSAN", "KICKS", 66'863);
    Autos auto_15("NISSAN", "VERSA", 60'750);
    Autos auto_16("FORD", "RANGER", 101'213);
    Autos auto_17("FORD", "TERRITORY", 104'963);
    Autos auto_18("FORD", "MAVERICK", 121'838);
    Autos auto_19("FORD", "ESCAPE", 161'213);
    Autos auto_20("FORD", "EXPLORER", 198'713);
    Autos auto_21("CHERY", "TIGGO 8 PRO", 110'588);
    Autos auto_22("CHERY", "ARRIZO 5", 246'990);
    Autos auto_23("CHERY", "ECLIPSE CROSS", 47'025);
    Autos auto_24("CHERY", "TIGGO 2 PRO", 52'463);
    Autos auto_25("CHERY", "TIGGO 7 PRO", 80'588);

    Autos vendidos1[empleado1.getCantidadVendidos()] = {auto_09, auto_13, auto_17, auto_21, auto_01};
    Autos vendidos2[empleado2.getCantidadVendidos()] = {auto_03, auto_14, auto_24, auto_23};
    Autos vendidos3[empleado3.getCantidadVendidos()] = {auto_22, auto_16, auto_15, auto_02, auto_11, auto_04, auto_25};

    Empleado empleados[3] = {empleado1, empleado2, empleado3};

    Autos autos[25] = {auto_01, auto_02, auto_03, auto_04, auto_05, auto_06, auto_07, auto_08, auto_09, auto_10, auto_11, auto_12, auto_13,
                       auto_14, auto_15, auto_16, auto_17, auto_18, auto_19, auto_20, auto_21, auto_22, auto_23, auto_24, auto_25};

    int valor_autos = sizeof(autos) / sizeof(autos[0]);

    cout << "\t BIENVENIDO A " << tienda.getNombreTienda()
         << "\n-------------------------------------------------\n"
         << "Que operacion desea realizar\n\n"
         << "1. Informacion de ventas del mes de cada empleado \n"
         << "2. Proforma de un auto \n ->";
    cin >> accion;
    while (accion > 2 || accion < 1)
    {
        system("cls");
        cout << "Esa opcion no existe, las opciones son 1-2\n"
             << "Que operacion desea realizar\n\n"
             << "1. Informacion de ventas de cada empleado \n"
             << "2. Proforma de un auto \n ->";
        cin >> accion;
    }

    if (accion == 1)
    {
        system("cls");
        cout << "Intruduzca la contrasena: \n";
        cin >> contra2;

        while (contra1 != contra2)
        {
            i--;

            cout << "contrasena incorrecta intentelo nuevamente"
                 << "\n";
            cout << "intruduzca su contrasena: ";
            cin >> contra2;
            cout << "\n";
            if (contra1 != contra2)
            {
                cout << "le quedan " << i << " intentos"
                     << "\n";
            }
            if (i == 0)
            {
                cout << "Muchos intentos, no puedes acceder al sistema";
                break;
            }
        }

        if (contra1 == contra2)
        {
            // Lista de empleados
            system("cls");
            cout << "LISTA DE EMPLEADOS: \n";
            for (int i = 0; i < 3; i++)
            {
                cout << i + 1 << ". " << empleados[i].getDatosEmpleado() << "\n";
            }
            cout << "\nSeleccion que empleado desea evaluar \n->";
            cin >> selec_empleado;
            ofstream archivo("Reporte.txt");

            if (selec_empleado == 1)
            {
                archivo << "\t" << tienda.getNombreTienda();
                archivo << " REPORTE DE VENTAS DEL MES\n";
                archivo << "\nEmpleado: " << empleado1.getDatosEmpleado() << "\n";
                archivo << "\nAutos Vendidos: \n";
                for (int i = 0; i < empleado1.getCantidadVendidos(); i++)
                {
                    archivo << left << setw(30) << vendidos1[i].MostrarClaseAutos();
                    archivo << setw(3) << "s/ ";
                    archivo << right << setw(7) << vendidos1[i].getPrecio() << "\n";
                    suma += vendidos1[i].getPrecio();
                }
                archivo << right << setw(41) << "____\n";
                archivo << left << setw(30) << "Ganancia Total: ";
                archivo << setw(3) << "s/ ";
                archivo << right << setw(7) << suma << "\n";

                archivo << " _______________\n";
                archivo << "|											|\n";
                archivo << left << setw(31) << "|Sueldo";
                archivo << setw(5) << ": s/";
                archivo << right << setw(7) << sueldo << " |\n";
                archivo << left << setw(31) << "|Total ganacias";
                archivo << setw(5) << ": s/";
                archivo << right << setw(7) << suma << " |\n";
                if (empleado1.getCantidadVendidos() >= 5)
                {
                    total_comisiones = suma * 0.05;
                }
                else
                {
                    (empleado1.getCantidadVendidos() < 5);
                    total_comisiones = suma * 0.03;
                }
                sueldo_total = sueldo + total_comisiones;

                archivo << left << setw(31) << "|Comision por las ventas";
                archivo << setw(5) << ": s/";
                archivo << right << setw(7) << total_comisiones << " |\n";
                archivo << left << setw(31) << "|Sueldo del mes";
                archivo << setw(5) << ": s/";
                archivo << right << setw(7) << sueldo_total << " |\n";
                archivo << "|_______________|";
            }
            if (selec_empleado == 2)
            {
                archivo << "\t" << tienda.getNombreTienda();
                archivo << " REPORTE DE VENTAS DEL MES\n";
                archivo << "\nEmpleado: " << empleado2.getDatosEmpleado() << "\n";
                archivo << "\nAutos Vendidos: \n";
                for (int i = 0; i < empleado2.getCantidadVendidos(); i++)
                {
                    archivo << left << setw(30) << vendidos2[i].MostrarClaseAutos();
                    archivo << setw(3) << "s/ ";
                    archivo << right << setw(7) << vendidos2[i].getPrecio() << "\n";
                    suma += vendidos2[i].getPrecio();
                }
                archivo << right << setw(41) << "____\n";
                archivo << left << setw(30) << "Ganancia Total: ";
                archivo << setw(3) << "s/ ";
                archivo << right << setw(7) << suma << "\n";

                archivo << " _______________\n";
                archivo << "|											|\n";
                archivo << left << setw(31) << "|Sueldo";
                archivo << setw(5) << ": s/";
                archivo << right << setw(7) << sueldo << " |\n";
                archivo << left << setw(31) << "|Total ganacias";
                archivo << setw(5) << ": s/";
                archivo << right << setw(7) << suma << " |\n";
                if (empleado2.getCantidadVendidos() >= 5)
                {
                    total_comisiones = suma * 0.05;
                }
                else
                {
                    (empleado2.getCantidadVendidos() < 5);
                    total_comisiones = suma * 0.03;
                }
                sueldo_total = sueldo + total_comisiones;

                archivo << left << setw(31) << "|Comision por las ventas";
                archivo << setw(5) << ": s/";
                archivo << right << setw(7) << total_comisiones << " |\n";
                archivo << left << setw(31) << "|Sueldo del mes";
                archivo << setw(5) << ": s/";
                archivo << right << setw(7) << sueldo_total << " |\n";
                archivo << "|_______________|";
            }
            if (selec_empleado == 3)
            {
                archivo << "\t" << tienda.getNombreTienda();
                archivo << " REPORTE DE VENTAS DEL MES\n";
                archivo << "\nEmpleado: " << empleado3.getDatosEmpleado() << "\n";
                archivo << "\nAutos Vendidos: \n";
                for (int i = 0; i < empleado3.getCantidadVendidos(); i++)
                {
                    archivo << left << setw(30) << vendidos3[i].MostrarClaseAutos();
                    archivo << setw(3) << "s/ ";
                    archivo << right << setw(7) << vendidos3[i].getPrecio() << "\n";
                    suma += vendidos3[i].getPrecio();
                }
                archivo << right << setw(41) << "____\n";
                archivo << left << setw(30) << "Ganancia Total: ";
                archivo << setw(3) << "s/ ";
                archivo << right << setw(7) << suma << "\n";

                archivo << " _______________\n";
                archivo << "|											|\n";
                archivo << left << setw(31) << "|Sueldo";
                archivo << setw(5) << ": s/";
                archivo << right << setw(7) << sueldo << " |\n";
                archivo << left << setw(31) << "|Total ganacias";
                archivo << setw(5) << ": s/";
                archivo << right << setw(7) << suma << " |\n";
                if (empleado3.getCantidadVendidos() >= 5)
                {
                    total_comisiones = suma * 0.05;
                }
                else
                {
                    (empleado3.getCantidadVendidos() < 5);
                    total_comisiones = suma * 0.03;
                }
                sueldo_total = sueldo + total_comisiones;

                archivo << left << setw(31) << "|Comision por las ventas";
                archivo << setw(5) << ": s/";
                archivo << right << setw(7) << total_comisiones << " |\n";
                archivo << left << setw(31) << "|Sueldo del mes";
                archivo << setw(5) << ": s/";
                archivo << right << setw(7) << sueldo_total << " |\n";
                archivo << "|_______________|";
                archivo.close();
            }
        }
    }

    if (accion == 2)
    {
        system("cls");
        cout << "Introduzca su codigo de empleado \n";
        cin >> codigo;
        while (codigo != empleado1.getCodigo() && codigo != empleado2.getCodigo() && codigo != empleado3.getCodigo())
        {
            system("cls");
            cout << "El codigo no concuerda con algun empleado \n";
            cout << "Introduce nuevamente el codigo \n";
            cin >> codigo;
        }
        if (codigo == empleado1.getCodigo())
        {
            codigo = 0;
        }
        if (codigo == empleado2.getCodigo())
        {
            codigo = 1;
        }
        if (codigo == empleado3.getCodigo())
        {
            codigo = 2;
        }

        system("cls");
        cout << "DATOS DEL CLIENTE\n\n";
        string _nombre = "";
        string _apellido = "";
        string _dni = "";
        string _numero_persona = "";
        cout << "Ingrese los datos del cliente\n";
        cout << "\nNombre: ";
        cin >> _nombre;
        cout << "\nApellidos: ";
        cin >> _apellido;
        cout << "\nNumero de celular: ";
        cin >> _numero_persona;
        cout << "\nDNI: ";
        cin >> _dni;
        Cliente cliente(_numero_persona, _dni, _nombre, _apellido);
        system("pause");
        system("cls");
        cout << "MARCAS DE LOS AUTOS:\n";
        while (a < valor_autos)
        {
            cout << b + 1 << ".- " << autos[a].getMarca() << "\n";
            b++;
            a += 5;
        }
        cout << "Seleccione la marca del auto para sacar la proforma\n->";
        cin >> elegir_marca;
        while (elegir_marca > 5 || elegir_marca < 1)
        {
            cout << "Esa opcion no es valida, las opciones son del 1 al 5\n";
            cout << "Seleccione la marca del auto para sacar la proforma\n";
            cout << "->";
            cin >> elegir_marca;
        }
        if (elegir_marca == 1)
        {
            system("cls");
            cout << "Lista de modelos marca HYUNDAI\n";
            for (int i = 0; i < valor_autos; i++)
            {
                if (autos[i].getMarca() == "HYUNDAI")
                {
                    cout << i + 1 << ". " << autos[i].MostrarClaseAutos() << "\n";
                }
            }
            cout << "Seleccione el modelo: \n";
            cin >> elegir_modelo;
            while (elegir_modelo > 5 || elegir_modelo < 1)
            {
                system("cls");
                cout << "Lista de modelos marca HYUNDAI\n";
                for (int i = 0; i < valor_autos; i++)
                {
                    if (autos[i].getMarca() == "HYUNDAI")
                    {
                        cout << i + 1 << ". " << autos[i].MostrarClaseAutos() << "\n";
                    }
                }
                cout << "Esa opcion no es valida, las opciones son del 1 al 5\n";
                cout << "Seleccione el modelo: \n";
                cout << "->";
                cin >> elegir_modelo;
            }
            elegir_modelo--;
        }
        if (elegir_marca == 2)
        {
            system("cls");
            cout << "Lista de modelos marca MITSUBISHI\n";
            for (int i = 0; i < valor_autos; i++)
            {
                if (autos[i].getMarca() == "MITSUBISHI")
                {
                    cout << i - 4 << ". " << autos[i].MostrarClaseAutos() << "\n";
                }
            }
            cout << "Seleccione el modelo: \n";
            cin >> elegir_modelo;
            while (elegir_modelo > 5 || elegir_modelo < 1)
            {
                system("cls");
                cout << "Lista de modelos marca MITSUBISHI\n";
                for (int i = 0; i < valor_autos; i++)
                {
                    if (autos[i].getMarca() == "MITSUBISHI")
                    {
                        cout << i - 4 << ". " << autos[i].MostrarClaseAutos() << "\n";
                    }
                }
                cout << "Esa opcion no es valida, las opciones son del 1 al 5\n";
                cout << "Seleccione el modelo: \n";
                cout << "->";
                cin >> elegir_modelo;
            }
            elegir_modelo += 4;
        }
        if (elegir_marca == 3)
        {
            system("cls");
            cout << "Lista de modelos marca NISSAN\n";
            for (int i = 0; i < valor_autos; i++)
            {
                if (autos[i].getMarca() == "NISSAN")
                {
                    cout << i - 9 << ". " << autos[i].MostrarClaseAutos() << "\n";
                }
            }
            cout << "Seleccione el modelo: \n";
            cin >> elegir_modelo;
            while (elegir_modelo > 5 || elegir_modelo < 1)
            {
                system("cls");
                cout << "Lista de modelos marca NISSAN\n";
                for (int i = 0; i < valor_autos; i++)
                {
                    if (autos[i].getMarca() == "NISSAN")
                    {
                        cout << i - 9 << ". " << autos[i].MostrarClaseAutos() << "\n";
                    }
                }
                cout << "Esa opcion no es valida, las opciones son del 1 al 5\n";
                cout << "Seleccione el modelo: \n";
                cout << "->";
                cin >> elegir_modelo;
            }
            elegir_modelo += 9;
        }
        if (elegir_marca == 4)
        {
            system("cls");
            cout << "Lista de modelos marca FORD\n";
            for (int i = 0; i < valor_autos; i++)
            {
                if (autos[i].getMarca() == "FORD")
                {
                    cout << i - 14 << ". " << autos[i].MostrarClaseAutos() << "\n";
                }
            }
            cout << "Seleccione el modelo: \n";
            cin >> elegir_modelo;
            while (elegir_modelo > 5 || elegir_modelo < 1)
            {
                system("cls");
                cout << "Lista de modelos marca FORD\n";
                for (int i = 0; i < valor_autos; i++)
                {
                    if (autos[i].getMarca() == "FORD")
                    {
                        cout << i - 14 << ". " << autos[i].MostrarClaseAutos() << "\n";
                    }
                }
                cout << "Esa opcion no es valida, las opciones son del 1 al 5\n";
                cout << "Seleccione el modelo: \n";
                cout << "->";
                cin >> elegir_modelo;
            }
            elegir_modelo += 14;
        }
        if (elegir_marca == 5)
        {
            system("cls");
            cout << "Lista de modelos marca CHERY\n";
            for (int i = 0; i < valor_autos; i++)
            {
                if (autos[i].getMarca() == "CHERY")
                {
                    cout << i - 19 << ". " << autos[i].MostrarClaseAutos() << "\n";
                }
            }
            cout << "Seleccione el modelo: \n->";
            cin >> elegir_modelo;
            while (elegir_modelo > 5 || elegir_modelo < 1)
            {
                system("cls");
                cout << "Lista de modelos marca CHERY\n";
                for (int i = 0; i < valor_autos; i++)
                {
                    if (autos[i].getMarca() == "CHERY")
                    {
                        cout << i - 19 << ". " << autos[i].MostrarClaseAutos() << "\n";
                    }
                }
                cout << "Esa opcion no es valida, las opciones son del 1 al 5\n";
                cout << "Seleccione el modelo: \n";
                cout << "->";
                cin >> elegir_modelo;
            }
            elegir_modelo += 19;
        }

        ofstream arc("Proforma.txt");

        if (!arc.is_open())
        {
            cout << "Error al abrir el archivo" << endl;
            return 1;
        }

        arc << tienda.getNombreTienda();
        arc << "\n"
            << tienda.getDireccion();
        arc << "\nContactenos al " << tienda.getNumero();
        arc << "\n\n";
        arc << "                DATOS CLIENTE:                                       DATOS EMPLEADO:                        \n";
        arc << left << setw(15) << "Cliente ";
        arc << setw(3) << ": ";
        arc << left << setw(20) << cliente.getDatosCliente();
        arc << "            ";
        arc << left << setw(15) << "Empleado ";
        arc << setw(3) << ": ";
        arc << left << setw(30) << empleados[codigo].getDatosEmpleado();
        arc << "\n";
        arc << left << setw(15) << "DNI ";
        arc << setw(3) << ": ";
        arc << left << setw(20) << cliente.getDni();
        arc << "            ";
        arc << left << setw(15) << "Codigo ";
        arc << setw(3) << ": ";
        arc << left << setw(30) << empleados[codigo].getCodigo();
        arc << "\n";
        arc << left << setw(15) << "Numero ";
        arc << setw(3) << ": ";
        arc << left << setw(20) << cliente.getNumeroPersona();
        arc << "\n\n";

        arc << left << setw(10) << "Meses";
        arc << left << setw(30) << "Descripcion";
        arc << right << setw(20) << "Precio Cont.";
        arc << right << setw(20) << "Interes Cred.";
        arc << right << setw(20) << "Pagar Mensual";
        arc << right << setw(20) << "Precio Total\n";
        arc << left << setw(10) << "06";
        arc << left << setw(30) << autos[elegir_modelo].MostrarClaseAutos();
        arc << right << setw(20) << autos[elegir_modelo].getPrecio();
        arc << right << setw(20) << autos[elegir_modelo].getPrecio() * 0.06;
        arc << right << setw(20) << (autos[elegir_modelo].getPrecio() + autos[elegir_modelo].getPrecio() * 0.06) / 6;
        arc << right << setw(20) << autos[elegir_modelo].getPrecio() + autos[elegir_modelo].getPrecio() * 0.06 << "\n";
        arc << left << setw(10) << "12";
        arc << left << setw(30) << autos[elegir_modelo].MostrarClaseAutos();
        arc << right << setw(20) << autos[elegir_modelo].getPrecio();
        arc << right << setw(20) << autos[elegir_modelo].getPrecio() * 0.08;
        arc << right << setw(20) << (autos[elegir_modelo].getPrecio() + autos[elegir_modelo].getPrecio() * 0.08) / 12;
        arc << right << setw(20) << autos[elegir_modelo].getPrecio() + autos[elegir_modelo].getPrecio() * 0.08 << "\n";

        arc.close();
    }

    return 0;
}