#include <iostream>
#include <string>

using namespace std;

class Funcionario {
public:
    Funcionario() {}
    virtual ~Funcionario() {}

    void setNome(const std::string& _nome) {
        nome = _nome;
    }

    void addAumento(float valor) {
        salario += valor;
    }

    virtual float ganhoAnual() {
        salarioAnual = salario * 12;
        return salarioAnual;
    }

    virtual void exibeDados() {
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Salário: " << salario << std::endl;
    }

protected:
    std::string nome;
    float salario;
    float salarioAnual;
};

class Assistente : public Funcionario {
public:
    Assistente()  {}
    virtual ~Assistente() {}

    int getMatricula() const {
        return matricula;
    }

    void setMatricula(int _matricula) {
        matricula = _matricula;
    }

    void exibeDados() override {
        Funcionario::exibeDados();
        std::cout << "Matrícula: " << matricula << std::endl;
    }

private:
    int matricula;
};

class Tecnico : public Assistente {
public:
    Tecnico()  {}
    ~Tecnico() {}

    float ganhoAnual() override {
        salarioAnual = salario * 12 + bonusSalarial;
        return salarioAnual;
    }

    void setBonusSalarial(float bonus) {
        bonusSalarial = bonus;
    }

private:
    float bonusSalarial;
};

class Administrativo : public Assistente {
public:
    Administrativo() {}
    ~Administrativo() {}

    float ganhoAnual() override {
       
        if (turno == "noite") {
            salarioAnual = (salario + adicionalNoturno) * 12;
        } else {
            salarioAnual = salario * 12;
        }
        return salarioAnual;
    }

    void setTurno(const std::string& _turno) {
        turno = _turno;
    }

    void setAdicionalNoturno(float adicional) {
        adicionalNoturno = adicional;
    }

private:
    std::string turno;
    float adicionalNoturno;
};

int main() {
    std::string nome;
    std::string turno;
    int matricula;
    int cargo;
    float bonusSalarial = 0.0;
    float adicionalNoturno = 0.0;
    float salario;

    std::cout << "Informe o nome do técnico: ";
    std::cin >> nome;
    std::cout << "Informe o salário do técnico: ";
    std::cin >> salario;
    std::cout << "Informe a matrícula do técnico: ";
    std::cin >> matricula;

    std::cout << "Informe o cargo (1 - Técnico, 2 - Administrativo): ";
    std::cin >> cargo;
    Tecnico tecnico;
    Administrativo admin;

    switch(cargo) {
        case 1:
            std::cout << "Informe o bônus salarial do técnico: ";
            std::cin >> bonusSalarial;
            tecnico.setNome(nome);
            tecnico.setMatricula(matricula);
            tecnico.addAumento(salario);
            tecnico.setBonusSalarial(bonusSalarial);
            break;

        case 2:
            std::cout << "Informe o turno do assistente administrativo (dia ou noite): ";
            std::cin >> turno;
            std::cout << "Informe o adicional noturno do assistente: ";
            std::cin >> adicionalNoturno;
            admin.setNome(nome);
            admin.setMatricula(matricula);
            admin.addAumento(salario);
            admin.setTurno(turno);
            admin.setAdicionalNoturno(adicionalNoturno);
            break;
    }

    std::cout << std::endl << "Dados do técnico:" << endl;
    tecnico.exibeDados();
    std::cout << "Ganho anual do técnico: " << tecnico.ganhoAnual() << endl;

    return 0;
}
