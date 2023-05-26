#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Libro
{
private:
    string codigo_libro;
    string titulo;
    string categoria;
    string autor;

public:
    Libro(string _titulo = "", string _codigo_libro = "", string _categoria = "", string _autor = "")
    {
        titulo = _titulo;
        codigo_libro = _codigo_libro;
        categoria = _categoria;
        autor = _autor;
    }

    void setDatosLibro(string _titulo, string _codigo_libro, string _categoria, string _autor)
    {
        titulo = _titulo;
        codigo_libro = _codigo_libro;
        categoria = _categoria;
        autor = _autor;
    }

    string getDataLibro()
    {
        return "Titulo :" + titulo + ", codigo_libro:" + codigo_libro + " categoria: " + categoria + " autor: " + autor;
    }

    // metodos de getter an setter

    string settitulo()
    {
        return titulo;
    }

    void settitulo(string _titulo)
    {
        titulo = _titulo;
    }

    string getCodigo_libro()
    {
        return codigo_libro;
    }

    void setCodigo_libro(string _codigo_libro)
    {
        codigo_libro = _codigo_libro;
    }

    string getcategoria()
    {
        return categoria;
    }

    void setcategoria(string _categoria)
    {
        categoria = _categoria;
    }

    string getautor()
    {
        return autor;
    }

    void setautor(string _autor)
    {
        autor = _autor;
    }

};