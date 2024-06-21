#ifndef PRODUTO_HPP
#define PRODUTO_HPP
#include <iostream>
#include <vector>
#include "produto.cpp"

class Produto(){
    public:
    Produto(){}
    ~Produto(){}

    void setNome (std::string _Nome){
        nome=_Nome
    }
    void setMarca (std::string _marca){
        marca=_marca;
    }
    void setEstado (std::string _estado){
        estado=_estado;
    }
    void setId (int _id){
        id=_id
    }
    void setQntd (int _quantidade){
        quantidade=_quantidade;
    }
    void setPreco (float _preco){
        preco=_preco;
    }
    
    protected:
    std::string nome, marca, estado;
    int id, quantidade;
    float preco;
};

int main(){
    std::vector<Produto> produtos;
}

#endif