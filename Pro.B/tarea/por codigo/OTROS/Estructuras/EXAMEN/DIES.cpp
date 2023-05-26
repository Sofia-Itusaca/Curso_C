/*PREGUNTA DIES:

Escriba un programa que simule el juego de adivinar un número. El programa deberá generar  un
número  aleatorio  entre  1  y  100 y pedirle al  usuario  que  adivine  cuál  es.  Si  el usuario ingresa
un número incorrecto, el programa deberá indicarle si el número a adivinar es  mayor  o  menor  al  que  ingresó.
El  juego  termina  cuando  el  usuario  adivina  el  número correcto. */

////////////////////TERMINADO/////////////////////////////////
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int Aleatorio, Numero, intentos = 0;

    srand(time(NULL));            // para generar un aleatorio diferente cada que se ejecuta
    Aleatorio = 1 + rand() % 100; // funcion para generar un aleatorio
    cout << "Posibilidad " << Aleatorio << endl;

    do
    {

        // Controlamos el ingreso de la variable para que sea del 1 al 100
        do
        {
            cout << "ingrese un numero entre [1-100]" << endl;
            cin >> Numero;
        } while (Numero < 1 || Numero > 100);
        // preguntamos si el numero es menor que el aleatorio generado
        if (Numero < Aleatorio)
        {
            cout << "Ingrese un numero mayor" << endl;
        }
        else
        {
            cout << "Ingrese un numero menor" << endl;
        }
        intentos++;
        // usamos el do while para que cuando el numero se igual recien termine
        // de pedir numero
    } while (Numero != Aleatorio);
    // imprimimos que ha ganadado y las veces de intentos
    cout << "FELICIDADES HAZ GANADO" << endl;
    cout << "El numero misterioso es: " << Aleatorio << endl;
    cout << "numero de intentos : " << intentos << endl;
    return 0;
}
