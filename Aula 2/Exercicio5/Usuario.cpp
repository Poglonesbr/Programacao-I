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

		if (credito >= multa) {
			credito = credito - multa;
			multa = 0;
		}
		else {
			std::cout << "Digite o valor do pagamento: ";
			std::cin >> valorPagamento;

			if ((multa - valorPagamento) < 0) {
				std::cout << "O valor de pagamento � maior do que o valor da multa atual R$" << multa << ". \nVoc� deseja adicionar o valor restante como cr�dito ? \n1 - Sim 2 - N�o:\n";
				std::cin >> opcao;

				switch (opcao) {
				case 1:
					if ((multa - valorPagamento) < 0) {

						multa = valorPagamento - multa;
						credito = multa;
						multa = 0;
						std::cout << "O valor de credito de sua conta agora �: " << credito << endl;
					}
					break;

				case 2:
					std::cout << "Como n�o deseja adicionar como cr�dito pe�o que refa�a o pagamento. \nAgrade�o a compreens�o!";
					pagarMulta();

					break;

				default:
					std::cout << "O numero n�o corresponde com qualquer op��o citada! Refa�a o pagamento!";
					pagarMulta();

					break;
				}
			}
			else {
				multa -= valorPagamento;
				std::cout << "Sua multa est� no valor de R$" << multa << " atualmente." << endl;
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
				std::cout << "\nA sua multa � de R$" << multa << ", voc� pode utilizar os R$" << credito << " disponiveis como cr�dito." << endl;
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


}