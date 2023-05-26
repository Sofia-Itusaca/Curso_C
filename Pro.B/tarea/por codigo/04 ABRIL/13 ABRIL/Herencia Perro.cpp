#include <string>
#include <iostream>
#include <ctime>
#include "Perro.cpp"

using namespace std;

int main()
{
    Perro perr("Fortachon ", true, true, " Masculino ", "dos orejas ", "una cola ", "pelaje liso ", "ojos morraones ", 4, true, "Canino");
    perr.getDatos();
    cout << "\n";

    return 0;
}