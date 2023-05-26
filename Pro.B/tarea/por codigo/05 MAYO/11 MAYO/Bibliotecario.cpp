#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Bibliotecario 
{
private:
    string codigo_bibli;

public:
    Bibliotecario(string _codigo_bibli = "")
    {
        codigo_bibli = _codigo_bibli;
    }

    void setDatoBibliotecario(string _codigo_bibli)
    {
        codigo_bibli = _codigo_bibli;
    }

    string getDataBibliotecario()
    {
        return " Codigo bibliotecario:" + codigo_bibli;
    }

    // metodos de getter an setter

    string getcodigo_bibli()
    {
        return codigo_bibli;
    }

    void setcodigo_bibli(string _codigo_bibli)
    {
        codigo_bibli = _codigo_bibli;
    }
};

class Usuario
{
private:
    string codigo_usuario;

public:
    Usuario(string _codigo_usuario = "")
    {
        codigo_usuario = _codigo_usuario;
    }

    void setDatoUsuario(string _codigo_usuario)
    {
        codigo_usuario = _codigo_usuario;
    }

    string getDataUsuario()
    {
        return " Codigo de usuario:" + codigo_usuario;
    }

    // metodos de getter an setter

    string getcodigo_usuario()
    {
        return codigo_usuario;
    }

    void setcodigo_usuario(string _codigo_usuario)
    {
        codigo_usuario = _codigo_usuario;
    }
};
