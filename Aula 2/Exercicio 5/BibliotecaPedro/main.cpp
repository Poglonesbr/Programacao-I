// Biblioteca.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.

#include "Livro.hpp"
#include "Usuario.hpp"
#include "Adm.hpp"

#include <string>
#include <vector>
#include <iostream>
using namespace std;

static void opcaoAcao(std::vector<Usuario*>& usuarios, std::vector<Livro*>& livros, Administrador adm) {
	Usuario user;
	Livro livro;
	int opcao;
	std::cout << "\nDigite o numero correspondente a acao:\n 1-Ver livros, 2-Consultar multa, 3-Pagar multa, 4-Solicitar emprestimo. Somente Administradores: 5-Adicionar livro, 6-Apagar usuario." << endl;
	std::cin >> opcao;
	switch (opcao) {
	case 1:
		livro.verLivros(livros);
		opcaoAcao(usuarios, livros, adm);
		break;
	case 2:
		user.consultarMulta();
		opcaoAcao(usuarios, livros, adm);
		break;
	case 3:
		user.pagarMulta();
		opcaoAcao(usuarios, livros, adm);
		break;
	case 4:
		user.solicitarEmprestimo();
		opcaoAcao(usuarios, livros, adm);
		break;
	case 5:
		adm.adicionarLivro(livros);
		opcaoAcao(usuarios, livros, adm);
		break;
	case 6:
		adm.removerUsuario(usuarios);
		opcaoAcao(usuarios, livros, adm);
		break;
	default:
		std::cout << "Número inválido!";
		opcaoAcao(usuarios, livros, adm);
		break;
	};
}

static void cadastro(std::vector<Usuario*>& usuarios, int& id_user, Usuario& user, Administrador& adm, std::vector<Administrador*>& adms) {
	std::string nome;
	std::string email;
	std::string senha;
	int _opc;

	std::cout << "Escreva seu nome de usuario: ";
	std::cin >> nome;
	std::cout << "Digite seu e-mail: ";
	std::cin >> email;
	std::cout << "Digite sua senha: ";
	std::cin >> senha;
	std::cout << "Voce ja tem cadastro? 1-Sim, 2-Nao";
	std::cin >> _opc;
	if (_opc == 1) {
		std::cout << "Voce e administrador? 1-Sim, 2-Nao";
		std::cin >> _opc;
		if (_opc == 1) {
			adm.fazerLogin(email, senha, adms); //Estava como adm=adm.fazerLogin(email, senha, adms);
			return;
		}
		user.fazerLogin(email, senha, usuarios);//Estava como user = user.fazerLogin(email, senha, usuarios);
		return;
	}
	std::cout << "Voce e administrador? 1-Sim, 2-Nao";
	std::cin >> _opc;
	if (_opc == 1) {
		auto new_adm= new Administrador(id_user, senha, email);
		adm.setInfo(senha, email, nome);
		id_user += 1;
		return;
	}
	auto new_usuario = new Usuario(id_user, senha, email);
	user.setInfo(senha, email, nome);
	id_user += 1;
}


int main() {
	int id_user = 0;
	Administrador adm;
	Usuario user;
	Livro livro;
	std::vector<Livro*> livros;
	std::vector<Usuario*> usuarios;
	std::vector<Administrador*> adms;
	cadastro(usuarios, id_user, user, adm, adms);
	opcaoAcao(usuarios, livros, adm);
	return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
