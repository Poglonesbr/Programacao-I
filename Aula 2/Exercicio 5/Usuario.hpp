#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Usuario {
public:
	Usuario() {};
	~Usuario() {};

	void setInfo(std::string _senha, std::string _email, std::string _nome);

	Usuario fazerLogin(std::string email, std::string senha, std::vector<Usuario> *usuarios, std::vector<Administrador> *adms);

	void pagarMulta();

	void consultarMulta();

	void verLivros();

	void opcaoAcao();

	void solicitarEmprestimo();
	
	std::string email;
	std::string nome;
	float credito;
	float multa;
protected:
	bool adm = false;
	std::string senha;
};




class Administrador : public Usuario {
public:
	Administrador() {};
	~Administrador() {};

	Livro adicionarLivro();

	void opcaoAcao(std::vector<Usuario*> usuarios);

	void removerUsuario(std::vector <Usuario*> usuarios);
	
};


void cadastro(std::vector<Usuario*> usuarios);