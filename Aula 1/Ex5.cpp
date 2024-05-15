#include <iostream>
#include <string>
using namespace std;


class Funcionario {
public:
    Funcionario() {};       // Construtor
    ~Funcionario() {};      // Destrutor

    void setInfo(std::string _nome, std::string _cargo) {       //Metodo para salvar as informações
        cargo = _cargo;
        nome = _nome;
    }

    void setSalario(float _salarioBruto, float _beneficios, float _descontos) {         //Metodo para salvar os valores do salario, desconto e beneficio
        salarioBruto = _salarioBruto;
        beneficios = _beneficios;
        descontos = _descontos;
    }

    float calcularSalarioLiquido() {                                //Metodo para calcular o salario liquido do funcionario
        salarioLiquido = salarioBruto + beneficios - descontos;
        return salarioLiquido;
    }
    
    float getSalarioLiquido(){                                       // Metodo para retornar o valor do salario liquido na Class
        return salarioLiquido;
    }
    
    string getNome(){                                       // Metodo para retornar o nome do funcionario na Class
        return nome;
    }
    
    string getCargo(){                                  // Metodo para retornar o cargo do funcionario na Class
        return cargo;
    }

private:            //Definição de variaveis na Class
    std::string nome;
    std::string cargo;
    float salarioLiquido;
    float salarioBruto;
    float beneficios;
    float descontos;
};

int main() {    
    Funcionario empregado;      // Instânciar a Class Funcionario no main
    std::string nome;           // Definir as variaveis no main
    std::string cargo;
    float salarioBruto;
    float descontos;
    float beneficios;

    std::cout << "Informe o nome do funcionário: ";             //Pedir as informações
    std::cin >> nome;

    std::cout << "Informe o salário bruto do funcionário: ";
    std::cin >> salarioBruto;

    std::cout << "Informe o cargo do funcionário: ";
    std::cin >> cargo;

    std::cout << "Informe o benefícios salariais do funcionário: ";
    std::cin >> beneficios;

    std::cout << "Informe os descontos salariais do funcionário: ";
    std::cin >> descontos;

    empregado.setInfo(nome, cargo);                                 // Salvar as informções na Class
    empregado.setSalario(salarioBruto, beneficios, descontos);      // Salvar os valores na Class

    empregado.calcularSalarioLiquido();                             //Chamar o metodo para realizar a conta da media

    // Printar as informações utilizando o get para usar o que está salvo na Class
    std::cout << "O funcionário " << empregado.getNome() << " com o cargo de " << empregado.getCargo() << " tem o salário líquido do  de " << empregado.getSalarioLiquido();

    return 0;
}
