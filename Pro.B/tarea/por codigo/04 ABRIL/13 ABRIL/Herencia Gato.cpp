#include <string>
#include <iostream>
#include <ctime>
#include "Gato.cpp"

using namespace std;

int main()
{
    /*string _nombre, int _vidas, bool _maulla, bool _is_domesticado, string _genero, string _orejas,
    string _cola, string _pelaje, string _ojos, int _n_patas, bool _dientes, string _familia) */
    Gato gat("Pelulsa ", 6, true, true, " Femenino ", "dos orejas ", "una cola ", "pelaje esponjoso ", "ojos verdes ", 4, true, "Felinos ");
    gat.getDatos();
    cout << "\n";

    return 0;
}