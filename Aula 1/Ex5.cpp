#include <iostream>
#include <string>


class Funcionario {
    public: 
      Funcionario(){};
      ~Funcionario(){};


      void setInfo(std::string _nome, std::string _cargo){
        cargo = _cargo;
        nome = _nome;
      }

      void setValor(float _salarioBruto, float _beneficios, float _descontos) {
        salarioBruto = _salarioBruto;
        beneficios = _beneficios;
        descontos = _descontos;
      }

      float contaSalarioLiquido(){
        salarioLiquido = salarioBruto + beneficios - descontos;
        return salarioLiquido;
      }

      private:
        std::string nome;
        std::string cargo;
        float salarioLiquido;
        float salarioBruto;
        float beneficios;
        float descontos;
};

int main()
{
  Funcionario Empregado;
  std::string nome;
  std::string cargo;
  float salarioBruto;
  float salarioLiquido;
  float descontos;
  float beneficios;

  std::cout << "Informe o nome do funcionário: ";
  std::cin >> nome;

  std::cout << "Informe o salário bruto do funcionário: ";
  std::cin >> salarioBruto;

  std::cout << "Informe seu cargo: ";
  std::cin >> cargo;

  std::cout << "Informe os benefícios do funcionário: ";
  std::cin >> beneficios;

  std::cout << "Informe os descontos do funcionário: ";
  std::cin >> descontos;

  Empregado.setInfo(nome, cargo);
  Empregado.setValor(salarioBruto, beneficios, descontos);
  salarioLiquido = Empregado.contaSalarioLiquido();
  std::cout << "O salário líquido do funcionário " << nome << " é de " << salarioLiquido;
    return 0;
}
