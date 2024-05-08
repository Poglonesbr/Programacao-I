#include <iostream>
#include <string>

using namespace std;

 class ContaBancaria{
     public:
        ContaBancaria(){};
        ~ContaBancaria(){};
    
        float fazerSaque(float saque){
            saldo = saldo - saque;
            return saldo;
        };
        
        float fazerDeposito(float deposito){
            saldo = saldo + deposito;
            return saldo;
        };
        
        void setSaldo(float _saldo){
            saldo = _saldo;
        };
        
        void setNumeroConta(float _numeroConta){
            numeroConta = _numeroConta;
        };
        
    private:
        int numeroConta;
        float saldo;
        string nomeTitular;
};

int main() {
        ContaBancaria conta;
        int numeroConta;
        int opcao;
        float saldo;
        float deposito;
        float saque;
        string nomeTitular;
        
        std::cout << "Digite o numero da conta: ";
        std::cin >> numeroConta;
        
        std::cout << "Digite o nome titular da conta: ";
        std::cin >> nomeTitular;
        
        conta.setNumeroConta(numeroConta);
        
        std::cout << "Digite o valor na conta: ";
        std::cin >> saldo;
        
        conta.setSaldo(saldo);
        
        std::cout << "Digite o numero correspondente a ação: \n 1-Deposito, 2-Saque \n";
        
        std::cin >> opcao;
        
        switch (opcao){
            case 1:
                std::cout << "Digite o valor do depósito: ";
                std::cin >> deposito;
                saldo = conta.fazerDeposito(deposito);
                break;
                
            case 2:
                std::cout << "Digite o valor do saque: ";
                std::cin >> saque;
                saldo = conta.fazerSaque(saque);
                break;
            
            default:
                std::cout << "Numero inválido, refaça ";
        }
        
        
        
    std::cout << numeroConta << "\n";
    std::cout << nomeTitular << "\n";
    std::cout << saldo;
    }
