#include <iostream>
using namespace std;

int suma(int numero1, int numero2) // pongo un int para retornar el valor de suma
{                                  // ESTA ES UNA FUNCION SUMA
    int suma = 0;
    suma = numero1 + numero2;
    return suma; // Y terminamos pidiendo la suma
}

int resta(int numero1, int numero2) // pongo un int para retornar el valor de resta , EN OTRO CASI SE PONDRIA VOID
{                                   // ESTA ES UNA FUNCION RESTA
    int resta = 0;
    resta = numero1 - numero2;
    return resta; // Y terminamos pidiendo la resta
}

float division(float numero1, float numero2) // pongo un int para retornar el valor de division , EN OTRO CASI SE PONDRIA VOID
{                                            // ESTA ES UNA FUNCION DIVISION
    float division = 0;
    if (numero1 == 0)
    {
        cout << "no se puede dividr entre 0\n";
    }
    else
    {
        division = numero1 / numero2;
    }
    return division; // Y terminamos pidiendo la division
}

int multiplicacion(int numero1, int numero2) // pongo un int para retornar el valor de multiplicacion , EN OTRO CASI SE PONDRIA VOID
{                                            // ESTA ES UNA FUNCION MULTIPLICACION
    int multiplicacion = 0;
    multiplicacion = numero1 * numero2;
    return multiplicacion; // Y terminamos pidiendo la multiplicacion
}
// SABER SI ES PAR
void num_par(int numero)
{
    if (numero % 2 == 0)
    {
        cout << "El numero " << numero << " es par" << endl;
    }
    else
    {
        cout << "El numero " << numero << " es impar" << endl;
    }
}

// SABER SI ES PRIMO
void num_primo(int num)
{
    bool primo = true; // el bool solo devulve 2 vlores (verdadreo y falso)
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            primo = false;
        }
    }
    if (primo)
    {
        cout << "El numero " << num << " es primo" << endl;
    }
    else
    {
        cout << "El numero " << num << " no es primo" << endl;
    }
}

// MESES POR NUMEROS

void nombre_mes(int mes)
{
    switch (mes)
    {
    case 1:
        cout << "El nombre del mes es Enero";
        break;
    case 2:
        cout << "El nombre del mes es Febrero";
        break;
    case 3:
        cout << "El nombre del mes es Marzo";
        break;
    case 4:
        cout << "El nombre del mes es Abril";
        break;
    case 5:
        cout << "El nombre del mes es Mayo";
        break;
    case 6:
        cout << "El nombre del mes es Junio";
        break;
    case 7:
        cout << "El nombre del mes es Julio";
        break;
    case 8:
        cout << "El nombre del mes es Agosto";
        break;
    case 9:
        cout << "El nombre del mes es Septiembre";
        break;
    case 10:
        cout << "El nombre del mes es Octubre";
        break;
    case 11:
        cout << "El nombre del mes es Noviembre";
        break;
    case 12:
        cout << "El nombre del mes es Diciembre";
        break;
    default:
        cout << "El numero de mes no es valido";
        break;
    }
}

// Tabla de multiplicacion
void tabla(int hasta)
{
    for (int i = 1; i <= hasta; i++)
    {
        cout << "\n********** TABLA DEL " << i << " *********" << endl;
        for (int j = 1; j < 13; j++)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << "\n";
    }
}

int main()
{
    int num1, num2, mes;
    cout << "ingrese 2 numeros para la suma"
         << "\n"; // /* y */
    cin >> num1;
    cin >> num2;
    cout << "La suma es: \t" << suma(num1, num2) << "\n"; // este \t = es el TABULADOR
    cout << "La resta es: \t" << resta(num1, num2) << "\n";
    cout << "La division es: \t" << division(num1, num2) << "\n";
    cout << "La multiplicacion es: \t" << multiplicacion(num1, num2) << "\n";
    num_par(num1); // como es un void no se le pone el cour, ya que solo es necesario llamarlo
    num_par(num2);
    num_primo(num1);
    num_primo(num2);

    tabla(13); // 2 = hasta.

    cout << "ingrese el numero del mes: ";
    cin >> mes;
    nombre_mes(mes);

    return 0;
}