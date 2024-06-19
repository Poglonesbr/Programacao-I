#ifndef USUARIO_HPP
#define USUARIO_HPP
#include <iostream>
#include <vector>


class Usuario(){
    public:
    Usuario(){}
    ~Usuario(){}

    std::string login;
    protected: 
    std::string email, telefone, addr, cpf;

    private: 
    std::string senha;
}

#endif