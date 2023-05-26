/* PREGUNTA 2 : Escribir un programa para calcule el área de un triángulo, el perímetrode un triangulo */
////////////////////TERMINADO/////////////////////////////////
#include <iostream>
using namespace std;

float AREA(float numero1, float numero2) // pongo un float para que el valor tambien se muestre como decimal
{                                        // ESTA ES UNA FUNCION AREA
    float AREA = 0;
    AREA = (numero1 * numero2) / 2;
    return AREA; // Y terminamos pidiendo la AREA
}

int PERIMETRO(int numero1, int numero2, int numero3) // pongo un int para retornar el valor de PERIMETRO
{                                                    // ESTA ES UNA FUNCION PERIMETRO
    int PERIMETRO = 0;
    PERIMETRO = numero1 + numero2 + numero3;
    return PERIMETRO; // Y terminamos pidiendo la PERIMETRO
}

int main()
{

    float base, altura, lado1, lado2;
    cout << "VAMOS A SACAR EL AREA Y PERIMETRO DE UN TRIANGULO\n";
    cout << "Ingrese su base\n";
    cin >> base;
    cout << "Ingrese su altura\n";
    cin >> altura;
    cout << "Ingrese su lado 1\n";
    cin >> lado1;
    cout << "Ingrese su lado 2\n";
    cin >> lado2;

    cout << "El area del triangulo es: \t" << AREA(base, altura) << "\n";   // MOSTRAMOS EL AREA DEL RETANGULO
    cout << "El perimetro es: \t" << PERIMETRO(base, lado1, lado2) << "\n"; // MOSTRAMOS EL PERIMETRO DEL RETANGULO
}