#include <iostream>
#include <string>

using namespace std;

 class ContaBancaria{
     public:
        ContaBancaria(){}; // Construtor
        ~ContaBancaria(){}; // Destrutor
    
        float fazerSaque(float saque){  // Método para realizar o saque
            saldo = saldo - saque;   // Saldo - o saque
            return saldo;           // Para retornar o valor e deixar salvo na Class
        };
        
        float fazerDeposito(float deposito){    // Método para realizar o deposito
            saldo = saldo + deposito;           // Saldo + o deposito
            return saldo;                       // Para retornar o valor e deixar salvo na Class
        };
        
        void setSaldo(float _saldo){         // Método para "salvar" o saldo na Class
            saldo = _saldo;
        };
        
        void setInfo(float _numeroConta, string _nomeTitular){   // Método para "salvar" as informações da conta na Class
            numeroConta = _numeroConta;
            nomeTitular = _nomeTitular;
        };

        float getSaldo() {
         return saldo;
        };
        
        float getNumeroConta() {
         return numeroConta;
        };

        string getNomeConta() {
         return nomeTitular;
        };
        
    private: // Definir variaveis
        int numeroConta;
        float saldo;
        string nomeTitular;
};

int main() { // Definir variaveis
        ContaBancaria conta; // Instanciar a class no main para ser utilizada no main
        int numeroConta;
        int opcao;
        float saldo;
        float deposito;
        float saque;
        std::string nomeTitular;
        
        std::cout << "Digite o numero da conta: ";   //Receber numero da conta
        std::cin >> numeroConta;
        
        std::cout << "Digite o nome titular da conta: ";  //Receber nome titular da conta
        std::cin >> nomeTitular;
        
        conta.setInfo(numeroConta, nomeTitular);  // Guardar o valor de numero da conta e nome do titular na Class
        
        std::cout << "Digite o valor na conta: "; //Receber o valor na conta
        std::cin >> saldo;
        
        conta.setSaldo(saldo);    // Guardar o valor do saldo na Class
        
        std::cout << "Digite o numero correspondente a ação: \n 1-Deposito, 2-Saque \n";    // Perguntar qual a opção
        std::cin >> opcao;   // Receber a opção
        
        switch (opcao){
            case 1:
                std::cout << "Digite o valor do depósito: ";
                std::cin >> deposito;
                conta.fazerDeposito(deposito);
                break;
                
            case 2:
                std::cout << "Digite o valor do saque: ";
                std::cin >> saque;
                conta.fazerSaque(saque);
                break;
            
            default:
                std::cout << "Numero inválido, refaça ";
        }
        
        
        
    std::cout << conta.getNumeroConta() << endl;
    std::cout << conta.getNomeConta() << endl;
    std::cout << conta.getSaldo();
    }
