#ifndef ANUNCIO_HPP
#define ANUNCIO_HPP
#include <iostream>
#include <vector>
#include <chrono>
#include <ctime>
#include <sstream>
#include <windows.h>
#include "Anuncio.cpp"

class Anuncio{
    public:
    Anuncio(){}
    ~Anuncio(){}

    void setTitulo(std::string _titulo){
        titulo=_titulo;
    }
    void setDescricao(std::string _descricao){
        descricao=_descricao
    }

    std::string titulo, descricao;
    protected:
    int id;
};

#endif