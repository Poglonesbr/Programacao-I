#include <iostream>
#include <vector>
#include <chrono>
#include <ctime>
#include <sstream>
//#include <windows.h>
#include "Emprestimo.hpp"
#include "Livro.hpp"

void Emprestimo::fazerEmprestimo(float& multa, std::vector<Livro*>& livros) {
    std::string ISBN;
    dtaEmprestimo = std::chrono::system_clock::now();
    dtaDevolucao = dtaEmprestimo + std::chrono::hours(24 * 7 * 2);
    std::cout << "Digite o ISBN do livro que ser� emprestado: ";
    std::cin >> ISBN;

    for (int i = 0; i < livros.size(); i++) {
        if (ISBN == livros.at(i)->ISBN && !livros.at(i)->isEmprestado) {
            livros.at(i)->isEmprestado = true;
            return;
        }
    }

    std::cout << "O c�digo ISBN digitado � inv�lido. Digite novamente." << std::endl;
    fazerEmprestimo(multa, livros);
}
