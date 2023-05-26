#include <iostream>
#include <string>
#include "animal.cpp"

using namespace std;

int main()
{
    Animal ani_01(1, "canino", "mamifero");
    Animal ani_02(2, "felino", "mamifero");

    Animal ani_03(3, "accipitridos", "aves");
    Animal ani_04(4, "titonidos", "aves");

    Animal animales[4] = {ani_01, ani_02, ani_03, ani_04};

    for (int i = 0; i < 4; i++)
    {
        animales[i].imprimir();
    }
    
    return 0;
}