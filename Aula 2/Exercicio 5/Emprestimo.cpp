#include <iostream>
#include <vector>
#include <chrono>
#include <ctime>
#include <sstream>
#include <windows.h>
#include "Emprestimo.hpp"

void Emprestimo::fazerEmprestimo(){
    multa=0;
    dtaEmprestimo= std::chrono::system_clock::now();
    dtaDevolucao= dtaEmprestimo + std::chrono::hours(24 * 7 * 2);
    std::cout << "Digite o ISBN do livro que será emprestado. ";
    std::cin >> ISBN

    for(int i=0; i< livros->size(); i++){
        if (ISBN == livros->at(i).ISBN && livros.(i)isEmprestado == false){
            livros.(i)isEmprestado = true;
            return;
        }
    }
    std::cout << "O código ISBN digitado foi inválido. Digite CORRETAMENTE.";
    fazerEmprestimo();
}