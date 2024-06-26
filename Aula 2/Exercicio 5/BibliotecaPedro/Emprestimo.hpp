#ifndef EMPRESTIMO_HPP
#define EMPRESTIMO_HPP
#include <iostream>
#include <vector>
#include <chrono>
#include <ctime>
#include <sstream>
#include <windows.h>
#include "Livro.hpp"

class Emprestimo {
public:
    Emprestimo(Livro& livro, int& counterLoan);
    ~Emprestimo();
    void setMulta(float _multa);
    Livro* getLivroEmprestado();
    std::string getDtaDevolucao();
    std::string getDtaEmprestimo();
    float getMulta();
    int getId();
    void calcMulta();
    void fazerEmprestimo(float& multa, std::vector<Livro>& livros);
protected:
    std::chrono::time_point<std::chrono::system_clock> dtaDevolucao;
    std::chrono::time_point<std::chrono::system_clock> dtaEmprestimo;
    std::chrono::time_point<std::chrono::system_clock> prazoDevolucao;
    Livro* livroEmprestado;
    int multa;
    int id;
};
#endif