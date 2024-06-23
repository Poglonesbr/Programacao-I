#ifndef ANUNCIO_HPP
#define ANUNCIO_HPP
#include <iostream>
#include <vector>
#include <chrono>
#include <ctime>
#include <sstream>
#include <windows.h>
#include "Anuncio.cpp"

class Usuario;

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

    void setUsuario(Usuario* usuario2){
        this->Usario=usuario2;
    }

    Usuario* usuario2;
    std::string titulo, descricao;
    protected:
    int id;
};

int main(){
    Usuario* usuario2;
    Anuncio* anuncio;
    anuncio->setUsuario(usuario2);
    return 0
}

#endif