#include <iostream>
#include <vector>
#include "produto.hpp"

void verificarQuantidade(){
    std::cout << "Digite o ID do produto que se deseja ver a quantidade. ";
    std::cin >> id;
    for(int i=0; i< produtos->size(); i++){
        if (id == produtos->at(i).id){
            std::cout << "Quantidade: " << quantidade;
            return;
        }
    }
    std::cout << "O ID do produto digitado foi inválido. Digite CORRETAMENTE.";
    fazerEmprestimo();
}