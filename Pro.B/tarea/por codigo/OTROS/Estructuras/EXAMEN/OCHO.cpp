/*PREGUNTA OCHO:  escriba un programa que solicite el ingreso de 3 notas al
                    usuario, y luego que calcule el promedio de las notas*/
////////////////////TERMINADO/////////////////////////////////
#include <iostream>
using namespace std;

float PROMEDIO(float num1, float num2, float num3)
{
    return (num1 + num2 + num3) / 3;
}

int main()
{
    // float = es usado para numeros decimales.
    // Hacemos pedido de las 3 notas.

    cout << "Ingrese su primera nota \n";
    float nota1;
    cin >> nota1;

    cout << "Ingrese su segunda nota\n";
    float nota2;
    cin >> nota2;

    cout << "Ingrese su tercera nota\n";
    float nota3;
    cin >> nota3;

    cout << "El promedio de las 3 notas es: " << PROMEDIO(nota1, nota2, nota3);

    return 0;
}
