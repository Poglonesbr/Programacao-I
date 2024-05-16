#include <iostream>
#include <string>
using namespace std;

class Funcionario {
public:
    Funcionario() {}
     ~Funcionario() {}

    void setNome(std::string _nome) {
        nome = _nome;
    }

    void setSalario(float _salario) {
        salario = _salario;
    }

    virtual void exibeDados() {
        std::cout << "Nome: " << nome << endl;
        std::cout << "Salário: " << salario << endl;
    }

protected:
    std::string nome;
    float salario;
    float salarioAnual;
};

class Assistente : public Funcionario {
public:
    Assistente()  {};
     ~Assistente() {};

    void setMatricula(int _matricula) {
        matricula = _matricula;
    }

    void exibeDados() override {
        Funcionario::exibeDados();
        std::cout << "Matrícula: " << matricula << endl;
    }

    void setCargo(int _cargo) {
        cargo = _cargo;
    }

    float getSalarioAnual(){
        return salarioAnual;
    }

    protected:
        int cargo;
        int matricula;
        
};

class Tecnico : public Assistente {
public:
    Tecnico()  {};
    ~Tecnico() {};

    float ganhoAnual() {
        salarioAnual = (salario + bonusSalarial) * 12;
        return salarioAnual;
    }

    void setBonusSalarial(float _bonusSalarial) {
        bonusSalarial = _bonusSalarial;
    }

    private:
    float bonusSalarial;
};

class Administrativo : public Assistente {
public:
    Administrativo() {};
    ~Administrativo() {};

    float ganhoAnual() {
        if (turno == "noite") {
            salarioAnual = (salario + adicionalNoturno) * 12;
        } else {
            salarioAnual = salario * 12;
        }
        return salarioAnual;
    }
    

    void setTurno(std::string _turno) {
        turno = _turno;
    }

    void setAdicionalNoturno(float _adicionalNoturno) {
        adicionalNoturno = _adicionalNoturno;
    }

private:
    std::string turno;
    float adicionalNoturno;
};

int main() {
    Funcionario empregado;
    Assistente assistant;
    Tecnico tecnico;
    Administrativo admin;
    std::string nome;
    std::string turno;
    int matricula;
    int cargo;
    float salario;
    float bonusSalarial;
    float adicionalNoturno;
    

    std::cout << "Informe o nome do técnico: ";
    std::cin >> nome;
    std::cout << "Informe o salário do técnico: ";
    std::cin >> salario;
    std::cout << "Informe a matrícula do técnico: ";
    std::cin >> matricula;

    std::cout << "Informe o cargo (1 - Técnico, 2 - Administrativo): ";
    std::cin >> cargo;
    
    

    switch(cargo) {
        case 1:
            std::cout << "Informe o bônus salarial do assistente técnico: ";
            std::cin >> bonusSalarial;
            tecnico.setNome(nome);
            tecnico.setMatricula(matricula);
            tecnico.setSalario(salario);
            tecnico.setBonusSalarial(bonusSalarial);
            std::cout << std::endl << "Dados do empregado:" << endl;
            tecnico.exibeDados();
            std::cout << "Ganho anual do técnico: " << tecnico.ganhoAnual() << endl;
        break;

        case 2:
            std::cout << "Informe o turno do assistente administrativo (dia ou noite): ";
            std::cin >> turno;
            std::cout << "Informe o adicional noturno do assistente: ";
            std::cin >> adicionalNoturno;
            admin.setNome(nome);
            admin.setMatricula(matricula);
            admin.setSalario(salario);
            admin.setAdicionalNoturno(adicionalNoturno);
            admin.setTurno(turno);
            std::cout << std::endl << "Dados do empregado:" << endl;
            admin.exibeDados();
            std::cout << "Ganho anual do técnico: " << admin.ganhoAnual() << endl;
            break;
    }

    return 0;
}