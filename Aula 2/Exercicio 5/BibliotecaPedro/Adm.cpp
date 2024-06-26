#include <iostream>
#include <string>
#include <vector>
#include "Adm.hpp"
#include "Usuario.hpp"
#include "Livro.hpp"


Administrador::Administrador(int& id_user, std::string _senha, std::string _email) {
	this->id = id_user;
	senha = _senha;
	email = _email;
};

	Administrador* Administrador::fazerLogin (std::string email, std::string senha, std::vector<Administrador*>& adms) {
	for (int i = 0; i < adms.size(); i++) {
		if (email == adms.at(i)->email && senha == adms.at(i)->senha) {
			std::cout << "Login realizado com sucesso!";
			return adms.at(i);
		}
	}
	std::cout << "Login nao realizado!";
	
}

	void Administrador::adicionarLivro(std::vector<Livro*> &livros) {
	std::string titulo, autor, ISBN, editora, localizacao;
	int num_copia;

	// Solicitar informa��es do usu�rio
	std::cout << "Digite o titulo do livro: ";
	std::cin >> titulo;

	std::cout << "Digite o autor do livro: ";
	std::cin >> autor;

	std::cout << "Digite o ISBN do livro: ";
	std::cin >> ISBN;

	std::cout << "Digite a editora do livro: ";
	std::cin >>  editora;

	std::cout << "Digite a localizacao do livro: ";
	std::cin >> localizacao;

	std::cout << "Digite o numero de copias disponiveis: ";
	std::cin >> num_copia;

	auto newLivro = new Livro;
	
	
}

	void Administrador::removerUsuario(std::vector<Usuario*>& usuarios) {
	int _id;
	std::cout << "Digite o id do Usuario a ser exclu�do: ";
	std::cin >> _id;
	for (int i = 0; i < usuarios.size(); i++) {
		if (_id == usuarios.at(i)->id) {
			usuarios.erase(usuarios.begin() + i);
			std::cout << "Usuario excluido com sucesso!";
			return;
		}
	}
	std::cout << "Usuario n�o foi exclu�do!";
	removerUsuario(usuarios);
}
