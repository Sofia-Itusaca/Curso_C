#include <iostream>
#include <string>
#include "autor.cpp"

using namespace std;

class Libro
{

private:
    string titulo;
    string clasificacion;
    int año_publicacion;
    Autor autor;
    string editorial;

public:
    Libro(string _titulo, string _clasificacion, int _año, string _editorial, Autor _autor)
    {
        titulo = _titulo;
        clasificacion = _clasificacion;
        año_publicacion = _año;
        editorial = _editorial;
        autor = _autor;
    }

    // implementando los geter an setter

    string getTitulo()
    {
        return titulo;
    }
    void setTitulo(string _titulo)
    {
        titulo = _titulo;
    }

    string getClasificacion()
    {
        return clasificacion;
    }
    void setClasificacion(string _clasificacion)
    {
        clasificacion = _clasificacion;
    }

    int getAño_publicacion()
    {
        return año_publicacion;
    }
    void setAño_publicacion(int _año)
    {
        año_publicacion = _año;
    }

    Autor getAutor()
    {
        return autor;
    }
    void setAutor(Autor _autor)
    {
        autor = _autor;
    }

    void imprimir()
    {
        cout << "libro: " + titulo + ", genero: " + clasificacion + ", año: " + to_string(año_publicacion) + ", autor: " + autor.getNombres() + "\n";
    }
};