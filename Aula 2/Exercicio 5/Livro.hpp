#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Livro {
public:
    Livro(int _id, string _titulo, std::string _autor, std::string _ISBN, std::string _editora, std::string _localizacao, int _num_copia) {
        id = _id;
        num_copia = _num_copia;
        autor = _autor;
        ISBN = _ISBN;
        editora = _editora;
        localizacao = _localizacao;

    };       
    ~Livro() {};

    void setTitulo(std::string _titulo);
    void setAutor(std::string _autor);
    void setISBN(std::string _ISBN);
    void setId(int _id);
    void setEditora(std::string _editora);
    void setLoc(std::string _localizacao);
    void setNumCopia(int _num_copia);
    
    void setIsEmprestado(bool _isEmprestado);
   

    std::string titulo, autor, ISBN, editora, localizacao;
    int num_copia;
    bool isEmprestado = false;
private:
    int id;

};


