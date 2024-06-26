#ifndef ADM_HPP
#define ADM_HPP
#include <iostream>
#include <string>
#include <vector>

#include "Usuario.hpp"
#include "Livro.hpp"

class Administrador : public Usuario {
public:
	Administrador() {};
	Administrador(int& id_user, std::string senha, std::string email);
	~Administrador() {};

	Administrador* fazerLogin(std::string email, std::string senha, std::vector<Administrador*>& adms);


	void adicionarLivro(std::vector<Livro*> &livros);

	void removerUsuario(std::vector<Usuario*> &usuarios);

};
#endif