#include <iostream>
using namespace std;

// declaramos funciones

int suma_matriz(int matriz_suma[5][4], int fila, int columna)
{
    int suma = 0;
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            suma += matriz_suma[i][j]; // suma = suma + matriz_suma[i][j];
        }
    }
    return suma;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// funcion para mostrar matriz//////////////////////////////////////
void imprimir_matriz(int matriz_mostrar[5][4], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "\t" << matriz_mostrar[i][j];
        }
        cout << "\n";
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// funcion para sumar las filas////////////////////////////////////
void sum_fila(int matriz_suma[5][4], int fila, int columna)
{
    int sum_fila;
    for (int i = 0; i < fila; i++)
    {
        int sum_fila = 0;
        for (int j = 0; j < columna; j++)
        {
            sum_fila += matriz_suma[i][j];
        }
        cout << "\n"
             << "la suma de la fila [" << i << "] es: " << sum_fila;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// funcion para sumar las columnas////////////////////////////////

void suma_columna(int matriz_suma[5][4], int fila, int columna)
{
    int sum_columna;
    for (int i = 0; i < columna; i++)
    {
        int sum_columna = 0;
        for (int j = 0; j < fila; j++)
        {
            sum_columna += matriz_suma[j][i];
        }
        cout << "\n"
             << "la suma de la columna [" << i << "] es: " << sum_columna;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// TAREA  ................... valor maximo ///////////////////////////////////////////////////

void maximo(int matriz_maxima[5][4], int fila, int columna)
{

    int valor_maximo = matriz_maxima[0][0];

    for (int x = 0; x < fila; x++)
    {
        for (int y = 1; y < columna; y++)
        { // 2
            if (matriz_maxima[x][y] > valor_maximo)
            {
                valor_maximo = matriz_maxima[x][y];
            }
        }
    }
    cout << "\n"
         << "El valor maximo es: " << valor_maximo;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// TAREA  ...................valor minimo////////////////////////////////////////////////

void minimo(int matriz_minimo[5][4], int fila, int columna)
{

    int valor_minimo = matriz_minimo[0][0];

    for (int x = 0; x < fila; x++)
    {
        for (int y = 1; y < columna; y++)
        { // 2
            if (matriz_minimo[x][y] < valor_minimo)
            {
                valor_minimo = matriz_minimo[x][y];
            }
        }
    }
    cout << "\n"
         << "El valor minimo es: " << valor_minimo;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// TAREA  ...................promedio de (matrices, filas , columanas)//////////////////////////////////////////////////////////////////////7

// TAREA  ...................PROMEDIO MATRIZ:
void promedio_matriz(int suma_matriz[5][4], int fila, int columna)
{
    float cant_matriz = fila * columna; // hallar la cantidad de elementos que se encuentra en la matriz
    float suma = 0;
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++) // el recorrido que se realiza a cada elemento sumndolos
        {
            suma += suma_matriz[i][j];
        }
    }
    float promedio_matriz = suma / cant_matriz;
    cout << "\n"
         << "El promedio de la matriz es: " << promedio_matriz;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// TAREA  ...................PROMEDIO FILA:
void promedio_fila(int suma_matriz[5][4], int fila, int columna)
{
    float sum_fila;
    for (int i = 0; i < fila; i++)
    {
        sum_fila = 0;
        for (int j = 0; j < columna; j++)
        {
            sum_fila += suma_matriz[i][j];
        }
        float promedio = sum_fila / columna;

        cout << "\n"
             << "El promedio de la fila es: " << promedio;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// TAREA  ...................PROMEDIO COLUMNA :
void promedio_columna(int suma_matriz[5][4], int fila, int columna)
{
    float sum_columna;
    for (int i = 0; i < columna; i++)
    {
        sum_columna = 0;
        for (int j = 0; j < fila; j++)
        {
            sum_columna += suma_matriz[j][i];
        }
        float promedio = sum_columna / fila;

        cout << "\n"
             << "El promedio de la columna es: " << promedio;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// TAREA  ...................INVERTIR LA MATRIZ [5][4] --->[4][5]: LLAMADA MATRIZ TRNSPUESTA /////////////////////////////////////////////////////////////////////7
void invertir_Matriz(int matriz[5][4], int fila, int columna)
{
    int nueva_Matriz[4][5];
    for (int elemX = 0; elemX < fila; elemX++) // PONEMOS COMO ELEMENTOSX Y ELEMENTOSY PARA PODER SELECCIONARLOS E INVERTIRLOS
    {
        for (int elemY = 0; elemY < columna; elemY++)
        {
            nueva_Matriz[elemY][elemX] = matriz[elemX][elemY]; // LE DAMOS NUEVO VALOR INVERTIDO A NUESTRA MATRIZ
        }
    }
    cout << "\n Matriz invertida: \n";
    for (int i = 0; i < columna; i++)
    {
        for (int j = 0; j < fila; j++)
        {
            cout << "\t" << nueva_Matriz[i][j];
        }
        cout << "\n";
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    // declaramos una matriz de 5*4

    int matriz[5][4] = {{2, 3, 4, 5}, {6, 7, 8, 9}, {10, 11, 12, 13}, {14, 15, 16, 17}, {18, 19, 20, 21}};

    // Visualiazndo el numero que se encuentra en las filas y columnas eleguidas.
    cout << matriz[0][0] << endl;
    cout << matriz[2][4] << endl;
    cout << matriz[3][0] << endl;

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // Mostrar todaa la matriz divida por un | //////////////////////////////////////////////////////////////////////

    imprimir_matriz(matriz, 5, 4);
    int sum = suma_matriz(matriz, 5, 4);
    cout << "\nla suma es:" << sum << endl;

    sum_fila(matriz, 5, 4);
    cout << endl;

    suma_columna(matriz, 5, 4);
    cout << endl;

    maximo(matriz, 5, 4);
    cout << endl;

    minimo(matriz, 5, 4);
    cout << endl;

    promedio_matriz(matriz, 5, 4);
    cout << endl;

    promedio_fila(matriz, 5, 4);
    cout << endl;

    promedio_columna(matriz, 5, 4);
    cout << endl;

    invertir_Matriz(matriz, 5, 4);

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////

    return 0;
}
