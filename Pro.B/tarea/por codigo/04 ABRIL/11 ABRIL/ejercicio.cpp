#include <iostream>
#include <string>
#include <math.h>
using namespace std;

// crear clase
class Triangulo
{
    // atributos
private:
    float base;
    float altura;

    // metodos y funciones
public:
    // constructor
    Triangulo(float _altura, float _base)
    {
        base = _base;
        altura = _altura;
    }

    Triangulo()
    {
        base = 0;
        altura = 0;
    }

    float getBase()
    {
        return base;
    }
    void setBase(float _base)
    {
        base = _base;
    }

    float getAltura()
    {
        return altura;
    }
    void setAltura(float _altura)
    {
        altura = _altura;
    }

    // FUNCIONES

    // CALCULAR LA HIPOTENUSA
    float calcular_hipotenusa()
    {
        float hipotenusa = sqrt((base * base) + (altura * altura));
        return hipotenusa;
    }
    // CALCULAR EL PERIMETRO
    float perimetro()
    {
        float perimetro = altura + base + calcular_hipotenusa();
        return perimetro;
    }

    // CALCULAR AREA
    float area()
    {
        float area = (base * altura) / 2;
        return area;
    }

    // DETERMINAR QU ETIPO DE TRIANGULO ES ENTONCES:
    void tipotriangulo()
    {
        // EVALUALR 3 OPCIONES:
        float hipotenusa = calcular_hipotenusa();

        // equilatero = cuando sus lados son iguales
        if (base == altura && altura == hipotenusa && base == hipotenusa)
        {
            cout << "Es un triangulo equilatero";
        }

        // isoceles = al menos 2 de sus lados son iguales
        if (base == altura || altura == hipotenusa || base == hipotenusa)
        {
            cout << "Es un triangulo isoceles";
        }

        // escaleno = cuando ninguno de sus aldos son iguales
        if (base != altura && altura != hipotenusa && base != hipotenusa)
        {
            cout << "Es un triangulo escaleno";
        }
    }
};

int main()
{
    Triangulo triangulo_1(5, 4);
    Triangulo triangulo_2(14, 15);

    // CAMBIAR LA BASE DEL TRIANGULO 1
    triangulo_1.setBase(20);

    // IMPRIMIMOS LOS VALORES DE LA BASE DE LOS TRIANGULOS t1 y t2
    cout << triangulo_1.getBase();
    cout << "\n";
    cout << triangulo_2.getBase() << "\n";

    // CAMBIAR ALTURA DE T1, T2
    triangulo_1.setAltura(20);
    triangulo_2.setAltura(20);

    // calcular el perimetro t1
    cout << "El perimetro del triangulo 1 es: " << triangulo_1.perimetro() << "\n";

    // CALCULAR HIPOTENUSA T2
    cout << "La hipotenusa del triangulo 2 es: " << triangulo_2.calcular_hipotenusa() << "\n";

    // IMPRIMIR AREAS T1 Y T2
    cout << "El area del triangulo 1 es: " << triangulo_1.area() << "\n";
    cout << "El area del triangulo 2 es: " << triangulo_2.area() << "\n";

    // SUMA DE PERIMETROS T1 Y T2
    cout << "La suma de las areas es: " << triangulo_1.perimetro() + triangulo_2.perimetro() << "\n";

    triangulo_1.tipotriangulo();

    return 0;
}