#include <iostream>
#include <string>
#include "libro.cpp"

int main()
{
    Autor autor1("juanito", "perez", "15/05/1800");
    Autor autor2("julio", "Dias", "29/04/2000");

    Libro libro1("programacion basica", "ingenieria", 2023, "UNAS", autor1);
    Libro libro2("aventura", "infatil", 2018, "economia", autor2);
    Libro libro3("educando", "familia", 2015, "UNAS", autor1);
    Libro libro4("autoayuda", "psicologia", 2019, "UNAS", autor2);
    Libro libro5("sobrevive", "psicologia", 2009, "UNAS", autor1);

    Libro lista_libros[5] = {libro5, libro3, libro2, libro4, libro1};
    for (int i = 0; i < 5; i++)
    {
        lista_libros[i].imprimir();
    }

    // cambiar el autor del libro 2023 para julio
    for (int i = 0; i < 5; i++)
    {
        if (lista_libros[i].getAño_publicacion() == 2023)
        {
            lista_libros[i].setAutor(autor2);
        }
    }

    cout << "*********************************\n";

    // libros de juanito
    for (int i = 0; i < 5; i++)
    {
        if (lista_libros[i].getAutor().getNombres() == "Juanito")
        {
            lista_libros[i].imprimir();
        }
    }
}