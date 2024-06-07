#include <iostream>
#include <string>
#include <vector>
#include "Livro.hpp"
using namespace std;

    void Livro::setTitulo(std::string _titulo){
        titulo=_titulo;
    }
    void Livro::setAutor(std::string _autor){
        autor=_autor;
    }
    void Livro::setISBN(std::string _ISBN){
        ISBN=_ISBN;
    }
    void Livro::setId(int _id) {
        id = _id;
    }
    void Livro::setEditora(std::string _editora){
        editora=_editora;
    }
    void Livro::setLoc(std::string _localizacao){
        localizacao=_localizacao;
    }
    void Livro::setNumCopia(int _num_copia){
        num_copia=_num_copia;
    }
    
    void Livro::setIsEmprestado(bool _isEmprestado){
        isEmprestado=_isEmprestado;
    }


  