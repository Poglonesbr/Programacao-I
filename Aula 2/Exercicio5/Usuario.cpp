#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Usuario {
public:
	Usuario() {};
	~Usuario() {};

	void fazerLogin(std::string email, std::string senha) {

	}

	void pagarMulta() {
		int opcao = 0;

		consultarMulta();

		multa -= credito;
		std::cout << "Digite o valor do pagamento: ";
		std::cin >> valorPagamento;

		if ((multa - valorPagamento) < 0) {
			std::cout << "O valor de pagamento � maior do que o valor da multa atual " << multa << ". \nVoc� deseja adicionar o valor restante como cr�dito ? \n1 - Sim 2 - N�o";
			std::cin >> opcao;

			switch (opcao) {
			case 1:
				multa -= valorPagamento;

				if ((multa - valorPagamento) > 0) {
					credito = multa;
					multa = 0;
					std::cout << "O valor de credito de sua conta agora �: ", credito;
				}
			case 2:
				std::cout << "Como n�o deseja adicionar como cr�dito pe�o que refa�a o pagamento. \nAgrade�o a compreens�o!";
				pagarMulta();

			default:
				std::cout << "O numero n�o corresponde com qualquer op��o citada! Refa�a o pagamento!";
				pagarMulta();
			}
		}

		
	}



	void consultarMulta() {
		if (multa == 0) {
			std::cout << "N�o h� multa em sua conta!";
		}
		else {
			if (credito == 0) {
				std::cout << "A sua multa � de R$" << multa << ". \n";
			}
			else {
				std::cout << "\nA sua multa � de R$" << multa << ", retirando do credito disponivel para debitar sua conta, ela fica no total de R$" << multa - credito << ".";
			}

		}
	}

		void cadastro() {
			std::cout << "Escreva seu nome de usuario: ";
			std::cin >> nome;
			std::cout << "Digite seu email: ";
			std::cin >> email;
			std::cout << "Digite sua senha: ";
			std::cin >> senha;
		}

		void verLivros() {

		}

		std::string nome;
		std::string email;
		float multa = 10;
		float valorPagamento;
		float credito = 0;

	protected:
	std::string senha;
	std::string telefone;


	
};


int main() {
	Usuario user;


	user.pagarMulta();
}