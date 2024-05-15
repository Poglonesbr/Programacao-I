#include <iostream>
#include <string>

class Funcionario {
public:
    Funcionario(std::string _nome, double _salario) : nome(_nome), salario(_salario) {}

    void addAumento(double valor) {
        salario += valor;
    }

    virtual double ganhoAnual() {
        return salario * 12;
    }

    virtual void exibeDados() {
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Salário: " << salario << std::endl;
    }

protected:
    std::string nome;
    double salario;
};

class Assistente : public Funcionario {
public:
    Assistente(std::string _nome, double _salario, int _matricula) 
        : Funcionario(_nome, _salario), matricula(_matricula) {}

    int getMatricula() {
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
    Tecnico(std::string _nome, double _salario, int _matricula, double _bonus)
        : Assistente(_nome, _salario, _matricula), bonusSalarial(_bonus) {}

    double ganhoAnual() override {
        return salario * 12 + bonusSalarial;
    }

private:
    double bonusSalarial;
};

class Administrativo : public Assistente {
public:
    Administrativo(std::string _nome, double _salario, int _matricula, std::string _turno, double _adicionalNoturno)
        : Assistente(_nome, _salario, _matricula), turno(_turno), adicionalNoturno(_adicionalNoturno) {}

    double ganhoAnual() override {
        
        if (turno == "noite") {
           double salarioAnual = (salario + adicionalNoturno) * 12;
          return salarioAnual;
          } else {
          double salarioAnual = salario * 12;
          return salarioAnual;
        }
    }

private:
    std::string turno;
    double adicionalNoturno;
};

int main() {
    std::string nome;
    std::string turno;
    int matricula;
    int cargo;
    double bonusSalarial = 0.0;
    double adicionalNoturno = 0.0;
    double salario;

    std::cout << "Informe o nome do técnico: ";
    std::cin >> nome;
    std::cout << "Informe o salário do técnico: ";
    std::cin >> salario;
    std::cout << "Informe a matrícula do técnico: ";
    std::cin >> matricula;

    std::cout << "Informe o cargo (1 - Técnico, 2 - Administrativo): ";
    std::cin >> cargo;
  Tecnico tecnico(nome, salario, matricula, bonusSalarial);
  Administrativo admin(nome, salario, matricula, turno, adicionalNoturno);
  
    switch(cargo){
      case 1:
        std::cout << "Informe o bônus salarial do técnico: ";
        std::cin >> bonusSalarial;
        break;

      case 2:
        std::cout << "Informe o turno do assistente administrativo (dia ou noite): ";
        std::cin >> turno;
        std::cout << "Informe o adicional noturno do assistente: ";
        std::cin >> adicionalNoturno;
        break;
    }


    std::cout << std::endl << "Dados do técnico:" << std::endl;
    tecnico.exibeDados();
    std::cout << "Ganho anual do técnico: " << tecnico.ganhoAnual() << std::endl;

    return 0;
}
