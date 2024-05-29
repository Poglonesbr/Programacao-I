#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Livro {
public:
    Livro() {};       // Construtor
    ~Livro() {};

    void setTitulo(std::string _titulo){
        titulo=_titulo;
    }
    void setAutor(std::string _autor){
        autor=_autor;
    }
    void setISBN(std::string _ISBN){
        ISBN=_ISBN;
    }
    void setEditora(std::string _editora){
        editora=_editora;
    }
    void setLoc(std::string _localizacao){
        localizacao=_localizacao;
    }
    void setNumCopia(int _num_copia){
        num_copia=_num_copia;
    }
    void setId(int _id){
        id=_id;
    }
    void setIsEmprestado(bool _isEmprestado){
        isEmprestado=_isEmprestado;
    }
    
private:
    std::string titulo, autor, ISBN, editora, localizacao;
    int num_copia, id;
    bool isEmprestado=false;
};

int main() {
    vector<Livro> livros;
}