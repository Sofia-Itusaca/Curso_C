/*crear una clase cuadrilatero
implementar un constructor
implemetar los metos para manupukar las variables
implementar metodos para calcular el area y perimetro*/

/*declarar 3 clases de tipos cuadrilatero
modificar los lados de 2 de ellas
realice la sumatoria de todos los  lados
imprimimos en area de cada cuadrilatero
imprimimos en perimetro de cada cuadrilatero
relaizar la suma total del area
relaizar la suma total del perimetro*/

#include <iostream>
using namespace std;

class Cuadrilatero
{
private:
    float lado1;
    float lado2;
    float base1;
    float base2;
    float altura;
    float diagonal1;
    float diagonal2;

public:
    Cuadrilatero(float _lado1, float _lado2, float _base1, float _base2, float _altura, float _diagonal1, float _diagonal2)
    {
        lado1 = _lado1;
        lado2 = _lado2;
        base1 = _base1;
        base2 = _base2;
        altura = _altura;
        diagonal1 = _diagonal1;
        diagonal2 = _diagonal2;
    }

    Cuadrilatero()
    {
        lado1 = 0;
        lado2 = 0;
        base1 = 0;
        base2 = 0;
        altura = 0;
        diagonal1 = 0;
        diagonal2 = 0;
    }

    float getLado1()
    {
        return lado1;
    }
    void setLado1(float _lado1)
    {
        lado1 = _lado1;
    }

    float getLado2()
    {
        return lado2;
    }
    void setLado2(float _lado2)
    {
        lado2 = _lado2;
    }

    float getBase1()
    {
        return base1;
    }
    void setBase1(float base1)
    {
        base1 = base1;
    }

    float getBase2()
    {
        return base2;
    }
    void setBase2(float _base2)
    {
        base2 = _base2;
    }

    float getAltura()
    {
        return altura;
    }
    void setAltura(float _altura)
    {
        altura = _altura;
    }

    float getDiagonal1()
    {
        return diagonal1;
    }
    void setDiagonal1(float _diagonal1)
    {
        diagonal1 = _diagonal1;
    }

    float getDiagonal2()
    {
        return diagonal2;
    }
    void setDiagonal2(float _diagonal2)
    {
        diagonal2 = _diagonal2;
    }

    // CALCULAR EL AREA///////////////////////////////////////////////
    float cuadrado_area()
    {
        float area1 = base1 * lado1;
        return area1;
    }

    float rectangulo_area()
    {
        float area2 = base1 * lado1;
        return area2;
    }

    float rombo_area()
    {
        float area3 = (diagonal1 * diagonal2) / 2;
        return area3;
    }

    float trapecio_area()
    {
        float area4 = ((diagonal1 + diagonal2) / 2) * altura;
        return area4;
    }
    //////////////////////////////////////////////////////////////////7

    // CALCULAR EL PERIMETRO////////////////////////////////////////7//
    float perimetro()
    {
        float perimetro = lado1 + lado2 + base1 + base2 + altura + diagonal1 + diagonal2;
        return perimetro;
    }
    ///////////////////////////////////////////////////////////////////

    // CALCULAR AREA Y DETERMINAMOS QUE TIPO DE CUADRILATERO ES:
    void tipo_cuadrilatero()
    {
        // EVALUALR 4 OPCIONES:
        float area1 = cuadrado_area();
        float area2 = rectangulo_area();
        float area3 = rombo_area();
        float area4 = trapecio_area();

        // CUADRADO
        if (base1 == lado1 && lado1 == lado2 && lado2 == base2 && diagonal1 == diagonal2)
        {
            cout << "-Es un Cuadrado y su area es [" << cuadrado_area() << "]";
        }
        // RECTANGULO
        if (base1 == base2 && lado1 == lado2 && base1 != lado1 && base2 != lado2)
        {
            cout << "-Es un Rectangulo y su area es [" << rectangulo_area() << "]";
        }
        // ROMBO
        if (base1 == lado1 && lado1 == lado2 && lado2 == base2 && base1 == base2 && diagonal1 != diagonal2)
        {
            cout << "-Es un Rombo y su area es [" << rombo_area() << "]";
        }

        // TRAPECIO
        if (base1 != lado1 && lado1 != lado2 && lado2 != base2 && diagonal1 != diagonal2)
        {
            cout << "-Es un Trapecio y su area es [" << trapecio_area() << "]";
        }
    }
};

int main()
{
    // lado1 ---->lado2 ---->base1 ---->base2 ---->altura ---->diagonal1 ---->diagonal2
    Cuadrilatero Cuadrilatero_1(3, 4, 4, 4, 0, 0, 0);
    Cuadrilatero Cuadrilatero_2(4, 1, 8, 8, 0, 0, 0);
    Cuadrilatero Cuadrilatero_3(3, 3, 3, 3, 0, 5, 6);
    Cuadrilatero Cuadrilatero_4(5, 3, 4, 10, 10, 5, 6);

    // modificando los lados de C1 Y C2

    Cuadrilatero_1.setLado1(4);
    Cuadrilatero_2.setLado2(4);

    // Imprimimos cada cuadrilatero y sus perimetros

    Cuadrilatero_1.tipo_cuadrilatero();
    cout << " y su perimetro es [" << Cuadrilatero_1.perimetro() << "]\n";

    Cuadrilatero_2.tipo_cuadrilatero();
    cout << " y su perimetro es [" << Cuadrilatero_2.perimetro() << "]\n";

    Cuadrilatero_3.tipo_cuadrilatero();
    cout << " y su perimetro es [" << Cuadrilatero_3.perimetro() << "]\n";

    Cuadrilatero_4.tipo_cuadrilatero();
    cout << " y su perimetro es [" << Cuadrilatero_4.perimetro() << "]\n";

    cout << "-la suma total de todas las areas es = " << Cuadrilatero_1.cuadrado_area() + Cuadrilatero_2.rectangulo_area() + Cuadrilatero_3.rombo_area() + Cuadrilatero_4.trapecio_area() << "\n";
    cout << "-la suma total de todos los perimetro como la suma de todos los lados es = " << Cuadrilatero_1.perimetro() + Cuadrilatero_2.perimetro() + Cuadrilatero_3.perimetro() + Cuadrilatero_4.perimetro() << "\n";
}
