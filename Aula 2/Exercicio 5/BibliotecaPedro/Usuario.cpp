#include <iostream>
#include <string>
#include <vector>

#include "Usuario.hpp"
#include "Livro.hpp"
#include "Adm.hpp"
using namespace std;

Usuario::Usuario(int& id_user, std::string _senha, std::string _email) {
	this->id = id_user;
	senha = _senha;
	email = _email;
};
Usuario::~Usuario() {};

	void Usuario::setInfo(std::string _senha, std::string _email, std::string _nome) {
		senha = _senha;
		email = _email;
		nome = _nome;
	}

	Usuario* Usuario::fazerLogin(std::string email, std::string senha, std::vector<Usuario*>& usuarios) {
		std::cout << "Digite seu email de login: ";
		std::cin >> email;
		std::cout << "Digite sua senha: ";
		std::cin >> senha;
		for (int i = 0; i < usuarios.size(); i++) {
			if (email == usuarios.at(i)->email && senha == usuarios.at(i)->senha) {
				std::cout << "Login realizado com sucesso!";
				return usuarios.at(i);
			}
		}

		std::cout << "Login nao realizado!";
		return usuarios.at(0);
	}

	void Usuario::pagarMulta() {
		int opcao = 0;
		float credito = 0;
		
		float valorPagamento;
		consultarMulta();

		if (credito >= multa) {
			credito = credito - multa;
			multa = 0;
		}
		else {
			std::cout << "Digite o valor do pagamento: ";
			std::cin >> valorPagamento;

			if ((multa - valorPagamento) < 0) {
				std::cout << "O valor de pagamento e maior do que o valor da multa atual R$" << multa << ". \nVoce deseja adicionar o valor restante como credito ? \n1 - Sim 2 - Nao:\n";
				std::cin >> opcao;

				switch (opcao) {
				case 1:
					if ((multa - valorPagamento) < 0) {
						multa = valorPagamento - multa;
						credito = multa;
						multa = 0;
						std::cout << "O valor de credito de sua conta agora e: " << credito << endl;
					}
					break;

				case 2:
					std::cout << "Como nao deseja adicionar como credito pe�o que refa�a o pagamento. \nAgrade�o a compreensao!";
					pagarMulta();
					break;

				default:
					std::cout << "O numero nao corresponde com qualquer opcao citada! Refa�a o pagamento!";
					pagarMulta();
					break;
				}
			}
			else {
				multa -= valorPagamento;
				std::cout << "Sua multa esta no valor de R$" << multa << " atualmente." << endl;
			}
		}
		
	}

	void Usuario::consultarMulta()  {
		if (multa == 0) {
			std::cout << "Nao ha multa em sua conta!";
		}
		else {
			if (credito == 0) {
				std::cout << "A sua multa e de R$" << multa << ". \n";
			}
			else {
				std::cout << "\nA sua multa e de R$" << multa << ", voc� pode utilizar os R$" << credito << " disponiveis como credito." << endl;
			}
		}
	}

	void Usuario::solicitarEmprestimo() {
		std::cout << "Nao fiz nada";
	}

	