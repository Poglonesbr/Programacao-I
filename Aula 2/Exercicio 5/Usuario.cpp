#include <iostream>
#include <string>
#include <vector>

#include "Usuario.hpp"
#include "Livro.hpp"
using namespace std;


	void Usuario::setInfo(std::string _senha, std::string _email, std::string _nome) {
		senha = _senha;
		email = _email;
		nome = _nome;
	}

	Usuario Usuario::fazerLogin(std::string email, std::string senha, std::vector<Usuario> *usuarios, std::vector<Administrador> *adms) {
		int _opcao;
		std::cout << "É login de administador? \n1-Sim, 2-Não\n";
		std::cin >> _opcao;
		if (_opcao == 1) {
			std::cout << "Digite seu email de login: ";
			std::cin >> email;
			std::cout << "Digite sua senha: ";
			std::cin >> senha;

			for (int i = 0; i < adms->size(); i++) {
				if (email == usuarios->at(i).email && senha == usuarios->at(i).senha) {
					std::cout << "Login realizado com sucesso!";

					return usuarios->at(i);
				}
				std::cout << "Login não realizado!";
				fazerLogin(senha, email, usuarios, adms);
			}
			return;
		}
		std::cout << "Digite seu email de login: ";
		std::cin >> email;
		std::cout << "Digite sua senha: ";
		std::cin >> senha;
		for (int i = 0; i < usuarios->size(); i++) {
			if (email == usuarios->at(i).email && senha == usuarios->at(i).senha) {
				std::cout << "Login realizado com sucesso!";
				
				return usuarios->at(i);
			}
			std::cout << "Login não realizado!";
			fazerLogin(senha, email, usuarios, adms);
		}
		
	}

	void Usuario::pagarMulta() {
		int opcao = 0;
		float valorPagamento;
		Usuario::consultarMulta();

		if (credito >= multa) {
			credito = credito - multa;
			multa = 0;
		}
		else {
			std::cout << "Digite o valor do pagamento: ";
			std::cin >> valorPagamento;

			if ((multa - valorPagamento) < 0) {
				std::cout << "O valor de pagamento é maior do que o valor da multa atual R$" << multa << ". \nVocê deseja adicionar o valor restante como crédito ? \n1 - Sim 2 - Não:\n";
				std::cin >> opcao;

				switch (opcao) {
				case 1:
					if ((multa - valorPagamento) < 0) {

						multa = valorPagamento - multa;
						credito = multa;
						multa = 0;
						std::cout << "O valor de credito de sua conta agora é: " << credito << endl;
					}
					break;

				case 2:
					std::cout << "Como não deseja adicionar como crédito peço que refaça o pagamento. \nAgradeço a compreensão!";
					pagarMulta();

					break;

				default:
					std::cout << "O numero não corresponde com qualquer opção citada! Refaça o pagamento!";
					pagarMulta();

					break;
				}
			}
			else {
				multa -= valorPagamento;
				std::cout << "Sua multa está no valor de R$" << multa << " atualmente." << endl;
			}
		}
		
	}

	void Usuario::consultarMulta()  {
		if (multa == 0) {
			std::cout << "Não há multa em sua conta!";
		}
		else {
			if (credito == 0) {
				std::cout << "A sua multa é de R$" << multa << ". \n";
			}
			else {
				std::cout << "\nA sua multa é de R$" << multa << ", você pode utilizar os R$" << credito << " disponiveis como crédito." << endl;
			}
		}
	}

	void Usuario::verLivros() {

		}

	void Usuario::solicitarEmprestimo() {

	}

	void Usuario::opcaoAcao() {
	int opcao;

	std::cout << "Digite o numero correspondente a ação:\n 1-Ver livros, 2-Consultar multa, 3-Pagar multa, 4-Solicitar empréstimo ";
	std::cin >> opcao;
	switch (opcao) {
	case 1:
		verLivros();
		break;
	case 2:
		consultarMulta();
		break;
	case 3:
		pagarMulta();
		break;
	case 4:
		solicitarEmprestimo();
		break;
	default:
		std::cout << "Número inválido!";
		opcaoAcao();
		break;
	}
}

	void cadastro( std::vector<Usuario*> usuarios) {
	std::string nome;
	std::string email; 
	std::string senha;

	std::cout << "Escreva seu nome de usuário: ";
	std::cin >> nome;
	std::cout << "Digite seu e-mail: ";
	std::cin >> email;
	std::cout << "Digite sua senha: ";
	std::cin >> senha;

	Usuario usuario_new;
	usuario_new.setInfo(senha, email, nome);
}


	void Administrador::opcaoAcao(std::vector<Usuario*> usuarios) {
	int opcao;

	std::cout << "Digite o numero correspondente a ação:\n 1-Ver livros, 2-Consultar multa, 3-Pagar multa, 4-Solicitar empréstimo, 5-Adicionar livro, 6-Apagar usuário." << endl;
	std::cin >> opcao;
	switch (opcao) {
	case 1:
		verLivros();
		break;
	case 2:
		consultarMulta();
		break;
	case 3:
		pagarMulta();
		break;
	case 4:
		solicitarEmprestimo();
		break;
	case 5: 
		Administrador::adicionarLivro();
		break;
	case 6:
		removerUsuario(usuarios);
		break;
	default:
		std::cout << "Número inválido!";
		Administrador::opcaoAcao(usuarios);
		break;
	}
}

	Livro Administrador::adicionarLivro() {
	std::string titulo;
	std::string autor;
	std::string ISBN;
	std::string editora;
	std::string localizacao;
	std::string genero;
	int num_copia;
	int id;
	std::cout << "Digite o título do livro: ";
	std::cin >> titulo;
	std::cout << "Digite o id do livro: ";
	std::cin >> id;
	std::cout << "Digite o autor do livro ";
	std::cin >> autor;
	std::cout << "Digite o ISBN do livro: ";
	std::cin >> ISBN;
	std::cout << "Digite o editora do livro: ";
	std::cin >> editora;
	std::cout << "Digite o genero do livro: ";
	std::cin >> genero;
	std::cout << "Digite a localização do livro: ";
	std::cin >> localizacao;
	std::cout << "Digite o número de cópia do livro: ";
	std::cin >> num_copia;
	Livro livro( 1, titulo, autor, ISBN, editora, localizacao, num_copia);
	std::vector<Livro*> livros;
};

	void Administrador::removerUsuario( std::vector <Usuario*> usuarios) {
		int _id;
		std::cout << "Digite o id do usuário a ser removido: ";
		std::cin >> _id;
		usuarios.at(_id)->~Usuario();
		usuarios.erase(usuarios.begin() + _id);
	};


int main() {
	Usuario user;
	Administrador adm;
	std::vector<Usuario*> usuarios;
	std::vector<Administrador*> adms;

	

}