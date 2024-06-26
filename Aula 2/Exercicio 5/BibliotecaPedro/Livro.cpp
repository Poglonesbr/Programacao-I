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
    
    void Livro::setIsEmprestado(bool _isEmprestado){
        isEmprestado=_isEmprestado;
    }


    void Livro::verLivros(std::vector<Livro>& livros) const {
        if (livros.size() > 0) {
            std::cout << "Informacoes dos livros disponiveis:";

            for (int i = 0; i < livros.size(); i++) {
                if (!isEmprestado) {
                    std::cout << "Titulo: ", livros.at(i).titulo;
                    std::cout << "Autor: ", livros.at(i).autor;
                    std::cout << "ISBN: ", livros.at(i).ISBN;
                    std::cout << "Editora: ", livros.at(i).editora;
                    std::cout << "Localização: ", livros.at(i).localizacao;
                };
            };
            return;
        };
        std::cout << "Nao ha livros disponiveis";
    }

  