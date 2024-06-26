#ifndef USUARIO_HPP
#define USUARIO_HPP

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Usuario {
public:
	Usuario() {};
	Usuario(int& id_user, std::string senha, std::string email);
    ~Usuario();

    void setInfo(std::string _senha, std::string _email, std::string _nome);

    Usuario fazerLogin(std::string email, std::string senha, std::vector<Usuario>& usuarios);

	void pagarMulta();
	
	void consultarMulta();

	void solicitarEmprestimo();
	
	std::string email;
	std::string nome;
	float credito = 0;
	float multa = 0;
	int id;
protected:
	std::string senha;
};

#endif