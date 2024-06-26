#ifndef LIVRO_HPP
#define LIVRO_HPP
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Livro {
public:
    Livro() {};
    ~Livro() {};

    void setTitulo(std::string _titulo);
    void setAutor(std::string _autor);
    void setISBN(std::string _ISBN);
    void setId(int _id);
    void setEditora(std::string _editora);
    void setLoc(std::string _localizacao);

    
    void setIsEmprestado(bool _isEmprestado);

    void verLivros(std::vector<Livro*>& livros) const;

    std::string titulo, autor, ISBN, editora, localizacao;
    bool isEmprestado = false;
private:
    int id;
};
#endif

